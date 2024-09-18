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
    STRING_VALUE = 260,            /* STRING_VALUE  */
    BOOL_VALUE = 261,              /* BOOL_VALUE  */
    INT = 262,                     /* INT  */
    FLOAT = 263,                   /* FLOAT  */
    CHAR = 264,                    /* CHAR  */
    BOOLEAN = 265,                 /* BOOLEAN  */
    STRING = 266,                  /* STRING  */
    VECTOR = 267,                  /* VECTOR  */
    CLUSTER = 268,                 /* CLUSTER  */
    VOID = 269,                    /* VOID  */
    BODY = 270,                    /* BODY  */
    BASIC = 271,                   /* BASIC  */
    FORCE = 272,                   /* FORCE  */
    IF = 273,                      /* IF  */
    ELSE = 274,                    /* ELSE  */
    CHECK_UNTIL = 275,             /* CHECK_UNTIL  */
    BREAK = 276,                   /* BREAK  */
    CONTINUE = 277,                /* CONTINUE  */
    FIX = 278,                     /* FIX  */
    USE = 279,                     /* USE  */
    HARDWARE = 280,                /* HARDWARE  */
    GPU = 281,                     /* GPU  */
    CPU = 282,                     /* CPU  */
    OS = 283,                      /* OS  */
    RETURN = 284,                  /* RETURN  */
    TRY = 285,                     /* TRY  */
    CATCH = 286,                   /* CATCH  */
    TYPEOF = 287,                  /* TYPEOF  */
    CLASS = 288,                   /* CLASS  */
    EXTENDS = 289,                 /* EXTENDS  */
    INHERITS = 290,                /* INHERITS  */
    HIDDEN = 291,                  /* HIDDEN  */
    DEG = 292,                     /* DEG  */
    ADD_OP = 293,                  /* ADD_OP  */
    SUB_OP = 294,                  /* SUB_OP  */
    DIV_OP = 295,                  /* DIV_OP  */
    MULT_OP = 296,                 /* MULT_OP  */
    POW_OP = 297,                  /* POW_OP  */
    MOD_OP = 298,                  /* MOD_OP  */
    ABS_OP = 299,                  /* ABS_OP  */
    COMP_ASSIGN_DIV = 300,         /* COMP_ASSIGN_DIV  */
    COMP_ASSIGN_SUBTRACT = 301,    /* COMP_ASSIGN_SUBTRACT  */
    COMP_ASSIGN_MUL = 302,         /* COMP_ASSIGN_MUL  */
    LESS_THAN = 303,               /* LESS_THAN  */
    LESS_THAN_EQ = 304,            /* LESS_THAN_EQ  */
    GREAT_THAN = 305,              /* GREAT_THAN  */
    GREAT_THAN_EQ = 306,           /* GREAT_THAN_EQ  */
    VAR = 307,                     /* VAR  */
    ASSIGN = 308,                  /* ASSIGN  */
    COMP_ASSIGN_ADD = 309,         /* COMP_ASSIGN_ADD  */
    EOL = 310,                     /* EOL  */
    LEFT_PAREN = 311,              /* LEFT_PAREN  */
    RIGHT_PAREN = 312,             /* RIGHT_PAREN  */
    LEFT_CURLY_BRACE = 313,        /* LEFT_CURLY_BRACE  */
    RIGHT_CURLY_BRACE = 314,       /* RIGHT_CURLY_BRACE  */
    LEFT_BRACE = 315,              /* LEFT_BRACE  */
    RIGHT_BRACE = 316,             /* RIGHT_BRACE  */
    MAIN = 317,                    /* MAIN  */
    SINGLE_LINE_COMMENT = 318,     /* SINGLE_LINE_COMMENT  */
    MULTI_LINE_COMMENT = 319,      /* MULTI_LINE_COMMENT  */
    CONST = 320,                   /* CONST  */
    MASS = 321                     /* MASS  */
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 11 "parser.y"

    int intval;
    float floatval;
    char * stringval;

#line 205 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
