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
     ELIF = 280,
     MASS = 281,
     INIT_VEL = 282,
     FINAL_VEL = 283,
     ACCL = 284,
     INIT_POS = 285,
     FINAL_POS = 286,
     INIT_TIME = 287,
     FINAL_TIME = 288,
     BODY = 289,
     CHECK_UNTIL = 290,
     LEFT_BRACKET = 291,
     RIGHT_BRACKET = 292,
     LEFT_CURLY_BRACE = 293,
     RIGHT_CURLY_BRACE = 294,
     AND_OPERATOR = 295,
     OR_OPERATOR = 296,
     NOT_OPERATOR = 297,
     ADD_OPERATOR = 298,
     SUB_OPERATOR = 299,
     MULT_OPERATOR = 300,
     DIV_OPERATOR = 301,
     CMPD_ADD_OPERATOR = 302,
     CMPD_SUB_OPERATOR = 303,
     CMPD_MULT_OPERATOR = 304,
     CMPD_DIV_OPERATOR = 305,
     EQUAL_OPERATOR = 306,
     NOT_EQUAL_OPERATOR = 307,
     GE_OPERATOR = 308,
     LE_OPERATOR = 309,
     IF = 310,
     ELSE = 311,
     ELSE_IF = 312,
     ASSIGN = 313,
     NOT_EQUAL_TO = 314,
     EQUAL_TO = 315,
     LESS_THAN_EQUAL_TO = 316,
     GREATER_THAN_EQUAL_TO = 317,
     SUBTRACT_COMPOUND_ASSIGNMENT = 318,
     ADD_COMPOUND_ASSIGNMENT = 319,
     MULTIPLY_COMPOUND_ASSIGNMENT = 320,
     DIVIDE_COMPOUND_ASSIGNMENT = 321,
     INTEGER = 322,
     DOUBLE = 323,
     CHAR = 324,
     MUL_OP = 325,
     ADD_OP = 326,
     SUB_OP = 327,
     DIV_OP = 328,
     POW_OP = 329,
     LEFT_PAREN = 330,
     RIGHT_PAREN = 331,
     EOL = 332,
     INT_TYPE = 333,
     DOUBLE_TYPE = 334,
     CHAR_TYPE = 335,
     VAR = 336,
     INVALID_CHAR = 337
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
#define ELIF 280
#define MASS 281
#define INIT_VEL 282
#define FINAL_VEL 283
#define ACCL 284
#define INIT_POS 285
#define FINAL_POS 286
#define INIT_TIME 287
#define FINAL_TIME 288
#define BODY 289
#define CHECK_UNTIL 290
#define LEFT_BRACKET 291
#define RIGHT_BRACKET 292
#define LEFT_CURLY_BRACE 293
#define RIGHT_CURLY_BRACE 294
#define AND_OPERATOR 295
#define OR_OPERATOR 296
#define NOT_OPERATOR 297
#define ADD_OPERATOR 298
#define SUB_OPERATOR 299
#define MULT_OPERATOR 300
#define DIV_OPERATOR 301
#define CMPD_ADD_OPERATOR 302
#define CMPD_SUB_OPERATOR 303
#define CMPD_MULT_OPERATOR 304
#define CMPD_DIV_OPERATOR 305
#define EQUAL_OPERATOR 306
#define NOT_EQUAL_OPERATOR 307
#define GE_OPERATOR 308
#define LE_OPERATOR 309
#define IF 310
#define ELSE 311
#define ELSE_IF 312
#define ASSIGN 313
#define NOT_EQUAL_TO 314
#define EQUAL_TO 315
#define LESS_THAN_EQUAL_TO 316
#define GREATER_THAN_EQUAL_TO 317
#define SUBTRACT_COMPOUND_ASSIGNMENT 318
#define ADD_COMPOUND_ASSIGNMENT 319
#define MULTIPLY_COMPOUND_ASSIGNMENT 320
#define DIVIDE_COMPOUND_ASSIGNMENT 321
#define INTEGER 322
#define DOUBLE 323
#define CHAR 324
#define MUL_OP 325
#define ADD_OP 326
#define SUB_OP 327
#define DIV_OP 328
#define POW_OP 329
#define LEFT_PAREN 330
#define RIGHT_PAREN 331
#define EOL 332
#define INT_TYPE 333
#define DOUBLE_TYPE 334
#define CHAR_TYPE 335
#define VAR 336
#define INVALID_CHAR 337




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
#line 221 "parser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

