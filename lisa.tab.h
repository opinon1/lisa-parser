/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 184 "lisa.y"
{
    char id[100];  // Add an entry for identifiers
}
/* Line 1529 of yacc.c.  */
#line 175 "lisa.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

