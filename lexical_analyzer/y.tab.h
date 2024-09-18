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
     INT = 260,
     FLOAT = 261,
     CHAR = 262,
     BOOLEAN = 263,
     STRING = 264,
     VECTOR = 265,
     CLUSTER = 266,
     VOID = 267,
     BODY = 268,
     BASIC = 269,
     FORCE = 270,
     IF = 271,
     ELSE = 272,
     CHECK_UNTIL = 273,
     BREAK = 274,
     CONTINUE = 275,
     FIX = 276,
     USE = 277,
     HARDWARE = 278,
     GPU = 279,
     CPU = 280,
     OS = 281,
     RETURN = 282,
     TRY = 283,
     CATCH = 284,
     TYPEOF = 285,
     CLASS = 286,
     EXTENDS = 287,
     INHERITS = 288,
     HIDDEN = 289,
     DEG = 290,
     ADD_OP = 291,
     SUB_OP = 292,
     DIV_OP = 293,
     MULT_OP = 294,
     POW_OP = 295,
     MOD_OP = 296,
     ABS_OP = 297,
     COMP_ASSIGN_DIV = 298,
     COMP_ASSIGN_SUBTRACT = 299,
     COMP_ASSIGN_MUL = 300,
     LESS_THAN = 301,
     LESS_THAN_EQ = 302,
     GREAT_THAN = 303,
     GREAT_THAN_EQ = 304,
     VAR = 305,
     ASSIGN = 306,
     COMP_ASSIGN_ADD = 307,
     EOL = 308,
     LEFT_PAREN = 309,
     RIGHT_PAREN = 310,
     LEFT_CURLY_BRACE = 311,
     RIGHT_CURLY_BRACE = 312,
     LEFT_BRACE = 313,
     RIGHT_BRACE = 314
   };
#endif
/* Tokens.  */
#define INTEGER 258
#define DOUBLE 259
#define INT 260
#define FLOAT 261
#define CHAR 262
#define BOOLEAN 263
#define STRING 264
#define VECTOR 265
#define CLUSTER 266
#define VOID 267
#define BODY 268
#define BASIC 269
#define FORCE 270
#define IF 271
#define ELSE 272
#define CHECK_UNTIL 273
#define BREAK 274
#define CONTINUE 275
#define FIX 276
#define USE 277
#define HARDWARE 278
#define GPU 279
#define CPU 280
#define OS 281
#define RETURN 282
#define TRY 283
#define CATCH 284
#define TYPEOF 285
#define CLASS 286
#define EXTENDS 287
#define INHERITS 288
#define HIDDEN 289
#define DEG 290
#define ADD_OP 291
#define SUB_OP 292
#define DIV_OP 293
#define MULT_OP 294
#define POW_OP 295
#define MOD_OP 296
#define ABS_OP 297
#define COMP_ASSIGN_DIV 298
#define COMP_ASSIGN_SUBTRACT 299
#define COMP_ASSIGN_MUL 300
#define LESS_THAN 301
#define LESS_THAN_EQ 302
#define GREAT_THAN 303
#define GREAT_THAN_EQ 304
#define VAR 305
#define ASSIGN 306
#define COMP_ASSIGN_ADD 307
#define EOL 308
#define LEFT_PAREN 309
#define RIGHT_PAREN 310
#define LEFT_CURLY_BRACE 311
#define RIGHT_CURLY_BRACE 312
#define LEFT_BRACE 313
#define RIGHT_BRACE 314




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

