/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOK_AND = 258,
     TOK_END = 259,
     TOK_LABEL = 260,
     TOK_PROGRAM = 261,
     TOK_UNTIL = 262,
     TOK_ARRAY = 263,
     TOK_FILE = 264,
     TOK_METHODS = 265,
     TOK_RECORD = 266,
     TOK_USES = 267,
     TOK_BEGIN = 268,
     TOK_FOR = 269,
     TOK_MOD = 270,
     TOK_REPEAT = 271,
     TOK_VAR = 272,
     TOK_CASE = 273,
     TOK_FUNCTION = 274,
     TOK_NIL = 275,
     TOK_SET = 276,
     TOK_WHILE = 277,
     TOK_CONST = 278,
     TOK_GOTO = 279,
     TOK_NOT = 280,
     TOK_STRING = 281,
     TOK_WITH = 282,
     TOK_CREATION = 283,
     TOK_IF = 284,
     TOK_OF = 285,
     TOK_SUBCLASS = 286,
     TOK_DIV = 287,
     TOK_IMPLEMENTATION = 288,
     TOK_OR = 289,
     TOK_THEN = 290,
     TOK_DOWNTO = 291,
     TOK_IN = 292,
     TOK_OTHERWISE = 293,
     TOK_TO = 294,
     TOK_DO = 295,
     TOK_INTERFACE = 296,
     TOK_PACKED = 297,
     TOK_TYPE = 298,
     TOK_ELSE = 299,
     TOK_INTRINSIC = 300,
     TOK_PROCEDURE = 301,
     TOK_UNIT = 302,
     TOK_FORWARD = 303,
     TOK_EXTERNAL = 304,
     TOK_NE = 305,
     TOK_LE = 306,
     TOK_GE = 307,
     TOK_ASSIGN = 308,
     TOK_RANGE = 309,
     DIGIT_SEQUENCE = 310,
     HEX_DIGIT_SEQUENCE = 311,
     E = 312,
     STRING = 313,
     dbg_scale_factor = 314,
     DUM_ELSE = 315,
     IDENTIFIER = 316
   };
#endif
/* Tokens.  */
#define TOK_AND 258
#define TOK_END 259
#define TOK_LABEL 260
#define TOK_PROGRAM 261
#define TOK_UNTIL 262
#define TOK_ARRAY 263
#define TOK_FILE 264
#define TOK_METHODS 265
#define TOK_RECORD 266
#define TOK_USES 267
#define TOK_BEGIN 268
#define TOK_FOR 269
#define TOK_MOD 270
#define TOK_REPEAT 271
#define TOK_VAR 272
#define TOK_CASE 273
#define TOK_FUNCTION 274
#define TOK_NIL 275
#define TOK_SET 276
#define TOK_WHILE 277
#define TOK_CONST 278
#define TOK_GOTO 279
#define TOK_NOT 280
#define TOK_STRING 281
#define TOK_WITH 282
#define TOK_CREATION 283
#define TOK_IF 284
#define TOK_OF 285
#define TOK_SUBCLASS 286
#define TOK_DIV 287
#define TOK_IMPLEMENTATION 288
#define TOK_OR 289
#define TOK_THEN 290
#define TOK_DOWNTO 291
#define TOK_IN 292
#define TOK_OTHERWISE 293
#define TOK_TO 294
#define TOK_DO 295
#define TOK_INTERFACE 296
#define TOK_PACKED 297
#define TOK_TYPE 298
#define TOK_ELSE 299
#define TOK_INTRINSIC 300
#define TOK_PROCEDURE 301
#define TOK_UNIT 302
#define TOK_FORWARD 303
#define TOK_EXTERNAL 304
#define TOK_NE 305
#define TOK_LE 306
#define TOK_GE 307
#define TOK_ASSIGN 308
#define TOK_RANGE 309
#define DIGIT_SEQUENCE 310
#define HEX_DIGIT_SEQUENCE 311
#define E 312
#define STRING 313
#define dbg_scale_factor 314
#define DUM_ELSE 315
#define IDENTIFIER 316




