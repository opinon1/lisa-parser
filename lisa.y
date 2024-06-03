%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


extern int line_number;
extern  int yylex(void);
extern FILE *yyin;
extern char id[100];

void yyerror(char const *s) {
    fprintf(stderr, "SYNTAX ERROR AT LINE %d: %s\n", line_number, s);
    exit(0);
}

#define HASH_SIZE 128



typedef struct Item {
  char identificador[100];
  char ambito[100];
  int lineas;
  char tipo[100];
  struct Item *next;
} Item;

typedef struct IdentifierTable {
  Item *items[HASH_SIZE];
} IdentifierTable;

int hash(const char *id) {
  int sum = 0;
  for (int i = 0; id[i] != '\0'; i++) {
    sum += id[i];
  }
  return sum % HASH_SIZE;
}

IdentifierTable myhashmap = {NULL};
char ambito[100] = "global";

void show(const IdentifierTable *table) {
  printf("-----------------TABLA------------------\n");
  for (int i = 0; i < HASH_SIZE; i++) {
    Item *current = table->items[i];
    while (current != NULL) {
      if (strcmp(current->identificador, "0") != 0) {
        printf("%d %s %s %s %d\n", i, current->identificador, current->ambito,
               current->tipo, current->lineas);
      }
      current = current->next;
    }
  }
  printf("----------------------------------------\n");

}

int insert(IdentifierTable *table, const Item *item) {
  int index = hash(item->identificador);

  if (table->items[index] == NULL) {
    table->items[index] = malloc(sizeof(Item));
    if (table->items[index] == NULL) {
      return 0; // Error: Memory allocation failed
    }
    *table->items[index] = *item;
    table->items[index]->next = NULL;
    return 1;
  }

  Item *current = table->items[index];
  while (current != NULL) {
    if (strcmp(current->identificador, item->identificador) == 0 &&
        strcmp(current->ambito, item->ambito) == 0) {
        printf("%s %s \n", item->identificador, item->ambito);
        show(&myhashmap);
        yyerror("ELEMENTO REPETIDO EN TABLA");
      return 0; // Error: Item already exists
    }
    if (current->next == NULL) {
      current->next = malloc(sizeof(Item));
      if (current->next == NULL) {
        return 0; // Error: Memory allocation failed
      }
      *current->next = *item;
      current->next->next = NULL;
      return 1;
    }
    current = current->next;
  }
  return 0; // Error: Should not reach here
}











void append(char *ambito, const char *new_segment) {
    if (strlen(ambito) + 1 + strlen(new_segment) >= 100) {
        fprintf(stderr, "Error: string too long to append.\n");
        return;
    }

    // Append a dot and the new segment
    strcat(ambito, ".");
    strcat(ambito, new_segment);
}

int pop(char *ambito) {
  char *last_dot = strrchr(ambito, '.');
  if (last_dot != NULL) {
    *last_dot = '\0';

    return 1;
  }
  return 0;
}

Item *get(const IdentifierTable *table, const char *id) {
  int index = hash(id);

  char tmp_ambito[100];
  strcpy(tmp_ambito, ambito);

  Item *base = table->items[index];
  Item *current = base;
  while (current != NULL) {

    if (strcmp(current->identificador, id) == 0 &&
        strcmp(current->ambito, tmp_ambito) == 0) {
      return current;
    }

    current = current->next;

    if (current == NULL) {

      if (pop(tmp_ambito) == 0) {
        break;
      };
      current = base;
    }
  }
  yyerror("Error: Item not found"); 
  return 0;
}


char idlist[100][100];
char types[100][100];
int idindex = 0;

%}


%token TOK_AND TOK_END TOK_LABEL TOK_PROGRAM TOK_UNTIL TOK_ARRAY TOK_FILE TOK_METHODS TOK_RECORD TOK_USES TOK_BEGIN TOK_FOR TOK_MOD TOK_REPEAT TOK_VAR TOK_CASE TOK_FUNCTION TOK_NIL TOK_SET TOK_WHILE TOK_CONST TOK_GOTO TOK_NOT TOK_STRING TOK_WITH TOK_CREATION TOK_IF TOK_OF TOK_SUBCLASS TOK_DIV TOK_IMPLEMENTATION TOK_OR TOK_THEN TOK_DOWNTO TOK_IN TOK_OTHERWISE TOK_TO TOK_DO TOK_INTERFACE TOK_PACKED TOK_TYPE TOK_ELSE TOK_INTRINSIC TOK_PROCEDURE TOK_UNIT
%token TOK_FORWARD TOK_EXTERNAL
%token TOK_NE TOK_LE TOK_GE TOK_ASSIGN TOK_RANGE
%token DIGIT_SEQUENCE HEX_DIGIT_SEQUENCE E STRING

