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
     RESERVED_KEYWORD = 260,
     SEMICOLON = 261,
     INCLUDE = 262,
     INT = 263,
     LIBRARY = 264,
     FUNCTION = 265,
     CONSOLE = 266,
     STRING = 267,
     CONNECT_TO = 268,
     RETURN = 269,
     COMMENT = 270,
     IDENTIFIER = 271,
     COMMA = 272,
     JOIN_OPERATOR = 273,
     HASH = 274,
     LESS_THAN = 275,
     GREATER_THAN = 276,
     LEFT_PARENT = 277,
     RIGHT_PARENT = 278,
     ELIF = 279,
     MASS = 280,
     INIT_VEL = 281,
     FINAL_VEL = 282,
     ACCL = 283,
     INIT_POS = 284,
     FINAL_POS = 285,
     INIT_TIME = 286,
     FINAL_TIME = 287,
     BODY = 288,
     CHECK_UNTIL = 289,
     LEFT_BRACKET = 290,
     RIGHT_BRACKET = 291,
     LEFT_CURLY_BRACE = 292,
     RIGHT_CURLY_BRACE = 293,
     AND_OPERATOR = 294,
     OR_OPERATOR = 295,
     NOT_OPERATOR = 296,
     ADD_OPERATOR = 297,
     SUB_OPERATOR = 298,
     MULT_OPERATOR = 299,
     DIV_OPERATOR = 300,
     CMPD_ADD_OPERATOR = 301,
     CMPD_SUB_OPERATOR = 302,
     CMPD_MULT_OPERATOR = 303,
     CMPD_DIV_OPERATOR = 304,
     EQUAL_OPERATOR = 305,
     NOT_EQUAL_OPERATOR = 306,
     GE_OPERATOR = 307,
     LE_OPERATOR = 308,
     IF = 309,
     ELSE = 310,
     ELSE_IF = 311,
     ASSIGN = 312,
     NOT_EQUAL_TO = 313,
     EQUAL_TO = 314,
     LESS_THAN_EQUAL_TO = 315,
     GREATER_THAN_EQUAL_TO = 316,
     SUBTRACT_COMPOUND_ASSIGNMENT = 317,
     ADD_COMPOUND_ASSIGNMENT = 318,
     MULTIPLY_COMPOUND_ASSIGNMENT = 319,
     DIVIDE_COMPOUND_ASSIGNMENT = 320,
     INTEGER = 321,
     DOUBLE = 322,
     CHAR = 323,
     MUL_OP = 324,
     ADD_OP = 325,
     SUB_OP = 326,
     DIV_OP = 327,
     POW_OP = 328,
     LEFT_PAREN = 329,
     RIGHT_PAREN = 330,
     EOL = 331,
     INT_TYPE = 332,
     DOUBLE_TYPE = 333,
     CHAR_TYPE = 334,
     VAR = 335,
     INVALID_CHAR = 336
   };
#endif
/* Tokens.  */
#define VALUE 258
#define ASSIGN_OPERATOR 259
#define RESERVED_KEYWORD 260
#define SEMICOLON 261
#define INCLUDE 262
#define INT 263
#define LIBRARY 264
#define FUNCTION 265
#define CONSOLE 266
#define STRING 267
#define CONNECT_TO 268
#define RETURN 269
#define COMMENT 270
#define IDENTIFIER 271
#define COMMA 272
#define JOIN_OPERATOR 273
#define HASH 274
#define LESS_THAN 275
#define GREATER_THAN 276
#define LEFT_PARENT 277
#define RIGHT_PARENT 278
#define ELIF 279
#define MASS 280
#define INIT_VEL 281
#define FINAL_VEL 282
#define ACCL 283
#define INIT_POS 284
#define FINAL_POS 285
#define INIT_TIME 286
#define FINAL_TIME 287
#define BODY 288
#define CHECK_UNTIL 289
#define LEFT_BRACKET 290
#define RIGHT_BRACKET 291
#define LEFT_CURLY_BRACE 292
#define RIGHT_CURLY_BRACE 293
#define AND_OPERATOR 294
#define OR_OPERATOR 295
#define NOT_OPERATOR 296
#define ADD_OPERATOR 297
#define SUB_OPERATOR 298
#define MULT_OPERATOR 299
#define DIV_OPERATOR 300
#define CMPD_ADD_OPERATOR 301
#define CMPD_SUB_OPERATOR 302
#define CMPD_MULT_OPERATOR 303
#define CMPD_DIV_OPERATOR 304
#define EQUAL_OPERATOR 305
#define NOT_EQUAL_OPERATOR 306
#define GE_OPERATOR 307
#define LE_OPERATOR 308
#define IF 309
#define ELSE 310
#define ELSE_IF 311
#define ASSIGN 312
#define NOT_EQUAL_TO 313
#define EQUAL_TO 314
#define LESS_THAN_EQUAL_TO 315
#define GREATER_THAN_EQUAL_TO 316
#define SUBTRACT_COMPOUND_ASSIGNMENT 317
#define ADD_COMPOUND_ASSIGNMENT 318
#define MULTIPLY_COMPOUND_ASSIGNMENT 319
#define DIVIDE_COMPOUND_ASSIGNMENT 320
#define INTEGER 321
#define DOUBLE 322
#define CHAR 323
#define MUL_OP 324
#define ADD_OP 325
#define SUB_OP 326
#define DIV_OP 327
#define POW_OP 328
#define LEFT_PAREN 329
#define RIGHT_PAREN 330
#define EOL 331
#define INT_TYPE 332
#define DOUBLE_TYPE 333
#define CHAR_TYPE 334
#define VAR 335
#define INVALID_CHAR 336




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 22 "./parser/parser.y"
{
    void * nodePtr;
    char* stringval; 
    enum TYPE type;
    char** var_list;  
    enum OPERAND op;
}
/* Line 1529 of yacc.c.  */
#line 219 "parser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

