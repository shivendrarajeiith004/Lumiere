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




/* Copy the first part of user declarations.  */
#line 1 "./parser/parser.y"

#include "ast.h"
#include "symbol.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include "signal.h"
#include <math.h>
#include "parser.tab.h"

void yyerror(char *);
int yylex();

void yyerror(char *s); int yylex();
void process_variable_list(char **var_list);
struct  CmpndStatement *mainProgram; 
struct SymbolTable symTable;

extern int current_col; 
extern int lineno;


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
#line 22 "./parser/parser.y"
{
    void * nodePtr;
    char* stringval; 
    enum TYPE type;
    char** var_list;  
    enum OPERAND op;
}
/* Line 193 of yacc.c.  */
#line 288 "parser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 301 "parser.tab.c"

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   144

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  60
/* YYNRULES -- Number of states.  */
#define YYNSTATES  93

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   336

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    29,    34,    41,    43,    46,    54,    59,
      63,    66,    70,    74,    76,    80,    84,    86,    90,    92,
      96,    98,   100,   102,   104,   106,   108,   110,   112,   114,
     116,   120,   124,   126,   128,   130,   132,   134,   136,   138,
     140,   142,   144,   146,   148,   150,   152,   154,   156,   158,
     160
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      83,     0,    -1,    83,    84,    -1,    -1,    81,    -1,    93,
      -1,    92,    -1,    91,    -1,    88,    -1,    87,    -1,    85,
      -1,    86,    -1,    19,     7,    20,    68,    21,    -1,    11,
      74,    93,    75,    -1,    80,    18,    13,    74,    80,    75,
      -1,    89,    -1,    89,    90,    -1,    54,    74,    96,    75,
      35,    83,    36,    -1,    55,    35,    83,    36,    -1,    80,
     101,    93,    -1,   100,    99,    -1,    93,    70,    94,    -1,
      93,    71,    94,    -1,    94,    -1,    94,    72,    95,    -1,
      94,    69,    95,    -1,    95,    -1,    95,    73,    96,    -1,
      96,    -1,    96,    97,    98,    -1,    98,    -1,    21,    -1,
      20,    -1,    58,    -1,    59,    -1,    60,    -1,    61,    -1,
      66,    -1,    67,    -1,    80,    -1,    74,    93,    75,    -1,
      99,    17,    80,    -1,    80,    -1,    77,    -1,    78,    -1,
      79,    -1,   102,    -1,    57,    -1,    63,    -1,    62,    -1,
      64,    -1,    65,    -1,    25,    -1,    26,    -1,    27,    -1,
      28,    -1,    29,    -1,    30,    -1,    31,    -1,    32,    -1,
      33,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    46,    46,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    72,    77,    83,    88,    93,    98,   105,
     114,   122,   127,   131,   134,   139,   143,   146,   150,   153,
     157,   159,   160,   161,   162,   163,   164,   166,   173,   181,
     186,   192,   210,   223,   224,   225,   226,   228,   229,   230,
     231,   232,   234,   235,   236,   237,   238,   239,   240,   241,
     242
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VALUE", "ASSIGN_OPERATOR",
  "RESERVED_KEYWORD", "SEMICOLON", "INCLUDE", "INT", "LIBRARY", "FUNCTION",
  "CONSOLE", "STRING", "CONNECT_TO", "RETURN", "COMMENT", "IDENTIFIER",
  "COMMA", "JOIN_OPERATOR", "HASH", "LESS_THAN", "GREATER_THAN",
  "LEFT_PARENT", "RIGHT_PARENT", "ELIF", "MASS", "INIT_VEL", "FINAL_VEL",
  "ACCL", "INIT_POS", "FINAL_POS", "INIT_TIME", "FINAL_TIME", "BODY",
  "CHECK_UNTIL", "LEFT_BRACKET", "RIGHT_BRACKET", "LEFT_CURLY_BRACE",
  "RIGHT_CURLY_BRACE", "AND_OPERATOR", "OR_OPERATOR", "NOT_OPERATOR",
  "ADD_OPERATOR", "SUB_OPERATOR", "MULT_OPERATOR", "DIV_OPERATOR",
  "CMPD_ADD_OPERATOR", "CMPD_SUB_OPERATOR", "CMPD_MULT_OPERATOR",
  "CMPD_DIV_OPERATOR", "EQUAL_OPERATOR", "NOT_EQUAL_OPERATOR",
  "GE_OPERATOR", "LE_OPERATOR", "IF", "ELSE", "ELSE_IF", "ASSIGN",
  "NOT_EQUAL_TO", "EQUAL_TO", "LESS_THAN_EQUAL_TO",
  "GREATER_THAN_EQUAL_TO", "SUBTRACT_COMPOUND_ASSIGNMENT",
  "ADD_COMPOUND_ASSIGNMENT", "MULTIPLY_COMPOUND_ASSIGNMENT",
  "DIVIDE_COMPOUND_ASSIGNMENT", "INTEGER", "DOUBLE", "CHAR", "MUL_OP",
  "ADD_OP", "SUB_OP", "DIV_OP", "POW_OP", "LEFT_PAREN", "RIGHT_PAREN",
  "EOL", "INT_TYPE", "DOUBLE_TYPE", "CHAR_TYPE", "VAR", "INVALID_CHAR",
  "$accept", "CMPD_STATEMENT", "STATEMENT", "INCLUDE_STATEMENT",
  "CONSOLE_STATEMENT", "CONNECT_TO_STATEMENT", "CONDITIONAL_STATEMENT",
  "IF_STATEMENT", "ELSE_STATEMENT", "ASSIGN_STATEMENT", "DECLERATION",
  "ARTH_EXP", "MUL_EXP", "POW_EXP", "RELATIONAL_EXP", "RELATIONAL_OP",
  "TERM", "VAR_LIST", "VAR_TYPE", "ASSIGN_OP", "RESERVED_TYPE", 0
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    82,    83,    83,    83,    84,    84,    84,    84,    84,
      84,    84,    85,    86,    87,    88,    88,    89,    90,    91,
      92,    93,    93,    93,    94,    94,    94,    95,    95,    96,
      96,    97,    97,    97,    97,    97,    97,    98,    98,    98,
      98,    99,    99,   100,   100,   100,   100,   101,   101,   101,
     101,   101,   102,   102,   102,   102,   102,   102,   102,   102,
     102
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     4,     6,     1,     2,     7,     4,     3,
       2,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     4,     0,     1,     0,     0,    52,    53,    54,    55,
      56,    57,    58,    59,    60,     0,    37,    38,     0,    43,
      44,    45,    39,     2,    10,    11,     9,     8,    15,     7,
       6,     5,    23,    26,    28,    30,     0,    46,     0,     0,
       0,    39,     0,     0,    47,    49,    48,    50,    51,     0,
       0,    16,     0,     0,     0,     0,     0,    32,    31,    33,
      34,    35,    36,     0,    42,    20,     0,     0,     0,    40,
       0,    19,     3,    21,    22,    25,    24,    27,    29,     0,
      13,     0,     0,     0,     0,    41,    12,     3,     0,    18,
       0,    14,    17
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,    23,    24,    25,    26,    27,    28,    51,    29,
      30,    31,    32,    33,    34,    63,    35,    65,    36,    49,
      37
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -72
static const yytype_int8 yypact[] =
{
     -71,   -72,     0,   -72,   -39,     9,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -24,   -72,   -72,    53,   -72,
     -72,   -72,    51,   -72,   -72,   -72,   -72,   -72,   -37,   -72,
     -72,   -56,   -64,   -35,   -14,   -72,   -28,   -72,    53,    35,
      53,   -72,   -58,    57,   -72,   -72,   -72,   -72,   -72,    53,
      36,   -72,    53,    53,    53,    53,    53,   -72,   -72,   -72,
     -72,   -72,   -72,    53,   -72,    55,   -22,     5,   -19,   -72,
       2,   -56,   -71,   -64,   -64,   -35,   -35,   -14,   -72,     1,
     -72,    61,    49,     7,    32,   -72,   -72,   -71,    10,   -72,
      64,   -72,   -72
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -72,   -63,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -15,   -31,   -18,   -36,   -72,    25,   -72,   -72,   -72,
     -72
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
       3,    57,    58,    42,    68,    54,    57,    58,    55,    84,
       1,     4,    52,    53,    52,    53,    39,    69,    50,     5,
      77,    73,    74,    66,    90,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    71,    38,    75,    76,    56,    59,
      60,    61,    62,     4,    59,    60,    61,    62,    52,    53,
      40,     5,    64,    80,    15,    67,    82,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    16,    17,    89,    43,
      70,    72,    79,    81,    18,     4,    83,    19,    20,    21,
      22,    85,    86,     5,    87,    91,    15,    88,    78,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    16,    17,
      92,     0,     0,     0,     0,     0,    18,     0,    44,    19,
      20,    21,    22,    45,    46,    47,    48,     0,    15,    16,
      17,     0,     0,     0,     0,     0,     0,    18,     0,     0,
      16,    17,     0,    41,     0,     0,     0,     0,    18,     0,
       0,    19,    20,    21,    22
};