%token dbg_scale_factor  


%left '+' '-'
%left '*' '/' TOK_DIV TOK_MOD
%nonassoc TOK_NE TOK_LE 
%nonassoc TOK_GE TOK_ASSIGN
%right TOK_NOT  
%left TOK_AND TOK_OR
%nonassoc DUM_ELSE 
%nonassoc TOK_ELSE
%left ','
%left ')'


%union {
    char id[100];  // Add an entry for identifiers
}

// Declare the token and its type
%token <id> IDENTIFIER

%type <id> Identifier_or_variable



%%

script: program {printf("valid program\n")};
  
program: program_heading ';' block opt_dot
       |program_heading ';' uses_clause ';' block opt_dot
       ;

opt_dot:
       | '.'
       ;


program_heading: TOK_PROGRAM IDENTIFIER 
{                 Item tmpItem;
    strcpy(tmpItem.identificador, $2);
    strcpy(tmpItem.ambito, ambito);
    tmpItem.lineas = 1;
    strcpy(tmpItem.tipo, "program");
    tmpItem.next = NULL;
    insert(&myhashmap, &tmpItem);
    append(ambito, $2);
}
               | TOK_PROGRAM IDENTIFIER '(' program_parameters ')' 
{                 Item tmpItem;
    strcpy(tmpItem.identificador, $2);
    strcpy(tmpItem.ambito, ambito);
    tmpItem.lineas = 1;
    strcpy(tmpItem.tipo, "program");
    tmpItem.next = NULL;
    insert(&myhashmap, &tmpItem);
    append(ambito, $2);
}
               ;

uses_clause: TOK_USES identifier_list;

block: opt_label_declaration_part
      opt_constant_declaration_part
      opt_type_declaration_part
      opt_variable_declaration_part
      opt_procedure_and_function_declaration_part
      statement_part
      ;


program_parameters: identifier_list;


identifier_list: IDENTIFIER {
        strcpy(idlist[idindex], $1);
    idlist[idindex + 1][0] = '\0';
    idindex++;

            }
| identifier_list ',' IDENTIFIER {
    strcpy(idlist[idindex], $3);
    idlist[idindex + 1][0] = '\0';
    idindex++;

            }
;

opt_label_declaration_part:
                          | label_declaration_part ;

opt_constant_declaration_part:
                             | constant_declaration_part ;

opt_type_declaration_part:
                         | type_declaration_part ;

opt_variable_declaration_part:
                             | variable_declaration_part ;

opt_procedure_and_function_declaration_part: 
                                           | procedure_and_function_declaration_part;


label_declaration_part: TOK_LABEL label_declaration_part_inner ';';

constant_declaration_part: TOK_CONST constant_declaration_part_inner;

type_declaration_part: TOK_TYPE type_declaration_part_inner;
  
variable_declaration_part: TOK_VAR variable_declaration_part_inner;

procedure_and_function_declaration_part: procedure_declaration
                                       | function_declaration
                                       | procedure_declaration procedure_and_function_declaration_part
                                       | function_declaration procedure_and_function_declaration_part
                                       ;

statement_part: compound_statement;


label_declaration_part_inner: label
                            | label ',' label_declaration_part_inner
                            ;

label: DIGIT_SEQUENCE;

constant_declaration_part_inner: constant_declaration
                               | constant_declaration constant_declaration_part_inner
                               ;

type_declaration_part_inner: type_declaration
                           | type_declaration type_declaration_part_inner
                           ;

variable_declaration_part_inner: variable_declaration
                               | variable_declaration variable_declaration_part_inner
                               ;

constant_declaration: IDENTIFIER '=' constant ';' 
                    {Item tmpItem;
    strcpy(tmpItem.identificador, $1);
    strcpy(tmpItem.ambito, ambito);
    tmpItem.lineas = 1;
    strcpy(tmpItem.tipo, "constant");
    tmpItem.next = NULL;
    insert(&myhashmap, &tmpItem);
};

