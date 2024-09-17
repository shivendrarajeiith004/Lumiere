/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INTEGER = 258,                 /* INTEGER  */
    DOUBLE = 259,                  /* DOUBLE  */
    INT = 260,                     /* INT  */
    FLOAT = 261,                   /* FLOAT  */
    CHAR = 262,                    /* CHAR  */
    BOOLEAN = 263,                 /* BOOLEAN  */
    STRING = 264,                  /* STRING  */
    VECTOR = 265,                  /* VECTOR  */
    CLUSTER = 266,                 /* CLUSTER  */
    VOID = 267,                    /* VOID  */
    BODY = 268,                    /* BODY  */
    BASIC = 269,                   /* BASIC  */
    FORCE = 270,                   /* FORCE  */
    IF = 271,                      /* IF  */
    ELSE = 272,                    /* ELSE  */
    CHECK_UNTIL = 273,             /* CHECK_UNTIL  */
    BREAK = 274,                   /* BREAK  */
    CONTINUE = 275,                /* CONTINUE  */
    FIX = 276,                     /* FIX  */
    USE = 277,                     /* USE  */
    HARDWARE = 278,                /* HARDWARE  */
    GPU = 279,                     /* GPU  */
    CPU = 280,                     /* CPU  */
    OS = 281,                      /* OS  */
    RETURN = 282,                  /* RETURN  */
    TRY = 283,                     /* TRY  */
    CATCH = 284,                   /* CATCH  */
    TYPEOF = 285,                  /* TYPEOF  */
    CLASS = 286,                   /* CLASS  */
    EXTENDS = 287,                 /* EXTENDS  */
    INHERITS = 288,                /* INHERITS  */
    HIDDEN = 289,                  /* HIDDEN  */
    DEG = 290,                     /* DEG  */
    ADD_OP = 291,                  /* ADD_OP  */
    SUB_OP = 292,                  /* SUB_OP  */
    DIV_OP = 293,                  /* DIV_OP  */
    MULT_OP = 294,                 /* MULT_OP  */
    POW_OP = 295,                  /* POW_OP  */
    MOD_OP = 296,                  /* MOD_OP  */
    ABS_OP = 297,                  /* ABS_OP  */
    COMP_ASSIGN_DIV = 298,         /* COMP_ASSIGN_DIV  */
    COMP_ASSIGN_SUBTRACT = 299,    /* COMP_ASSIGN_SUBTRACT  */
    COMP_ASSIGN_MUL = 300,         /* COMP_ASSIGN_MUL  */
    LESS_THAN = 301,               /* LESS_THAN  */
    LESS_THAN_EQ = 302,            /* LESS_THAN_EQ  */
    GREAT_THAN = 303,              /* GREAT_THAN  */
    GREAT_THAN_EQ = 304,           /* GREAT_THAN_EQ  */
    VAR = 305,                     /* VAR  */
    ASSIGN = 306,                  /* ASSIGN  */
    COMP_ASSIGN_ADD = 307,         /* COMP_ASSIGN_ADD  */
    EOL = 308,                     /* EOL  */
    LEFT_PAREN = 309,              /* LEFT_PAREN  */
    RIGHT_PAREN = 310,             /* RIGHT_PAREN  */
    LEFT_CURLY_BRACE = 311,        /* LEFT_CURLY_BRACE  */
    RIGHT_CURLY_BRACE = 312,       /* RIGHT_CURLY_BRACE  */
    LEFT_BRACE = 313,              /* LEFT_BRACE  */
    RIGHT_BRACE = 314,             /* RIGHT_BRACE  */
    MAIN = 315,                    /* MAIN  */
    SINGLE_LINE_COMMENT = 316,     /* SINGLE_LINE_COMMENT  */
    MULTI_LINE_COMMENT = 317,      /* MULTI_LINE_COMMENT  */
    CONST = 318,                   /* CONST  */
    MASS = 319                     /* MASS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
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
#define MAIN 315
#define SINGLE_LINE_COMMENT 316
#define MULTI_LINE_COMMENT 317
#define CONST 318
#define MASS 319

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
