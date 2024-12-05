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
     VALUE = 258,
     ASSIGN_OPERATOR = 259,
     RESERVED_TYPE = 260,
     RESERVED_KEYWORD = 261,
     SEMICOLON = 262,
     INCLUDE = 263,
     INT = 264,
     LIBRARY = 265,
     FUNCTION = 266,
     CONSOLE = 267,
     STRING = 268,
     CONNECT_TO = 269,
     RETURN = 270,
     COMMENT = 271,
     IDENTIFIER = 272,
     COMMA = 273,
     JOIN_OPERATOR = 274,
     HASH = 275,
     LESS_THAN = 276,
     GREATER_THAN = 277,
     LEFT_PARENT = 278,
     RIGHT_PARENT = 279,
     LEFT_BRACE = 280,
     RIGHT_BRACE = 281,
     LEFT_CURLY_BRACE = 282,
     RIGHT_CURLY_BRACE = 283,
     AND_OPERATOR = 284,
     OR_OPERATOR = 285,
     NOT_OPERATOR = 286,
     ADD_OPERATOR = 287,
     SUB_OPERATOR = 288,
     MULT_OPERATOR = 289,
     DIV_OPERATOR = 290,
     CMPD_ADD_OPERATOR = 291,
     CMPD_SUB_OPERATOR = 292,
     CMPD_MULT_OPERATOR = 293,
     CMPD_DIV_OPERATOR = 294,
     EQUAL_OPERATOR = 295,
     NOT_EQUAL_OPERATOR = 296,
     GE_OPERATOR = 297,
     LE_OPERATOR = 298,
     IF = 299,
     ELSE = 300,
     ELSE_IF = 301,
     ASSIGN = 302,
     NOT_EQUAL_TO = 303,
     EQUAL_TO = 304,
     LESS_THAN_EQUAL_TO = 305,
     GREATER_THAN_EQUAL_TO = 306,
     SUBTRACT_COMPOUND_ASSIGNMENT = 307,
     ADD_COMPOUND_ASSIGNMENT = 308,
     MULTIPLY_COMPOUND_ASSIGNMENT = 309,
     DIVIDE_COMPOUND_ASSIGNMENT = 310,
     INTEGER = 311,
     DOUBLE = 312,
     CHAR = 313,
     MUL_OP = 314,
     ADD_OP = 315,
     SUB_OP = 316,
     DIV_OP = 317,
     POW_OP = 318,
     LEFT_PAREN = 319,
     RIGHT_PAREN = 320,
     EOL = 321,
     INT_TYPE = 322,
     DOUBLE_TYPE = 323,
     CHAR_TYPE = 324,
     VAR = 325,
     INVALID_CHAR = 326
   };
#endif
/* Tokens.  */
#define VALUE 258
#define ASSIGN_OPERATOR 259
#define RESERVED_TYPE 260
#define RESERVED_KEYWORD 261
#define SEMICOLON 262
#define INCLUDE 263
#define INT 264
#define LIBRARY 265
#define FUNCTION 266
#define CONSOLE 267
#define STRING 268
#define CONNECT_TO 269
#define RETURN 270
#define COMMENT 271
#define IDENTIFIER 272
#define COMMA 273
#define JOIN_OPERATOR 274
#define HASH 275
#define LESS_THAN 276
#define GREATER_THAN 277
#define LEFT_PARENT 278
#define RIGHT_PARENT 279
#define LEFT_BRACE 280
#define RIGHT_BRACE 281
#define LEFT_CURLY_BRACE 282
#define RIGHT_CURLY_BRACE 283
#define AND_OPERATOR 284
#define OR_OPERATOR 285
#define NOT_OPERATOR 286
#define ADD_OPERATOR 287
#define SUB_OPERATOR 288
#define MULT_OPERATOR 289
#define DIV_OPERATOR 290
#define CMPD_ADD_OPERATOR 291
#define CMPD_SUB_OPERATOR 292
#define CMPD_MULT_OPERATOR 293
#define CMPD_DIV_OPERATOR 294
#define EQUAL_OPERATOR 295
#define NOT_EQUAL_OPERATOR 296
#define GE_OPERATOR 297
#define LE_OPERATOR 298
#define IF 299
#define ELSE 300
#define ELSE_IF 301
#define ASSIGN 302
#define NOT_EQUAL_TO 303
#define EQUAL_TO 304
#define LESS_THAN_EQUAL_TO 305
#define GREATER_THAN_EQUAL_TO 306
#define SUBTRACT_COMPOUND_ASSIGNMENT 307
#define ADD_COMPOUND_ASSIGNMENT 308
#define MULTIPLY_COMPOUND_ASSIGNMENT 309
#define DIVIDE_COMPOUND_ASSIGNMENT 310
#define INTEGER 311
#define DOUBLE 312
#define CHAR 313
#define MUL_OP 314
#define ADD_OP 315
#define SUB_OP 316
#define DIV_OP 317
#define POW_OP 318
#define LEFT_PAREN 319
#define RIGHT_PAREN 320
#define EOL 321
#define INT_TYPE 322
#define DOUBLE_TYPE 323
#define CHAR_TYPE 324
#define VAR 325
#define INVALID_CHAR 326




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 22 "./parser/parser.y"
{
    void * nodePtr;
    char* stringval; 
    enum TYPE type;
    char** var_list;  
    enum OPERAND op;
struct CmpndStatement * program;
}
/* Line 1529 of yacc.c.  */
#line 200 "parser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