/* Copy the first part of user declarations.  */
#line 1 "lisa.y"

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



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 184 "lisa.y"
{
    char id[100];  // Add an entry for identifiers
}
/* Line 193 of yacc.c.  */
#line 384 "lisa.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 397 "lisa.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   428

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  110
/* YYNRULES -- Number of rules.  */
#define YYNRULES  225
/* YYNRULES -- Number of states.  */
#define YYNSTATES  381

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      70,    66,    62,    60,    65,    61,    69,    63,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    72,    68,
      76,    71,    77,     2,    78,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    74,     2,    75,    73,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    64,    67
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,    10,    17,    18,    20,    23,    29,
      32,    39,    41,    43,    47,    48,    50,    51,    53,    54,
      56,    57,    59,    60,    62,    66,    69,    72,    75,    77,
      79,    82,    85,    87,    89,    93,    95,    97,   100,   102,
     105,   107,   110,   115,   120,   125,   130,   135,   139,   141,
     144,   146,   148,   150,   152,   154,   156,   159,   163,   165,
     167,   169,   174,   180,   182,   184,   186,   188,   192,   193,
     195,   197,   200,   204,   208,   210,   212,   215,   217,   219,
     221,   223,   226,   229,   233,   236,   238,   240,   242,   244,
     246,   248,   250,   252,   254,   256,   258,   260,   265,   267,
     269,   271,   273,   275,   282,   286,   288,   292,   296,   298,
     300,   302,   306,   310,   314,   318,   323,   327,   329,   332,
     335,   337,   339,   341,   343,   345,   350,   352,   354,   358,
     363,   366,   368,   372,   376,   378,   382,   385,   388,   393,
     397,   400,   402,   404,   408,   412,   417,   424,   430,   432,
     436,   437,   439,   443,   445,   449,   454,   456,   460,   465,
     474,   483,   485,   489,   491,   494,   495,   497,   499,   502,
     504,   507,   509,   513,   515,   519,   522,   524,   528,   532,
     537,   544,   546,   548,   552,   558,   563,   565,   569,   571,
     575,   578,   580,   582,   584,   586,   588,   590,   592,   594,
     596,   600,   604,   608,   610,   614,   618,   622,   626,   630,
     632,   635,   637,   639,   641,   645,   648,   650,   652,   654,
     657,   661,   664,   666,   670,   672
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      80,     0,    -1,    81,    -1,    83,    68,    85,    82,    -1,
      83,    68,    84,    68,    85,    82,    -1,    -1,    69,    -1,
       6,    67,    -1,     6,    67,    70,    86,    66,    -1,    12,
      87,    -1,    88,    89,    90,    91,    92,    98,    -1,    87,
      -1,    67,    -1,    87,    65,    67,    -1,    -1,    93,    -1,
      -1,    94,    -1,    -1,    95,    -1,    -1,    96,    -1,    -1,
      97,    -1,     5,    99,    68,    -1,    23,   101,    -1,    43,
     102,    -1,    17,   103,    -1,   107,    -1,   108,    -1,   107,
      97,    -1,   108,    97,    -1,   109,    -1,   100,    -1,   100,
      65,    99,    -1,    55,    -1,   104,    -1,   104,   101,    -1,
     105,    -1,   105,   102,    -1,   106,    -1,   106,   103,    -1,
      67,    71,   110,    68,    -1,    67,    71,   111,    68,    -1,
      87,    72,   111,    68,    -1,   112,    68,   113,    68,    -1,
     114,    68,   115,    68,    -1,    13,   116,     4,    -1,    67,
      -1,   118,    67,    -1,   119,    -1,    58,    -1,   120,    -1,
     121,    -1,   122,    -1,    67,    -1,    46,    67,    -1,    46,
      67,   123,    -1,    85,    -1,    48,    -1,    49,    -1,    19,
      67,    72,   124,    -1,    19,    67,   123,    72,   124,    -1,
      85,    -1,    48,    -1,    49,    -1,   117,    -1,   117,    68,
     116,    -1,    -1,   125,    -1,   126,    -1,   100,    72,    -1,
     100,    72,   125,    -1,   100,    72,   126,    -1,    60,    -1,
      61,    -1,   118,   127,    -1,   127,    -1,   128,    -1,   129,
      -1,   130,    -1,    42,   130,    -1,    73,    67,    -1,    70,
     135,    66,    -1,    70,    66,    -1,    67,    -1,   137,    -1,
     138,    -1,   139,    -1,   109,    -1,   140,    -1,   141,    -1,
     142,    -1,   144,    -1,   143,    -1,   146,    -1,   147,    -1,
      26,    74,   143,    75,    -1,    26,    -1,   131,    -1,   132,
      -1,   133,    -1,   134,    -1,     8,    74,   148,    75,    30,
     111,    -1,    21,    30,   128,    -1,     9,    -1,     9,    30,
     111,    -1,    11,   149,     4,    -1,   136,    -1,    83,    -1,
     114,    -1,   136,    68,   135,    -1,    83,    68,   135,    -1,
     114,    68,   135,    -1,    87,    72,    67,    -1,    17,    87,
      72,    67,    -1,   164,    53,   178,    -1,    67,    -1,    67,
     150,    -1,    24,   100,    -1,   152,    -1,   153,    -1,   158,
      -1,   160,    -1,   161,    -1,    27,   162,    40,   117,    -1,
      55,    -1,    56,    -1,    55,    69,    55,    -1,    55,    69,
      55,   145,    -1,    55,   145,    -1,    59,    -1,   110,    54,
     110,    -1,    70,    87,    66,    -1,   128,    -1,   128,    65,
     148,    -1,   170,   155,    -1,   173,   155,    -1,   170,    68,
     173,   155,    -1,    70,   151,    66,    -1,    70,    66,    -1,
     178,    -1,   164,    -1,   178,    65,   151,    -1,   164,    65,
     151,    -1,    29,   178,    35,   117,    -1,    29,   178,    35,
     117,    44,   117,    -1,    18,   178,    30,   154,     4,    -1,
     156,    -1,   156,    68,   154,    -1,    -1,    68,    -1,   157,
      72,   117,    -1,   110,    -1,   110,    65,   157,    -1,    16,
     159,     7,   178,    -1,   117,    -1,   117,    68,   159,    -1,
      22,   178,    40,   117,    -1,    14,    67,    53,   178,    39,
     178,    40,   117,    -1,    14,    67,    53,   178,    36,   178,
      40,   117,    -1,   163,    -1,   163,    65,   162,    -1,   164,
      -1,    67,   165,    -1,    -1,   166,    -1,   167,    -1,   167,
     166,    -1,   168,    -1,    69,    67,    -1,    73,    -1,    74,
     169,    75,    -1,   178,    -1,   178,    65,   169,    -1,   171,
      68,    -1,   172,    -1,   171,    68,   172,    -1,    87,    72,
     111,    -1,    18,   174,    30,   175,    -1,    18,    67,    72,
     174,    30,   175,    -1,    67,    -1,   176,    -1,   176,    68,
     175,    -1,   177,    72,    70,   149,    66,    -1,   177,    72,
      70,    66,    -1,   110,    -1,   110,    65,   177,    -1,   179,
      -1,   179,   180,   179,    -1,   118,   181,    -1,   181,    -1,
      71,    -1,    76,    -1,    77,    -1,    37,    -1,    51,    -1,
      52,    -1,    50,    -1,   182,    -1,   182,    60,   181,    -1,
     182,    61,   181,    -1,   182,    34,   181,    -1,   183,    -1,
     183,    62,   182,    -1,   183,    63,   182,    -1,   183,    32,
     182,    -1,   183,    15,   182,    -1,   183,     3,   182,    -1,
     164,    -1,    78,   164,    -1,   184,    -1,   185,    -1,   186,
      -1,    70,   178,    66,    -1,    25,   183,    -1,    20,    -1,
     127,    -1,    58,    -1,    67,   150,    -1,    74,   187,    75,
      -1,    74,    75,    -1,   188,    -1,   188,    65,   187,    -1,
     178,    -1,   178,    54,   178,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   197,   197,   199,   200,   203,   204,   208,   218,   230,
     232,   241,   244,   250,   258,   259,   261,   262,   264,   265,
     267,   268,   270,   271,   274,   276,   278,   280,   282,   283,
     284,   285,   288,   291,   292,   295,   297,   298,   301,   302,
     305,   306,   309,   319,   329,   344,   346,   348,   350,   351,
     352,   353,   357,   358,   359,   360,   363,   373,   396,   397,
     398,   401,   411,   433,   434,   435,   438,   439,   442,   443,
     444,   445,   446,   447,   450,   451,   454,   455,   457,   458,
     461,   462,   465,   467,   468,   470,   472,   473,   474,   477,
     478,   479,   480,   483,   484,   486,   487,   491,   492,   495,
     496,   497,   498,   501,   503,   505,   506,   508,   510,   511,
     512,   513,   514,   515,   518,   520,   523,   536,   545,   557,
     559,   560,   563,   564,   565,   568,   570,   571,   574,   575,
     576,   579,   581,   583,   585,   586,   589,   590,   591,   596,
     597,   600,   601,   602,   603,   605,   606,   609,   612,   613,
     623,   624,   628,   631,   632,   636,   638,   639,   642,   644,
     645,   647,   648,   651,   653,   656,   657,   659,   660,   663,
     664,   665,   667,   669,   670,   674,   677,   678,   681,   685,
     686,   690,   692,   693,   696,   697,   699,   700,   702,   703,
     706,   707,   710,   711,   712,   713,   714,   715,   716,   719,
     720,   721,   722,   725,   726,   727,   728,   729,   730,   733,
     738,   743,   744,   745,   746,   747,   750,   751,   752,   755,
     757,   758,   761,   762,   765,   766
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_AND", "TOK_END", "TOK_LABEL",
  "TOK_PROGRAM", "TOK_UNTIL", "TOK_ARRAY", "TOK_FILE", "TOK_METHODS",
  "TOK_RECORD", "TOK_USES", "TOK_BEGIN", "TOK_FOR", "TOK_MOD",
  "TOK_REPEAT", "TOK_VAR", "TOK_CASE", "TOK_FUNCTION", "TOK_NIL",
  "TOK_SET", "TOK_WHILE", "TOK_CONST", "TOK_GOTO", "TOK_NOT", "TOK_STRING",
  "TOK_WITH", "TOK_CREATION", "TOK_IF", "TOK_OF", "TOK_SUBCLASS",
  "TOK_DIV", "TOK_IMPLEMENTATION", "TOK_OR", "TOK_THEN", "TOK_DOWNTO",
  "TOK_IN", "TOK_OTHERWISE", "TOK_TO", "TOK_DO", "TOK_INTERFACE",
  "TOK_PACKED", "TOK_TYPE", "TOK_ELSE", "TOK_INTRINSIC", "TOK_PROCEDURE",
  "TOK_UNIT", "TOK_FORWARD", "TOK_EXTERNAL", "TOK_NE", "TOK_LE", "TOK_GE",
  "TOK_ASSIGN", "TOK_RANGE", "DIGIT_SEQUENCE", "HEX_DIGIT_SEQUENCE", "E",
  "STRING", "dbg_scale_factor", "'+'", "'-'", "'*'", "'/'", "DUM_ELSE",
  "','", "')'", "IDENTIFIER", "';'", "'.'", "'('", "'='", "':'", "'^'",
  "'['", "']'", "'<'", "'>'", "'@'", "$accept", "script", "program",
  "opt_dot", "program_heading", "uses_clause", "block",
  "program_parameters", "identifier_list", "opt_label_declaration_part",
  "opt_constant_declaration_part", "opt_type_declaration_part",
  "opt_variable_declaration_part",
  "opt_procedure_and_function_declaration_part", "label_declaration_part",
  "constant_declaration_part", "type_declaration_part",
  "variable_declaration_part", "procedure_and_function_declaration_part",
  "statement_part", "label_declaration_part_inner", "label",
  "constant_declaration_part_inner", "type_declaration_part_inner",
  "variable_declaration_part_inner", "constant_declaration",
  "type_declaration", "variable_declaration", "procedure_declaration",
  "function_declaration", "compound_statement", "constant", "type",
  "procedure_heading", "procedure_body", "function_heading",
  "function_body", "compound_statement_inner", "statement", "sign",
  "signed_number", "simple_type", "structured_type", "pointer_type",
  "formal_parameter_list", "result_type", "simple_statement",
  "structured_statement", "unsigned_number", "ordinal_type", "string_type",
  "structured_type_inner", "array_type", "set_type", "file_type",
  "record_type", "formal_parameter_list_inner", "parameter_declaration",
  "assignment_statement", "procedure_statement", "goto_statement",
  "conditional_statement", "repetitive_statement", "with_statement",
  "unsigned_integer", "unsigned_real", "scale_factor", "subrange_type",
  "enumerated_type", "array_type_inner", "field_list",
  "actual_parameter_list", "actual_parameters", "if_statement",
  "case_statement", "case_statement_inner", "opt_semi_colon", "case",
  "case_inner", "repeat_statement", "repeat_statement_inner",
  "while_statement", "for_statement", "with_statement_inner",
  "record_variable_reference", "Identifier_or_variable",
  "variable_reference_inner", "qualifiers", "qualifier", "index",
  "index_inner", "fixed_part", "fixed_element_list", "fixed_element",
  "variant_part", "tag_field_type", "variant_part_inner", "variant",
  "variant_inner", "expression", "simple_expression", "arit",
  "simple_expression_inner", "term", "factor", "unsigned_constant",
  "function_call", "set_constructor", "set_constructor_inner",
  "member_group", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
      43,    45,    42,    47,   315,    44,    41,   316,    59,    46,
      40,    61,    58,    94,    91,    93,    60,    62,    64
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    79,    80,    81,    81,    82,    82,    83,    83,    84,
      85,    86,    87,    87,    88,    88,    89,    89,    90,    90,
      91,    91,    92,    92,    93,    94,    95,    96,    97,    97,
      97,    97,    98,    99,    99,   100,   101,   101,   102,   102,
     103,   103,   104,   105,   106,   107,   108,   109,   110,   110,
     110,   110,   111,   111,   111,   111,   112,   112,   113,   113,
     113,   114,   114,   115,   115,   115,   116,   116,   117,   117,
     117,   117,   117,   117,   118,   118,   119,   119,   120,   120,
     121,   121,   122,   123,   123,   124,   125,   125,   125,   126,
     126,   126,   126,   127,   127,   128,   128,   129,   129,   130,
     130,   130,   130,   131,   132,   133,   133,   134,   135,   135,
     135,   135,   135,   135,   136,   136,   137,   138,   138,   139,
     140,   140,   141,   141,   141,   142,   143,   143,   144,   144,
     144,   145,   146,   147,   148,   148,   149,   149,   149,   150,
     150,   151,   151,   151,   151,   152,   152,   153,   154,   154,
     155,   155,   156,   157,   157,   158,   159,   159,   160,   161,
     161,   162,   162,   163,   164,   165,   165,   166,   166,   167,
     167,   167,   168,   169,   169,   170,   171,   171,   172,   173,
     173,   174,   175,   175,   176,   176,   177,   177,   178,   178,
     179,   179,   180,   180,   180,   180,   180,   180,   180,   181,
     181,   181,   181,   182,   182,   182,   182,   182,   182,   183,
     183,   183,   183,   183,   183,   183,   184,   184,   184,   185,
     186,   186,   187,   187,   188,   188
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     4,     6,     0,     1,     2,     5,     2,
       6,     1,     1,     3,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     3,     2,     2,     2,     1,     1,
       2,     2,     1,     1,     3,     1,     1,     2,     1,     2,
       1,     2,     4,     4,     4,     4,     4,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     2,     3,     1,     1,
       1,     4,     5,     1,     1,     1,     1,     3,     0,     1,
       1,     2,     3,     3,     1,     1,     2,     1,     1,     1,
       1,     2,     2,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     1,
       1,     1,     1,     6,     3,     1,     3,     3,     1,     1,
       1,     3,     3,     3,     3,     4,     3,     1,     2,     2,
       1,     1,     1,     1,     1,     4,     1,     1,     3,     4,
       2,     1,     3,     3,     1,     3,     2,     2,     4,     3,
       2,     1,     1,     3,     3,     4,     6,     5,     1,     3,
       0,     1,     3,     1,     3,     4,     1,     3,     4,     8,
       8,     1,     3,     1,     2,     0,     1,     1,     2,     1,
       2,     1,     3,     1,     3,     2,     1,     3,     3,     4,
       6,     1,     1,     3,     5,     4,     1,     3,     1,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     1,     3,     3,     3,     3,     3,     1,
       2,     1,     1,     1,     3,     2,     1,     1,     1,     2,
       3,     2,     1,     3,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     0,     7,     1,    14,     0,     0,
       0,     0,     5,    16,    15,    12,     0,    11,    35,     0,
      33,     9,    14,     6,     3,     0,    18,    17,     8,     0,
      24,     0,     5,     0,    25,    36,     0,    20,    19,    13,
      34,     4,     0,    37,     0,    26,    38,     0,    22,    21,
     126,   127,    51,    74,    75,    48,     0,     0,    50,    77,
      94,    93,     0,    39,     0,    27,    40,     0,     0,     0,
      23,    28,    29,     0,     0,   131,     0,   130,    42,    49,
      76,     0,   105,     0,     0,    98,     0,    48,     0,     0,
       0,     0,    52,    53,    54,    78,    79,    80,    99,   100,
     101,   102,    95,    96,     0,    41,     0,    56,    68,    10,
      32,    30,    31,    14,    14,   128,     0,     0,     0,     0,
       0,   150,     0,   176,   150,     0,     0,    81,     0,    82,
       0,    43,     0,     0,     0,     0,    57,     0,    68,     0,
       0,     0,     0,     0,   117,     0,    89,     0,    66,    69,
      70,    86,    87,    88,    90,    91,    92,   120,   121,   122,
     123,   124,     0,    59,    60,    58,     0,    64,    65,    63,
       0,   129,   134,     0,   106,   181,     0,     0,   107,   151,
     136,   175,   151,   137,   104,   126,     0,   133,   132,    44,
       0,    84,   109,     0,   110,     0,   108,    85,    61,     0,
       0,   156,     0,   216,     0,   218,   165,     0,     0,     0,
       0,   217,   209,     0,   188,   191,   199,   203,   211,   212,
     213,     0,   119,   165,     0,   161,   163,     0,     0,     0,
     171,     0,   118,   164,   166,   167,   169,    71,    47,    68,
       0,    45,    46,     0,     0,     0,     0,   178,   150,   177,
      97,     0,     0,     0,     0,    83,     0,    62,     0,    68,
       0,   215,   219,     0,   221,   224,     0,   222,   210,   190,
       0,   195,   198,   196,   197,   192,   193,   194,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    68,    68,     0,
      68,   170,   140,     0,   209,   141,     0,   173,   168,    72,
      73,    67,   116,   135,     0,   181,     0,   186,   179,   182,
       0,   138,     0,   112,   114,   113,   111,     0,   157,   155,
     214,     0,   220,     0,   153,     0,   148,     0,   189,   202,
     200,   201,   208,   207,   206,   204,   205,   158,   125,   162,
     145,   139,     0,     0,   172,     0,   103,     0,     0,     0,
       0,   115,     0,     0,   225,   223,     0,   147,     0,    68,
      68,   144,   143,   174,   180,   187,   183,     0,     0,     0,
     154,   149,   152,   146,   185,     0,    68,    68,   184,   160,
     159
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    24,   192,    11,    12,    16,   193,    13,
      26,    37,    48,    69,    14,    27,    38,    49,    70,   109,
      19,   145,    34,    45,    65,    35,    46,    66,    71,    72,
     146,    90,    91,    73,   166,   194,   170,   147,   148,   210,
      58,    92,    93,    94,   135,   198,   149,   150,   211,    95,
      96,    97,    98,    99,   100,   101,   195,   196,   151,   152,
     153,   154,   155,   156,    60,    61,    77,   102,   103,   173,
     120,   232,   293,   157,   158,   325,   180,   326,   327,   159,
     202,   160,   161,   224,   225,   212,   233,   234,   235,   236,
     296,   121,   122,   123,   124,   176,   308,   309,   310,   295,
     214,   278,   215,   216,   217,   218,   219,   220,   266,   267
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -209
static const yytype_int16 yypact[] =
{
      15,    22,    66,  -209,    30,    38,  -209,    71,    46,    69,
      46,    68,    83,   144,  -209,  -209,   104,   130,  -209,   151,
     133,   130,   216,  -209,  -209,   157,   186,  -209,  -209,   169,
    -209,    69,    83,   166,  -209,   157,   184,   236,  -209,  -209,
    -209,  -209,    90,  -209,   187,  -209,   184,    46,     1,  -209,
     -33,  -209,  -209,  -209,  -209,  -209,   192,    59,  -209,  -209,
    -209,  -209,   219,  -209,    34,  -209,    46,   195,   196,   251,
    -209,     1,     1,   198,   199,  -209,   213,  -209,  -209,  -209,
    -209,   197,   240,    -6,   246,   204,   188,   214,    46,   217,
     227,   215,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,   219,  -209,   -55,   218,   230,  -209,
    -209,  -209,  -209,     8,    63,   228,    61,   219,   223,    62,
     287,   225,   226,  -209,   231,    61,    17,  -209,   109,  -209,
      90,  -209,   232,    18,   235,   233,  -209,   237,   230,   276,
     276,    69,   248,   276,   118,   244,  -209,   291,   239,  -209,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,   245,  -209,  -209,  -209,   250,  -209,  -209,  -209,
     252,  -209,   238,   247,  -209,   255,   298,   219,  -209,   311,
    -209,    46,  -209,  -209,  -209,  -209,   263,  -209,  -209,  -209,
      46,  -209,   262,    72,   271,   274,   277,  -209,  -209,   235,
     294,   280,   342,  -209,   286,  -209,   120,   276,   -15,   248,
     286,  -209,  -209,   321,   129,  -209,    33,    47,  -209,  -209,
    -209,   312,  -209,   -20,   315,   292,  -209,   323,   299,    98,
    -209,   276,  -209,  -209,  -209,   -20,  -209,   349,  -209,   230,
     276,  -209,  -209,    61,   331,   301,    90,  -209,   231,  -209,
    -209,    97,    25,   302,    25,  -209,    25,  -209,   276,   230,
     276,  -209,  -209,   304,  -209,   318,   300,   309,  -209,  -209,
      90,  -209,  -209,  -209,  -209,  -209,  -209,  -209,   276,   286,
     286,   286,   286,   286,   286,   286,   286,   230,   230,   248,
     230,  -209,  -209,   313,   112,   316,   305,   317,  -209,  -209,
    -209,  -209,  -209,  -209,   219,  -209,   347,   319,  -209,   320,
     314,  -209,   322,  -209,  -209,  -209,  -209,    12,  -209,  -209,
    -209,   276,  -209,   276,   325,   379,   324,   326,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
     341,  -209,   276,   276,  -209,   276,  -209,    90,    90,    90,
     327,  -209,   276,   276,  -209,  -209,    90,  -209,    90,   230,
     230,  -209,  -209,  -209,  -209,  -209,  -209,     4,   351,   353,
    -209,  -209,  -209,  -209,  -209,   328,   230,   230,  -209,  -209,
    -209
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -209,  -209,  -209,   355,   395,  -209,   -13,  -209,    -8,  -209,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,   131,  -209,
     365,    -1,   364,   354,   335,  -209,  -209,  -209,  -209,  -209,
     333,   -23,  -103,  -209,  -209,    16,  -209,   164,  -127,   -35,
    -209,  -209,  -209,  -209,   297,   206,   170,   171,   -39,  -100,
    -209,   329,  -209,  -209,  -209,  -209,   -34,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,   283,  -209,   295,  -209,  -209,   163,
      44,   207,  -117,  -209,  -209,    54,  -118,  -209,    58,  -209,
     158,  -209,  -209,   132,  -209,  -104,  -209,   183,  -209,  -209,
      74,  -209,  -209,   241,   249,   175,  -208,  -209,    75,  -111,
     146,  -209,  -177,   -69,   221,  -209,  -209,  -209,   103,  -209
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -166
static const yytype_int16 yytable[] =
{
      17,   132,    21,    59,   162,   203,   183,    57,    20,    32,
     204,   201,   118,     9,   174,   133,   172,   134,    80,    56,
      67,     1,   118,    59,     1,   184,    75,    57,   213,   221,
      20,     1,   227,   269,   162,   190,    76,    67,   226,    64,
      50,    51,   190,   205,    67,    53,    54,    68,   352,   228,
     282,   353,   206,   230,   231,   207,   163,   164,    64,   208,
     264,    15,   283,   209,    74,    59,     6,   279,     9,    57,
     374,    15,   185,    51,   247,   119,     9,    59,    59,   284,
     128,    57,    57,    10,   191,    15,    59,    74,    74,     5,
      57,    59,    15,   280,   281,    57,   263,   265,     7,    29,
     165,   169,   329,   330,   331,   268,   104,   188,     8,   285,
     286,   167,   168,    15,    50,    51,    50,    51,   203,    52,
     297,    53,    54,   204,    18,   294,    79,    29,    55,   302,
     311,    88,   201,   162,   177,   162,    22,    29,    59,   364,
     222,   366,    57,   172,   253,    50,    51,   317,    52,   319,
      53,    54,    23,    50,    51,   162,   205,    55,    53,    54,
     337,   338,    29,   340,   292,   206,   271,    25,   207,   312,
      28,  -165,   208,   119,    29,   187,   209,   342,  -142,   272,
     273,   274,   251,   162,   162,   226,   162,   228,   229,   228,
     229,   230,   231,   230,   231,    29,    81,    82,    31,    83,
     275,   346,   111,   112,    59,   276,   277,    59,    57,    84,
     354,    57,   265,   332,   333,   334,   335,   336,   313,    30,
     315,     9,   316,   307,    33,   361,   362,    81,    82,    36,
      83,    59,   372,   373,   297,    57,    39,    42,   294,   294,
      84,   368,   369,   108,   137,    85,   138,   324,   139,   379,
     380,    44,   140,    47,   141,   162,   162,   142,    62,   143,
      78,    86,   106,   107,   108,    59,   113,   114,   115,    57,
     117,   116,   162,   162,    50,    51,   125,    52,   126,    53,
      54,   130,   -55,   131,   129,    18,    87,    75,   133,    88,
     175,   178,    89,   179,   181,   238,   203,   144,   240,   182,
     189,   204,   197,   243,   200,   199,   203,   239,    59,    59,
      59,   204,    57,    57,    57,   223,   237,    59,   241,    59,
     242,    57,   244,    57,   307,   307,   307,   245,   246,   118,
     252,    50,    51,   324,   205,   324,    53,    54,   250,   254,
     255,    50,    51,   206,   205,   256,   207,   258,   259,   260,
     208,   270,   287,   206,   209,   288,   207,   289,   290,   119,
     208,   304,   108,   137,   209,   138,   291,   139,   305,   314,
     320,   140,   321,   141,   323,   322,   142,   347,   143,   341,
     344,   343,   345,   357,   348,   360,   350,    41,   349,   351,
     356,   376,   358,   377,   378,     4,    40,   367,   359,    43,
      63,   105,   110,   301,   136,   257,   303,   299,   300,   186,
     171,   375,   371,   262,   370,   127,   144,   318,   298,   363,
     306,   339,   249,   365,   328,   261,   355,     0,   248
};

static const yytype_int16 yycheck[] =
{
       8,   104,    10,    42,   108,    20,   124,    42,     9,    22,
      25,   138,    18,     5,   117,    70,   116,    72,    57,    42,
      19,     6,    18,    62,     6,   125,    59,    62,   139,   140,
      31,     6,   143,   210,   138,    17,    69,    19,   142,    47,
      55,    56,    17,    58,    19,    60,    61,    46,    36,    69,
       3,    39,    67,    73,    74,    70,    48,    49,    66,    74,
      75,    67,    15,    78,    48,   104,     0,    34,     5,   104,
      66,    67,    55,    56,   177,    83,     5,   116,   117,    32,
      88,   116,   117,    12,    66,    67,   125,    71,    72,    67,
     125,   130,    67,    60,    61,   130,   207,   208,    68,    65,
     113,   114,   279,   280,   281,   209,    72,   130,    70,    62,
      63,    48,    49,    67,    55,    56,    55,    56,    20,    58,
     231,    60,    61,    25,    55,   229,    67,    65,    67,   240,
     248,    70,   259,   237,    72,   239,    68,    65,   177,   347,
     141,   349,   177,   243,    72,    55,    56,   258,    58,   260,
      60,    61,    69,    55,    56,   259,    58,    67,    60,    61,
     287,   288,    65,   290,    66,    67,    37,    23,    70,    72,
      66,    53,    74,   181,    65,    66,    78,    65,    66,    50,
      51,    52,   190,   287,   288,   289,   290,    69,    70,    69,
      70,    73,    74,    73,    74,    65,     8,     9,    65,    11,
      71,   304,    71,    72,   243,    76,    77,   246,   243,    21,
     321,   246,   323,   282,   283,   284,   285,   286,   252,    68,
     254,     5,   256,   246,    67,   342,   343,     8,     9,    43,
      11,   270,   359,   360,   345,   270,    67,    71,   342,   343,
      21,   352,   353,    13,    14,    26,    16,   270,    18,   376,
     377,    67,    22,    17,    24,   359,   360,    27,    71,    29,
      68,    42,    67,    67,    13,   304,    68,    68,    55,   304,
      30,    74,   376,   377,    55,    56,    30,    58,    74,    60,
      61,    54,    68,    68,    67,    55,    67,    59,    70,    70,
      67,     4,    73,    68,    68,     4,    20,    67,    53,    68,
      68,    25,    67,    65,    67,    72,    20,    68,   347,   348,
     349,    25,   347,   348,   349,    67,    72,   356,    68,   358,
      68,   356,    75,   358,   347,   348,   349,    72,    30,    18,
      68,    55,    56,   356,    58,   358,    60,    61,    75,    68,
      66,    55,    56,    67,    58,    68,    70,    53,    68,     7,
      74,    30,    40,    67,    78,    40,    70,    65,    35,   367,
      74,    30,    13,    14,    78,    16,    67,    18,    67,    67,
      66,    22,    54,    24,    65,    75,    27,    30,    29,    66,
      75,    65,    65,     4,    65,    44,    72,    32,    68,    67,
      65,    40,    68,    40,    66,     0,    31,    70,    72,    35,
      46,    66,    69,   239,   107,   199,   243,   237,   237,   126,
     115,   367,   358,   206,   356,    86,    67,   259,   235,   345,
     245,   289,   181,   348,   278,   204,   323,    -1,   179
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    80,    81,    83,    67,     0,    68,    70,     5,
      12,    84,    85,    88,    93,    67,    86,    87,    55,    99,
     100,    87,    68,    69,    82,    23,    89,    94,    66,    65,
      68,    65,    85,    67,   101,   104,    43,    90,    95,    67,
      99,    82,    71,   101,    67,   102,   105,    17,    91,    96,
      55,    56,    58,    60,    61,    67,   110,   118,   119,   127,
     143,   144,    71,   102,    87,   103,   106,    19,    46,    92,
      97,   107,   108,   112,   114,    59,    69,   145,    68,    67,
     127,     8,     9,    11,    21,    26,    42,    67,    70,    73,
     110,   111,   120,   121,   122,   128,   129,   130,   131,   132,
     133,   134,   146,   147,    72,   103,    67,    67,    13,    98,
     109,    97,    97,    68,    68,    55,    74,    30,    18,    87,
     149,   170,   171,   172,   173,    30,    74,   130,    87,    67,
      54,    68,   111,    70,    72,   123,   123,    14,    16,    18,
      22,    24,    27,    29,    67,   100,   109,   116,   117,   125,
     126,   137,   138,   139,   140,   141,   142,   152,   153,   158,
     160,   161,   164,    48,    49,    85,   113,    48,    49,    85,
     115,   145,   128,   148,   111,    67,   174,    72,     4,    68,
     155,    68,    68,   155,   128,    55,   143,    66,   110,    68,
      17,    66,    83,    87,   114,   135,   136,    67,   124,    72,
      67,   117,   159,    20,    25,    58,    67,    70,    74,    78,
     118,   127,   164,   178,   179,   181,   182,   183,   184,   185,
     186,   178,   100,    67,   162,   163,   164,   178,    69,    70,
      73,    74,   150,   165,   166,   167,   168,    72,     4,    68,
      53,    68,    68,    65,    75,    72,    30,   111,   173,   172,
      75,    87,    68,    72,    68,    66,    68,   124,    53,    68,
       7,   183,   150,   178,    75,   178,   187,   188,   164,   181,
      30,    37,    50,    51,    52,    71,    76,    77,   180,    34,
      60,    61,     3,    15,    32,    62,    63,    40,    40,    65,
      35,    67,    66,   151,   164,   178,   169,   178,   166,   125,
     126,   116,   178,   148,    30,    67,   174,   110,   175,   176,
     177,   155,    72,   135,    67,   135,   135,   178,   159,   178,
      66,    54,    75,    65,   110,   154,   156,   157,   179,   181,
     181,   181,   182,   182,   182,   182,   182,   117,   117,   162,
     117,    66,    65,    65,    75,    65,   111,    30,    65,    68,
      72,    67,    36,    39,   178,   187,    65,     4,    68,    72,
      44,   151,   151,   169,   175,   177,   175,    70,   178,   178,
     157,   154,   117,   117,    66,   149,    40,    40,    66,   117,
     117
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 197 "lisa.y"
    {printf("valid program\n");}
    break;

  case 7:
#line 209 "lisa.y"
    {                 Item tmpItem;
    strcpy(tmpItem.identificador, (yyvsp[(2) - (2)].id));
    strcpy(tmpItem.ambito, ambito);
    tmpItem.lineas = 1;
    strcpy(tmpItem.tipo, "program");
    tmpItem.next = NULL;
    insert(&myhashmap, &tmpItem);
    append(ambito, (yyvsp[(2) - (2)].id));
;}
    break;

  case 8:
#line 219 "lisa.y"
    {                 Item tmpItem;
    strcpy(tmpItem.identificador, (yyvsp[(2) - (5)].id));
    strcpy(tmpItem.ambito, ambito);
    tmpItem.lineas = 1;
    strcpy(tmpItem.tipo, "program");
    tmpItem.next = NULL;
    insert(&myhashmap, &tmpItem);
    append(ambito, (yyvsp[(2) - (5)].id));
;}
    break;

  case 12:
#line 244 "lisa.y"
    {
        strcpy(idlist[idindex], (yyvsp[(1) - (1)].id));
    idlist[idindex + 1][0] = '\0';
    idindex++;

            ;}
    break;

  case 13:
#line 250 "lisa.y"
    {
    strcpy(idlist[idindex], (yyvsp[(3) - (3)].id));
    idlist[idindex + 1][0] = '\0';
    idindex++;

            ;}
    break;

  case 42:
#line 310 "lisa.y"
    {Item tmpItem;
    strcpy(tmpItem.identificador, (yyvsp[(1) - (4)].id));
    strcpy(tmpItem.ambito, ambito);
    tmpItem.lineas = 1;
    strcpy(tmpItem.tipo, "constant");
    tmpItem.next = NULL;
    insert(&myhashmap, &tmpItem);
;}
    break;

  case 43:
#line 319 "lisa.y"
    {Item tmpItem;
    strcpy(tmpItem.identificador, (yyvsp[(1) - (4)].id));
    strcpy(tmpItem.ambito, ambito);
    tmpItem.lineas = 1;
    strcpy(tmpItem.tipo, "type");
    tmpItem.next = NULL;
    insert(&myhashmap, &tmpItem);
;}
    break;

  case 44:
#line 330 "lisa.y"
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
  ;}
    break;

  case 45:
#line 344 "lisa.y"
    {pop(ambito);;}
    break;

  case 46:
#line 346 "lisa.y"
    {pop(ambito);;}
    break;

  case 56:
#line 364 "lisa.y"
    {                 Item tmpItem;
    strcpy(tmpItem.identificador, (yyvsp[(2) - (2)].id));
    strcpy(tmpItem.ambito, ambito);
    tmpItem.lineas = 1;
    strcpy(tmpItem.tipo, "procedure");
    tmpItem.next = NULL;
    insert(&myhashmap, &tmpItem);
    append(ambito, (yyvsp[(2) - (2)].id));
;}
    break;

  case 57:
#line 374 "lisa.y"
    {
                 Item tmpItem;
    strcpy(tmpItem.identificador, (yyvsp[(2) - (3)].id));
    strcpy(tmpItem.ambito, ambito);
    tmpItem.lineas = 1;
    strcpy(tmpItem.tipo, "procedure");
    tmpItem.next = NULL;
    insert(&myhashmap, &tmpItem);
    append(ambito, (yyvsp[(2) - (3)].id));
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
;}
    break;

  case 61:
#line 402 "lisa.y"
    {                 Item tmpItem;
    strcpy(tmpItem.identificador, (yyvsp[(2) - (4)].id));
    strcpy(tmpItem.ambito, ambito);
    tmpItem.lineas = 1;
    strcpy(tmpItem.tipo, "function");
    tmpItem.next = NULL;
    insert(&myhashmap, &tmpItem);
    append(ambito, (yyvsp[(2) - (4)].id));
;}
    break;

  case 62:
#line 412 "lisa.y"
    {                 Item tmpItem;
    strcpy(tmpItem.identificador, (yyvsp[(2) - (5)].id));
    strcpy(tmpItem.ambito, ambito);
    tmpItem.lineas = 1;
    strcpy(tmpItem.tipo, "function");
    tmpItem.next = NULL;
    insert(&myhashmap, &tmpItem);
    append(ambito, (yyvsp[(2) - (5)].id));
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
;}
    break;

  case 84:
#line 468 "lisa.y"
    {idindex = 0;;}
    break;

  case 116:
#line 525 "lisa.y"
    {Item *query  = get(&myhashmap, (yyvsp[(1) - (3)].id));
                   if (strcmp(query->tipo, "var") != 0 ){
                    yyerror("Wrong type");
                   }
                   query->lineas++;
                   ;}
    break;

  case 164:
#line 653 "lisa.y"
    {strcpy((yyval.id), (yyvsp[(1) - (2)].id));;}
    break;

  case 209:
#line 734 "lisa.y"
    {Item *query  = get(&myhashmap, (yyvsp[(1) - (1)].id));
        query->lineas++;
                   ;}
    break;

  case 210:
#line 739 "lisa.y"
    {Item *query  = get(&myhashmap, (yyvsp[(2) - (2)].id));
       query->lineas++;
                   ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2218 "lisa.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 770 "lisa.y"



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
    