type_declaration: IDENTIFIER '=' type ';'{Item tmpItem;
    strcpy(tmpItem.identificador, $1);
    strcpy(tmpItem.ambito, ambito);
    tmpItem.lineas = 1;
    strcpy(tmpItem.tipo, "type");
    tmpItem.next = NULL;
    insert(&myhashmap, &tmpItem);
};


variable_declaration: identifier_list ':' type ';'
  {
    for (int i = 0; i < idindex; i++) {
        
        Item item;
        strcpy(item.identificador, idlist[i]);
        strcpy(item.ambito, ambito); // Adjust as needed, possibly pass ambito as an argument
        item.lineas = 1; // Use appropriate line number or other relevant data
        strcpy(item.tipo, "var"); // Set the type to "var"
        item.next = NULL;
        insert(&myhashmap, &item);
    }
    idindex = 0;
  };

procedure_declaration: procedure_heading ';' procedure_body ';' {pop(ambito);};

function_declaration: function_heading ';' function_body ';' {pop(ambito);};

compound_statement: TOK_BEGIN compound_statement_inner TOK_END;

constant: IDENTIFIER 
        | sign IDENTIFIER
        | signed_number
        | STRING
        ;


type: simple_type
    | structured_type
    | pointer_type
    | IDENTIFIER
    ;

procedure_heading: TOK_PROCEDURE IDENTIFIER 
                 {                 Item tmpItem;
    strcpy(tmpItem.identificador, $2);
    strcpy(tmpItem.ambito, ambito);
    tmpItem.lineas = 1;
    strcpy(tmpItem.tipo, "procedure");
    tmpItem.next = NULL;
    insert(&myhashmap, &tmpItem);
    append(ambito, $2);
}
                 | TOK_PROCEDURE IDENTIFIER formal_parameter_list 
                 {
                 Item tmpItem;
    strcpy(tmpItem.identificador, $2);
    strcpy(tmpItem.ambito, ambito);
    tmpItem.lineas = 1;
    strcpy(tmpItem.tipo, "procedure");
    tmpItem.next = NULL;
    insert(&myhashmap, &tmpItem);
    append(ambito, $2);
    for (int i = 0; i < idindex; i++) {
        Item item;
        strcpy(item.identificador, idlist[i]);
        strcpy(item.ambito, ambito); // Adjust as needed, possibly pass ambito as an argument
        item.lineas = 1; // Use appropriate line number or other relevant data
        strcpy(item.tipo, "var"); // Set the type to "var"
        item.next = NULL;
        insert(&myhashmap, &item);
    }
    idindex = 0;
}
             ;

procedure_body: block
              | TOK_FORWARD
              | TOK_EXTERNAL
              ;

function_heading: TOK_FUNCTION IDENTIFIER ':' result_type 
{                 Item tmpItem;
    strcpy(tmpItem.identificador, $2);
    strcpy(tmpItem.ambito, ambito);
    tmpItem.lineas = 1;
    strcpy(tmpItem.tipo, "function");
    tmpItem.next = NULL;
    insert(&myhashmap, &tmpItem);
    append(ambito, $2);
}
                | TOK_FUNCTION IDENTIFIER formal_parameter_list ':' result_type 
{                 Item tmpItem;
    strcpy(tmpItem.identificador, $2);
    strcpy(tmpItem.ambito, ambito);
    tmpItem.lineas = 1;
    strcpy(tmpItem.tipo, "function");
    tmpItem.next = NULL;
    insert(&myhashmap, &tmpItem);
    append(ambito, $2);
    for (int i = 0; i < idindex; i++) {
        Item item;
        strcpy(item.identificador, idlist[i]);
        strcpy(item.ambito, ambito); // Adjust as needed, possibly pass ambito as an argument
        item.lineas = 1; // Use appropriate line number or other relevant data
        strcpy(item.tipo, "var"); // Set the type to "var"
        item.next = NULL;
        insert(&myhashmap, &item);
    }
    idindex = 0;
}
                ;

function_body: block
             | TOK_FORWARD
             | TOK_EXTERNAL
             ;

compound_statement_inner: statement
                        | statement ';' compound_statement_inner
                        ;