static const yytype_int8 yycheck[] =
{
       0,    20,    21,    18,    40,    69,    20,    21,    72,    72,
      81,    11,    70,    71,    70,    71,     7,    75,    55,    19,
      56,    52,    53,    38,    87,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    49,    74,    54,    55,    73,    58,
      59,    60,    61,    11,    58,    59,    60,    61,    70,    71,
      74,    19,    80,    75,    54,    20,    75,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    66,    67,    36,    18,
      13,    35,    17,    68,    74,    11,    74,    77,    78,    79,
      80,    80,    21,    19,    35,    75,    54,    80,    63,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    66,    67,
      36,    -1,    -1,    -1,    -1,    -1,    74,    -1,    57,    77,
      78,    79,    80,    62,    63,    64,    65,    -1,    54,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,
      66,    67,    -1,    80,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    77,    78,    79,    80
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    81,    83,     0,    11,    19,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    54,    66,    67,    74,    77,
      78,    79,    80,    84,    85,    86,    87,    88,    89,    91,
      92,    93,    94,    95,    96,    98,   100,   102,    74,     7,
      74,    80,    93,    18,    57,    62,    63,    64,    65,   101,
      55,    90,    70,    71,    69,    72,    73,    20,    21,    58,
      59,    60,    61,    97,    80,    99,    93,    20,    96,    75,
      13,    93,    35,    94,    94,    95,    95,    96,    98,    17,
      75,    68,    75,    74,    83,    80,    21,    35,    80,    36,
      83,    75,    36
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
#line 46 "./parser/parser.y"
    {
    struct CmpndStatementNode *node = (struct CmpndStatementNode *) malloc(sizeof(struct CmpndStatementNode));
    if (!node) {
        fprintf(stderr, "Memory allocation failed for CmpndStatementNode\n");
        exit(1);
    }
    //printf("in just recursive Node\n");
    node->ptr = (yyvsp[(2) - (2)].nodePtr);
    add_to_cmpnd_Statement(mainProgram, node);
    (yyval.nodePtr) = node;
;}
    break;

  case 4:
#line 58 "./parser/parser.y"
    {free_cmpndStatement( mainProgram); exit(1); ;}
    break;

  case 5:
#line 59 "./parser/parser.y"
    {(yyval.nodePtr)=(yyvsp[(1) - (1)].nodePtr);;}
    break;

  case 6:
#line 60 "./parser/parser.y"
    {(yyval.nodePtr)=(yyvsp[(1) - (1)].nodePtr);;}
    break;

  case 7:
#line 61 "./parser/parser.y"
    {(yyval.nodePtr)=(yyvsp[(1) - (1)].nodePtr);;}
    break;

  case 8:
#line 62 "./parser/parser.y"
    {(yyval.nodePtr)=(yyvsp[(1) - (1)].nodePtr);;}
    break;

  case 12:
#line 66 "./parser/parser.y"
    { 
                  struct INCLUDE_NODE* inc_node= (struct INCLUDE_NODE*)malloc(sizeof(struct INCLUDE_NODE));
                inc_node = new_INCLUDE_NODE((yyvsp[(4) - (5)].stringval));
                (yyval.nodePtr) = inc_node;

                 ;}
    break;

  case 13:
#line 72 "./parser/parser.y"
    {
                 struct CONSOLE_NODE * cons_node = (struct CONSOLE_NODE *)malloc(sizeof(struct CONSOLE_NODE));
                  cons_node = new_CONSOLE_NODE((yyvsp[(3) - (4)].nodePtr));
                 (yyval.nodePtr) = cons_node;
                 ;}
    break;

  case 14:
#line 77 "./parser/parser.y"
    {

                 struct CONNECT_TO_NODE * cons_node = (struct CONNECT_TO_NODE *)malloc(sizeof(struct CONNECT_TO_NODE));
                  cons_node = new_CONNECT_TO_NODE((yyvsp[(1) - (6)].stringval),(yyvsp[(5) - (6)].stringval),lineno);
                 (yyval.nodePtr) = cons_node;
                    ;}
    break;

  case 15:
#line 83 "./parser/parser.y"
    {
                     struct CONDITIONAL_NODE *conNodePtr= (struct CONDITIONAL_NODE*)malloc(sizeof(struct CONDITIONAL_NODE));
                conNodePtr = new_con_node((yyvsp[(1) - (1)].nodePtr),NULL,NODE_TYPE_COND_IF);
                (yyval.nodePtr) = conNodePtr;
;}
    break;

  case 16:
#line 88 "./parser/parser.y"
    {
                     struct CONDITIONAL_NODE *conNodePtr= (struct CONDITIONAL_NODE*)malloc(sizeof(struct CONDITIONAL_NODE));
                conNodePtr = new_con_node((yyvsp[(1) - (2)].nodePtr),(yyvsp[(2) - (2)].nodePtr),NODE_TYPE_COND_IF_ELSE);
                (yyval.nodePtr) = conNodePtr;
;}
    break;

  case 17:
#line 93 "./parser/parser.y"
    {
                     struct IF_NODE *if_node_ptr= (struct IF_NODE*)malloc(sizeof(struct IF_NODE));
                if_node_ptr = new_if_node((yyvsp[(6) - (7)].nodePtr),(yyvsp[(3) - (7)].nodePtr),lineno);
                (yyval.nodePtr) = if_node_ptr;
            ;}
    break;

  case 18:
#line 98 "./parser/parser.y"
    {

                     struct ELSE_NODE *else_node_ptr= (struct ELSE_NODE *)malloc(sizeof(struct ELSE_NODE));
                else_node_ptr= new_else_node((yyvsp[(3) - (4)].nodePtr),lineno);
                (yyval.nodePtr) = else_node_ptr;
              ;}
    break;

  case 19:
#line 105 "./parser/parser.y"
    {
                struct VariableNode *varNodePtr = (struct VariableNode *)malloc(sizeof(struct VariableNode));
               strcpy(varNodePtr->name,(yyvsp[(1) - (3)].stringval)); 
               varNodePtr->base.node_type =NODE_TYPE_VARIABLE;
               struct ASSIGN_NODE * nodePtr = (struct ASSIGN_NODE *) malloc(sizeof(struct ASSIGN_NODE)); 
                nodePtr = new_ASSIGN_NODE((yyvsp[(2) - (3)].op),varNodePtr,(yyvsp[(3) - (3)].nodePtr),lineno);
                (yyval.nodePtr) = nodePtr;
                ;}
    break;

  case 20:
#line 114 "./parser/parser.y"
    { 
           struct  DECL_NODE *nodePtr = ( struct DECL_NODE*)malloc(sizeof(struct DECL_NODE));
                 nodePtr = new_DECL_NODE((yyvsp[(1) - (2)].type),(yyvsp[(2) - (2)].var_list) ,lineno);
                 (yyval.nodePtr) =nodePtr;

                 ;}
    break;

  case 21:
#line 122 "./parser/parser.y"
    { struct EXP_NODE *nodePtr  = (struct EXP_NODE*)malloc(sizeof(struct EXP_NODE));
          nodePtr =  new_EXP_NODE(ADD,(yyvsp[(1) - (3)].nodePtr),(yyvsp[(3) - (3)].nodePtr),lineno);
         (yyval.nodePtr) = nodePtr;
         ;}
    break;

  case 22:
#line 127 "./parser/parser.y"
    {struct EXP_NODE *nodePtr  = (struct EXP_NODE*)malloc(sizeof(struct EXP_NODE));
          nodePtr =  new_EXP_NODE(SUB,(yyvsp[(1) - (3)].nodePtr),(yyvsp[(3) - (3)].nodePtr),lineno);
         (yyval.nodePtr) = nodePtr;
;}
    break;

  case 23:
#line 131 "./parser/parser.y"
    {(yyval.nodePtr)=(yyvsp[(1) - (1)].nodePtr); ;}
    break;

  case 24:
#line 134 "./parser/parser.y"
    {struct EXP_NODE *nodePtr  = (struct EXP_NODE*)malloc(sizeof(struct EXP_NODE));
          nodePtr =  new_EXP_NODE(DIV,(yyvsp[(1) - (3)].nodePtr),(yyvsp[(3) - (3)].nodePtr),lineno);
         (yyval.nodePtr) = nodePtr;
;}
    break;

  case 25:
#line 139 "./parser/parser.y"
    {struct EXP_NODE *nodePtr  = (struct EXP_NODE*)malloc(sizeof(struct EXP_NODE));
          nodePtr =  new_EXP_NODE(MUL,(yyvsp[(1) - (3)].nodePtr),(yyvsp[(3) - (3)].nodePtr),lineno);
         (yyval.nodePtr) = nodePtr;
;}
    break;

  case 26:
#line 143 "./parser/parser.y"
    {(yyval.nodePtr)=(yyvsp[(1) - (1)].nodePtr);;}
    break;

  case 27:
#line 146 "./parser/parser.y"
    {struct EXP_NODE *nodePtr  = (struct EXP_NODE*)malloc(sizeof(struct EXP_NODE));
          nodePtr =  new_EXP_NODE(POW,(yyvsp[(1) - (3)].nodePtr),(yyvsp[(3) - (3)].nodePtr),lineno);
         (yyval.nodePtr) = nodePtr;
;}
    break;

  case 28:
#line 150 "./parser/parser.y"
    {(yyval.nodePtr)=(yyvsp[(1) - (1)].nodePtr);;}
    break;

  case 29:
#line 153 "./parser/parser.y"
    {struct EXP_NODE *nodePtr  = (struct EXP_NODE*)malloc(sizeof(struct EXP_NODE));
          nodePtr =  new_EXP_NODE((yyvsp[(2) - (3)].op),(yyvsp[(1) - (3)].nodePtr),(yyvsp[(3) - (3)].nodePtr),lineno);
         (yyval.nodePtr) = nodePtr;
;}
    break;

  case 30:
#line 157 "./parser/parser.y"
    {  (yyval.nodePtr)=(yyvsp[(1) - (1)].nodePtr); ;}
    break;

  case 31:
#line 159 "./parser/parser.y"
    {(yyval.op)=GREATER_THAN_ENUM;;}
    break;

  case 32:
#line 160 "./parser/parser.y"
    {(yyval.op)=LESS_THAN_ENUM;;}
    break;

  case 33:
#line 161 "./parser/parser.y"
    {(yyval.op)=NOT_EQUAL_TO_ENUM;;}
    break;

  case 34:
#line 162 "./parser/parser.y"
    {(yyval.op)=EQUAL_TO_ENUM;;}
    break;

  case 35:
#line 163 "./parser/parser.y"
    {(yyval.op)=LESS_THAN_EQUAL_TO_ENUM;;}
    break;

  case 36:
#line 164 "./parser/parser.y"
    {(yyval.op)=GREATER_THAN_EQUAL_TO_ENUM;;}
    break;

  case 37:
#line 166 "./parser/parser.y"
    { struct  ConstNode *nodePtr = ( struct ConstNode*)malloc(sizeof(struct ConstNode));

     union  value val;
     val.intval= atoi((yyvsp[(1) - (1)].stringval));
     nodePtr = new_ConstNode(val,lineno,INTEGER_ENUM);
          (yyval.nodePtr) = nodePtr;;}
    break;

  case 38:
#line 173 "./parser/parser.y"
    {
     struct  ConstNode *nodePtr = ( struct ConstNode*)malloc(sizeof(struct ConstNode));
     
     union  value val;
     val.floatval = atof((yyvsp[(1) - (1)].stringval));
     nodePtr = new_ConstNode(val,lineno,DOUBLE_ENUM);

     (yyval.nodePtr) = nodePtr;;}
    break;

  case 39:
#line 181 "./parser/parser.y"
    {
                             struct VariableNode * var = (struct VariableNode *) malloc(sizeof(struct VariableNode));
               var = new_VariableNode((yyvsp[(1) - (1)].stringval),lineno);
                (yyval.nodePtr)=var;
     ;}
    break;

  case 40:
#line 186 "./parser/parser.y"
    { 
     /*printf("%d here\n",node_type_to_string(((struct Node *)($2))->node_type));*/
     (yyval.nodePtr) = (yyvsp[(2) - (3)].nodePtr);
     ;}
    break;

  case 41:
#line 192 "./parser/parser.y"
    {
                 // Count existing variables in the list
                int count = 0;
                while (strcmp((yyvsp[(1) - (3)].var_list)[count] ,"\0") )  { //Count existing variables in the list
                  count = count + 1;
                 }
                char **temp = realloc((yyvsp[(1) - (3)].var_list), (count + 2) * sizeof(char *));
                if (!temp) {
                    fprintf(stderr, "Memory reallocation failed\n");
                    exit(1);
                }
                (yyvsp[(1) - (3)].var_list)= temp;

                (yyvsp[(1) - (3)].var_list)[count] = strdup((yyvsp[(3) - (3)].stringval));  // Duplicate the new variable name
                (yyvsp[(1) - (3)].var_list)[count + 1] ="\0" ;     // NULL-terminate the list
                (yyval.var_list) = (yyvsp[(1) - (3)].var_list);  // Set the result to the updated list
            ;}
    break;

  case 42:
#line 210 "./parser/parser.y"
    {


                (yyval.var_list) = malloc(2 * sizeof(char *));  // Initialize list with space for one variable + NULL terminator
                if (!(yyval.var_list)) {
                    fprintf(stderr, "Memory allocation failed\n");
                    exit(1);
                }

                (yyval.var_list)[0] = strdup((yyvsp[(1) - (1)].stringval));  // Duplicate the variable name
                (yyval.var_list)[1] = "\0";  // NULL-terminate the list
            ;}
    break;

  case 43:
#line 223 "./parser/parser.y"
    { (yyval.type) = INTEGER_ENUM;;}
    break;

  case 44:
#line 224 "./parser/parser.y"
    { (yyval.type) =DOUBLE_ENUM;;}
    break;

  case 45:
#line 225 "./parser/parser.y"
    {(yyval.type) = CHAR_ENUM;;}
    break;

  case 46:
#line 226 "./parser/parser.y"
    {(yyval.type) = (yyvsp[(1) - (1)].type);;}
    break;

  case 47:
#line 228 "./parser/parser.y"
    {(yyval.op) = ASSIGN_ENUM;;}
    break;

  case 48:
#line 229 "./parser/parser.y"
    {(yyval.op)=ADD_CMPND_ENUM;;}
    break;

  case 49:
#line 230 "./parser/parser.y"
    {(yyval.op)=SUB_CMPND_ENUM;;}
    break;

  case 50:
#line 231 "./parser/parser.y"
    {(yyval.op)=MUL_CMPND_ENUM;;}
    break;

  case 51:
#line 232 "./parser/parser.y"
    {(yyval.op)=DIV_CMPND_ENUM;;}
    break;

  case 52:
#line 234 "./parser/parser.y"
    { (yyval.type) = MASS_ENUM; ;}
    break;

  case 53:
#line 235 "./parser/parser.y"
    { (yyval.type) = INIT_VEL_ENUM; ;}
    break;

  case 54:
#line 236 "./parser/parser.y"
    { (yyval.type) = FINAL_VEL_ENUM; ;}
    break;

  case 55:
#line 237 "./parser/parser.y"
    { (yyval.type) = ACCL_ENUM; ;}
    break;

  case 56:
#line 238 "./parser/parser.y"
    { (yyval.type) = INIT_POS_ENUM; ;}
    break;

  case 57:
#line 239 "./parser/parser.y"
    { (yyval.type) = FINAL_POS_ENUM; ;}
    break;

  case 58:
#line 240 "./parser/parser.y"
    { (yyval.type) = INIT_TIME_ENUM; ;}
    break;

  case 59:
#line 241 "./parser/parser.y"
    { (yyval.type) = FINAL_TIME_ENUM; ;}
    break;

  case 60:
#line 242 "./parser/parser.y"
    { (yyval.type) = BODY_ENUM; ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2008 "parser.tab.c"
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


#line 244 "./parser/parser.y"


void yyerror(char * s){
printf("Error:%s\n",s);
}


void process_variable_list(char **var_list) {
    int i = 0;
    while (var_list[i] != NULL) {
        printf("%s ", var_list[i]);
        free(var_list[i]);  // Free each duplicated string after use
        i++;
    }
    //free(var_list);  // Free the list itself after processing
    printf("\n");
}


void signal_handler(int sig) {
    if (sig == SIGINT) {
      //  printf("\nCaught SIGINT (Ctrl+C). Exiting gracefully...\n");
        // Perform any necessary clean-up here (e.g., free memory, close files)
semanticCheck(mainProgram,&symTable);
transpile_cmpd(&symTable,mainProgram);
free_cmpndStatement( mainProgram); 
        exit(0);  // Exit the program
}
}
extern FILE *yyin;
int main(int argc, char** argv){
if (argc < 2) {
        fprintf(stderr, "Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    // Open the input file
    FILE *input_file = fopen(argv[1], "r");
    if (!input_file) {
        fprintf(stderr, "Error: Could not open file %s\n", argv[1]);
    }

    // Set the input file for yyparse
    yyin = input_file;
init_SymbolTable(&symTable);
    mainProgram = (struct CmpndStatement*)malloc(sizeof(struct CmpndStatement));
    init_cmpndStatement( mainProgram);

/*if (signal(SIGINT, signal_handler) == SIG_ERR) {
        fprintf(stderr, "Error setting up signal handler.\n");
        return 1;
    }

    // Initialize the lexer state (if using Flex) or other setup
    while (1) {
        yyparse();
    }
    return 0;
*/
 while (!feof(yyin)) {
        yyparse();  // This will parse the tokens from the input file
    }
semanticCheck(mainProgram,&symTable);
transpile_cmpd(&symTable,mainProgram);
free_cmpndStatement( mainProgram); 

}

