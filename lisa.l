%{
#include "lisa.tab.h"
#include <string.h>


int line_number = 1;
char id[100];

%}
%option case-insensitive
%option caseless


%%

"(*"([^*]|[\r\n]|"*"[^)])*"*)"        {
                                        int i;
                                        for (i = 0; yytext[i] != '\0'; i++) {
                                            if (yytext[i] == '\n') {
                                                line_number++;
                                            }
                                        }
                                        /* Ignore comments */
                                     }
"{"([^}]|[\r\n])*"}"                  {
                                        int i;
                                        for (i = 0; yytext[i] != '\0'; i++) {
                                            if (yytext[i] == '\n') {
                                                line_number++;
                                            }
                                        }
                                        /* Ignore comments */
                                     }
\n                                    { line_number++; }

[ \t\r]+                              { /* Ignore whitespace */ }

"dbg_scale_factor" {printf("found dsf\n"); return dbg_scale_factor;}


 
"and" {return TOK_AND;}
"end" {return TOK_END;}
"label" {return  TOK_LABEL;}
"program" {return  TOK_PROGRAM;}
"until" {return  TOK_UNTIL;}  
"array" {return  TOK_ARRAY;}
"file" {return  TOK_FILE;}
"methods" {return TOK_METHODS;}
"record" {return  TOK_RECORD;}
"uses" {return  TOK_USES;}
"begin" {return  TOK_BEGIN;}
"for" {return  TOK_FOR;}
"mod" {return  TOK_MOD;}
"repeat" {return  TOK_REPEAT;}
"var" {return  TOK_VAR;}
"case" {return  TOK_CASE;}
"function" {return  TOK_FUNCTION;}
"nil" {return  TOK_NIL;}
"set" {return  TOK_SET;}
"while" {return  TOK_WHILE;}
"const" {return  TOK_CONST;}
"goto" {return  TOK_GOTO;}
"not" {return  TOK_NOT;}
"string" {return  TOK_STRING;}
"with" {return  TOK_WITH;}
"creation" {return  TOK_CREATION;}
"if" {return  TOK_IF;}
"of" {return  TOK_OF;}
"subclass" {return  TOK_SUBCLASS;}
"div" {return  TOK_DIV;}
"implementation" {return  TOK_IMPLEMENTATION;}
"or" {return  TOK_OR;}
"then" {return  TOK_THEN;}
"downto" {return  TOK_DOWNTO;}
"in" {return  TOK_IN;}
"otherwise" {return  TOK_OTHERWISE;}
"to" {return  TOK_TO;}
"do" {return  TOK_DO;}
"interface" {return  TOK_INTERFACE;}
"packed" {return  TOK_PACKED;}
"type" {return  TOK_TYPE;}
"else" {return  TOK_ELSE;}
"intrinsic" {return  TOK_INTRINSIC;}
"procedure" {return  TOK_PROCEDURE;}
"unit" {return TOK_UNIT;}

"forward" {return TOK_FORWARD;}
"external" {return TOK_EXTERNAL;}



"<>"    { return TOK_NE; }      // Not equal
"<="    { return TOK_LE; }      // Less than or equal to
">="    { return TOK_GE; }      // Greater than or equal to
":="    { return TOK_ASSIGN; }  // Assignment
".."    { return TOK_RANGE; }   // Range symbol



"'"[^']*"'" {return STRING;}

[-+_*/=<>\[\].,():;^@] { return *yytext;}

[a-zA-Z][a-zA-Z0-9_]* {strncpy( id, yytext, yyleng );
	  id[ yyleng] = '\0'; strcpy(yylval.id, id); return IDENTIFIER;}
[0-9]+ { return DIGIT_SEQUENCE;}
[$][0-9a-fA-F]+ {return HEX_DIGIT_SEQUENCE;} 




. { fprintf(stderr, "Unrecognized character at line %d: %d ('%c')\n", line_number, (unsigned char)*yytext, *yytext); fflush(stderr); }

%%

int yywrap (void){
  return 1;
}

