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
     INTEGER = 258,
     DOUBLE = 259,
     STRING_VALUE = 260,
     BOOL_VALUE = 261,
     INT = 262,
     FLOAT = 263,
     CHAR = 264,
     BOOLEAN = 265,
     STRING = 266,
     VECTOR = 267,
     CLUSTER = 268,
     VOID = 269,
     BODY = 270,
     BASIC = 271,
     FORCE = 272,
     IF = 273,
     ELSE = 274,
     CHECK_UNTIL = 275,
     BREAK = 276,
     CONTINUE = 277,
     FIX = 278,
     USE = 279,
     HARDWARE = 280,
     GPU = 281,
     CPU = 282,
     OS = 283,
     RETURN = 284,
     TRY = 285,
     CATCH = 286,
     TYPEOF = 287,
     CLASS = 288,
     EXTENDS = 289,
     INHERITS = 290,
     HIDDEN = 291,
     DEG = 292,
     ADD_OP = 293,
     SUB_OP = 294,
     DIV_OP = 295,
     MULT_OP = 296,
     POW_OP = 297,
     MOD_OP = 298,
     ABS_OP = 299,
     COMP_ASSIGN_DIV = 300,
     COMP_ASSIGN_SUBTRACT = 301,
     COMP_ASSIGN_MUL = 302,
     LESS_THAN = 303,
     LESS_THAN_EQ = 304,
     GREAT_THAN = 305,
     GREAT_THAN_EQ = 306,
     VAR = 307,
     ASSIGN = 308,
     COMP_ASSIGN_ADD = 309,
     EOL = 310,
     LEFT_PAREN = 311,
     RIGHT_PAREN = 312,
     LEFT_CURLY_BRACE = 313,
     RIGHT_CURLY_BRACE = 314,
     LEFT_BRACE = 315,
     RIGHT_BRACE = 316,
     MAIN = 317,
     SINGLE_LINE_COMMENT = 318,
     MULTI_LINE_COMMENT = 319,
     CONST = 320,
     MASS = 321
   };
#endif
/* Tokens.  */
#define INTEGER 258
#define DOUBLE 259
#define STRING_VALUE 260
#define BOOL_VALUE 261
#define INT 262
#define FLOAT 263
#define CHAR 264
#define BOOLEAN 265
#define STRING 266
#define VECTOR 267
#define CLUSTER 268
#define VOID 269
#define BODY 270
#define BASIC 271
#define FORCE 272
#define IF 273
#define ELSE 274
#define CHECK_UNTIL 275
#define BREAK 276
#define CONTINUE 277
#define FIX 278
#define USE 279
#define HARDWARE 280
#define GPU 281
#define CPU 282
#define OS 283
#define RETURN 284
#define TRY 285
#define CATCH 286
#define TYPEOF 287
#define CLASS 288
#define EXTENDS 289
#define INHERITS 290
#define HIDDEN 291
#define DEG 292
#define ADD_OP 293
#define SUB_OP 294
#define DIV_OP 295
#define MULT_OP 296
#define POW_OP 297
#define MOD_OP 298
#define ABS_OP 299
#define COMP_ASSIGN_DIV 300
#define COMP_ASSIGN_SUBTRACT 301
#define COMP_ASSIGN_MUL 302
#define LESS_THAN 303
#define LESS_THAN_EQ 304
#define GREAT_THAN 305
#define GREAT_THAN_EQ 306
#define VAR 307
#define ASSIGN 308
#define COMP_ASSIGN_ADD 309
#define EOL 310
#define LEFT_PAREN 311
#define RIGHT_PAREN 312
#define LEFT_CURLY_BRACE 313
#define RIGHT_CURLY_BRACE 314
#define LEFT_BRACE 315
#define RIGHT_BRACE 316
#define MAIN 317
#define SINGLE_LINE_COMMENT 318
#define MULTI_LINE_COMMENT 319
#define CONST 320
#define MASS 321




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 11 "parser.y"
{
    int intval;
    float floatval;
    char * stringval;
}
/* Line 1529 of yacc.c.  */
#line 187 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