statement: 
         | simple_statement
         | structured_statement
         | label ':' 
         | label ':' simple_statement
         | label ':' structured_statement
         ;

sign: '+'
    | '-'
    ;

signed_number: sign unsigned_number
             | unsigned_number;

simple_type: ordinal_type
           | string_type
           ;

structured_type: structured_type_inner
               | TOK_PACKED structured_type_inner
               ;

pointer_type: '^' IDENTIFIER;

formal_parameter_list: '(' formal_parameter_list_inner ')'
                     | '(' ')' {idindex = 0;}; 

result_type: IDENTIFIER;

simple_statement: assignment_statement
                | procedure_statement
                | goto_statement
                ;

structured_statement: compound_statement
                    | conditional_statement
                    | repetitive_statement
                    | with_statement
                    ;

unsigned_number: unsigned_real
               | unsigned_integer;

ordinal_type: subrange_type
            | enumerated_type
            ;


string_type: TOK_STRING '[' unsigned_integer ']'
           | TOK_STRING
           ;

structured_type_inner: array_type
                     | set_type
                     | file_type
                     | record_type
                     ;

array_type: TOK_ARRAY '[' array_type_inner ']' TOK_OF type;

set_type: TOK_SET TOK_OF ordinal_type; 

file_type: TOK_FILE
         | TOK_FILE TOK_OF type;

record_type: TOK_RECORD field_list TOK_END;

formal_parameter_list_inner: parameter_declaration 
                           | program_heading
                           | function_heading
                           | parameter_declaration ';' formal_parameter_list_inner
                           | program_heading ';' formal_parameter_list_inner
                           | function_heading ';' formal_parameter_list_inner
                           ;

parameter_declaration: identifier_list ':' IDENTIFIER 
  
                     | TOK_VAR identifier_list ':' IDENTIFIER 
                      ;

assignment_statement: Identifier_or_variable TOK_ASSIGN expression
                  
                    {Item *query  = get(&myhashmap, $1);
                   if (strcmp(query->tipo, "var") != 0 ){
                    yyerror("Wrong type");
                   }
                   query->lineas++;
                   }
                  


                    ;

procedure_statement: IDENTIFIER
                   /*
                   {Item *query  = get(&myhashmap, $1);
                   if (strcmp(query->tipo, "procedure") != 0 ){
                    yyerror("Wrong type");
                   }
                   }
                   */
                  
                   | IDENTIFIER actual_parameter_list
                   /*
                   {Item *query  = get(&myhashmap, $1);
                   if (strcmp(query->tipo, "procedure") != 0 ){
                    yyerror("Wrong type");
                   }
                   }
                   */


                   ;

goto_statement: TOK_GOTO label;

conditional_statement: if_statement
                     | case_statement
                     ;

repetitive_statement: repeat_statement
                    | while_statement
                    | for_statement
                    ;

with_statement: TOK_WITH with_statement_inner TOK_DO statement;

unsigned_integer: DIGIT_SEQUENCE
                | HEX_DIGIT_SEQUENCE
                ;

unsigned_real: DIGIT_SEQUENCE '.' DIGIT_SEQUENCE
             | DIGIT_SEQUENCE '.' DIGIT_SEQUENCE scale_factor
             | DIGIT_SEQUENCE scale_factor
             ;

scale_factor: dbg_scale_factor;

subrange_type: constant TOK_RANGE constant;

enumerated_type: '(' identifier_list ')';

array_type_inner: ordinal_type
                | ordinal_type ',' array_type_inner
                ;

field_list: fixed_part opt_semi_colon
          | variant_part opt_semi_colon
          | fixed_part ';' variant_part opt_semi_colon
          ;



actual_parameter_list: '(' actual_parameters ')'
                     | '(' ')'
                     ;

actual_parameters: expression
                | Identifier_or_variable
                | expression ',' actual_parameters
                | Identifier_or_variable ',' actual_parameters
                ;
if_statement: TOK_IF expression TOK_THEN statement %prec DUM_ELSE
            | TOK_IF expression TOK_THEN statement TOK_ELSE statement
            ;

case_statement: TOK_CASE expression TOK_OF case_statement_inner TOK_END
              ;

case_statement_inner: case
                    | case ';' case_statement_inner
                    ;
/*
opt_otherwise_clause:
                    | otherwise_clause
                    ;

otherwise_clause: ';' TOK_OTHERWISE statement
                ;
*/
opt_semi_colon:   
              | ';'
              ;


case: case_inner ':' statement
    ;

case_inner: constant
          | constant ',' case_inner
          ;


repeat_statement: TOK_REPEAT repeat_statement_inner TOK_UNTIL expression;

repeat_statement_inner: statement
                      | statement ';' repeat_statement_inner
                      ;

while_statement: TOK_WHILE expression TOK_DO statement;

for_statement: TOK_FOR IDENTIFIER TOK_ASSIGN expression TOK_TO expression TOK_DO statement
             | TOK_FOR IDENTIFIER TOK_ASSIGN expression TOK_DOWNTO expression TOK_DO statement;

with_statement_inner: record_variable_reference
                    | record_variable_reference ',' with_statement_inner
                    ;

record_variable_reference: Identifier_or_variable

Identifier_or_variable: IDENTIFIER variable_reference_inner {strcpy($$, $1);}
;

variable_reference_inner:
                        | qualifiers
                        ;
qualifiers: qualifier
          | qualifier qualifiers
          ;

qualifier: index
         | '.' IDENTIFIER
         | '^'

index: '[' index_inner ']';

index_inner: expression
           | expression ',' index_inner
           ;


fixed_part: fixed_element_list ';'
          ;

fixed_element_list: fixed_element
                  | fixed_element_list ';' fixed_element
                  ;

fixed_element: identifier_list ':' type
             ;


variant_part: TOK_CASE tag_field_type TOK_OF variant_part_inner
            | TOK_CASE IDENTIFIER ':' tag_field_type TOK_OF variant_part_inner
            ;


tag_field_type: IDENTIFIER;

variant_part_inner: variant
                  | variant ';' variant_part_inner
                  ;

variant: variant_inner ':' '(' field_list ')'
       | variant_inner ':' '(' ')'

variant_inner: constant
             | constant ',' variant_inner

expression: simple_expression
          | simple_expression arit simple_expression
          ;

simple_expression: sign simple_expression_inner
                 | simple_expression_inner
                 ;

arit: '='
    | '<'
    | '>'
    | TOK_IN
    | TOK_LE
    | TOK_GE
    | TOK_NE
    ;

simple_expression_inner: term
                       | term '+' simple_expression_inner
                       | term '-' simple_expression_inner
                       | term TOK_OR simple_expression_inner
                       ;

term: factor
    | factor '*' term
    | factor '/' term
    | factor TOK_DIV term
    | factor TOK_MOD term
    | factor TOK_AND term
    ;

factor: Identifier_or_variable  
      {Item *query  = get(&myhashmap, $1);
        query->lineas++;
                   }

      | '@' Identifier_or_variable 
      {Item *query  = get(&myhashmap, $2);
       query->lineas++;
                   }

      | unsigned_constant
      | function_call
      | set_constructor
      |'(' expression ')'
      | TOK_NOT factor
      ;

unsigned_constant: TOK_NIL
                 | unsigned_number
                 | STRING
                 ;

function_call: IDENTIFIER actual_parameter_list;

set_constructor: '[' set_constructor_inner ']'
               | '[' ']'
               ;

set_constructor_inner: member_group
                     | member_group ',' set_constructor_inner
                     ;

member_group: expression
            | expression TOK_RANGE expression
            ;


%%


int main(int argc, char **argv) {
  
  char globalIdentifiers[3][100] = {"string", "real", "integer"};
    
  for (int i = 0; i < 3; i++) {
    Item tmpItem;
    strcpy(tmpItem.identificador, globalIdentifiers[i]);
    strcpy(tmpItem.ambito, ambito);
    tmpItem.lineas = 0;
    strcpy(tmpItem.tipo, "type");
    tmpItem.next = NULL;
    insert(&myhashmap, &tmpItem);
  }


     
    
    Item *result = get(&myhashmap, "real");
    if (result != NULL) {
        printf("%s\n", result->ambito);
    } else {
        printf("Item not found\n");
    }
    ++argv, --argc;
    if (argc > 0)
        yyin = fopen(argv[0], "r");
    else
        yyin = stdin;

    yyparse();
    show(&myhashmap);
}
    
