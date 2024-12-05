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
struct CmpndStatement * program;
}
/* Line 193 of yacc.c.  */
#line 269 "parser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 282 "parser.tab.c"

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
#define YYLAST   101

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  47
/* YYNRULES -- Number of states.  */
#define YYNSTATES  77

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   326

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
      65,    66,    67,    68,    69,    70,    71
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,     8,    10,    12,    14,    16,    20,
      23,    27,    31,    33,    37,    41,    43,    47,    49,    53,
      55,    57,    59,    61,    63,    65,    67,    69,    71,    73,
      77,    81,    83,    85,    87,    89,    91,    93,    95,    97,
      99,   101,   104,   108,   116,   121,   124,   126
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      73,     0,    -1,    73,    74,    -1,    71,    -1,    77,    -1,
      76,    -1,    75,    -1,    86,    -1,    70,    85,    77,    -1,
      84,    83,    -1,    77,    60,    78,    -1,    77,    61,    78,
      -1,    78,    -1,    78,    62,    79,    -1,    78,    59,    79,
      -1,    79,    -1,    79,    63,    80,    -1,    80,    -1,    80,
      81,    82,    -1,    82,    -1,    22,    -1,    21,    -1,    48,
      -1,    49,    -1,    50,    -1,    51,    -1,    56,    -1,    57,
      -1,    70,    -1,    64,    77,    65,    -1,    83,    18,    70,
      -1,    70,    -1,    67,    -1,    68,    -1,    69,    -1,    47,
      -1,    53,    -1,    52,    -1,    54,    -1,    55,    -1,    87,
      -1,    87,    88,    -1,    87,    89,    88,    -1,    44,    23,
      80,    24,    27,    73,    28,    -1,    45,    27,    73,    28,
      -1,    90,    89,    -1,    90,    -1,    46,    23,    80,    24,
      27,    73,    28,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    47,    47,    58,    59,    60,    61,    62,    75,    84,
      90,    95,    99,   102,   107,   111,   114,   118,   121,   125,
     127,   128,   129,   130,   131,   132,   134,   141,   149,   154,
     160,   178,   191,   192,   193,   196,   197,   198,   199,   200,
     200,   201,   202,   204,   206,   207,   207,   208
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VALUE", "ASSIGN_OPERATOR",
  "RESERVED_TYPE", "RESERVED_KEYWORD", "SEMICOLON", "INCLUDE", "INT",
  "LIBRARY", "FUNCTION", "CONSOLE", "STRING", "CONNECT_TO", "RETURN",
  "COMMENT", "IDENTIFIER", "COMMA", "JOIN_OPERATOR", "HASH", "LESS_THAN",
  "GREATER_THAN", "LEFT_PARENT", "RIGHT_PARENT", "LEFT_BRACE",
  "RIGHT_BRACE", "LEFT_CURLY_BRACE", "RIGHT_CURLY_BRACE", "AND_OPERATOR",
  "OR_OPERATOR", "NOT_OPERATOR", "ADD_OPERATOR", "SUB_OPERATOR",
  "MULT_OPERATOR", "DIV_OPERATOR", "CMPD_ADD_OPERATOR",
  "CMPD_SUB_OPERATOR", "CMPD_MULT_OPERATOR", "CMPD_DIV_OPERATOR",
  "EQUAL_OPERATOR", "NOT_EQUAL_OPERATOR", "GE_OPERATOR", "LE_OPERATOR",
  "IF", "ELSE", "ELSE_IF", "ASSIGN", "NOT_EQUAL_TO", "EQUAL_TO",
  "LESS_THAN_EQUAL_TO", "GREATER_THAN_EQUAL_TO",
  "SUBTRACT_COMPOUND_ASSIGNMENT", "ADD_COMPOUND_ASSIGNMENT",
  "MULTIPLY_COMPOUND_ASSIGNMENT", "DIVIDE_COMPOUND_ASSIGNMENT", "INTEGER",
  "DOUBLE", "CHAR", "MUL_OP", "ADD_OP", "SUB_OP", "DIV_OP", "POW_OP",
  "LEFT_PAREN", "RIGHT_PAREN", "EOL", "INT_TYPE", "DOUBLE_TYPE",
  "CHAR_TYPE", "VAR", "INVALID_CHAR", "$accept", "CMPD_STATEMENT",
  "STATEMENT", "ASSIGN_STATEMENT", "DECLERATION", "ARTH_EXP", "MUL_EXP",
  "POW_EXP", "RELATIONAL_EXP", "RELATIONAL_OP", "TERM", "VAR_LIST",
  "VAR_TYPE", "ASSIGN_OP", "CONDITIONAL_STATEMENT", "IF_STATEMENT",
  "ELSE_STATEMENT", "ELSEIF_STATEMENT_LIST", "ELSEIF_STATEMENT", 0
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
     325,   326
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    72,    73,    73,    74,    74,    74,    74,    75,    76,
      77,    77,    77,    78,    78,    78,    79,    79,    80,    80,
      81,    81,    81,    81,    81,    81,    82,    82,    82,    82,
      83,    83,    84,    84,    84,    85,    85,    85,    85,    85,
      86,    86,    86,    87,    88,    89,    89,    90
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     1,     1,     3,     2,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     7,     4,     2,     1,     7
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     0,     1,     0,    26,    27,     0,    32,    33,
      34,    28,     2,     6,     5,     4,    12,    15,    17,    19,
       0,     7,    40,     0,    28,     0,    35,    37,    36,    38,
      39,     0,     0,     0,     0,     0,     0,    21,    20,    22,
      23,    24,    25,     0,    31,     9,     0,     0,    41,     0,
      46,     0,    29,     8,    10,    11,    14,    13,    16,    18,
       0,     0,     0,    42,    45,     0,    30,     0,     0,     0,
      44,     0,     0,     0,    43,     0,    47
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,    12,    13,    14,    15,    16,    17,    18,    43,
      19,    45,    20,    31,    21,    22,    48,    49,    50
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -70
static const yytype_int8 yypact[] =
{
     -69,   -70,     0,   -70,   -10,   -70,   -70,   -48,   -70,   -70,
     -70,    26,   -70,   -70,   -70,   -49,    15,     3,    50,   -70,
     -34,   -70,   -22,   -48,   -70,   -40,   -70,   -70,   -70,   -70,
     -70,   -48,   -48,   -48,   -48,   -48,   -48,   -70,   -70,   -70,
     -70,   -70,   -70,   -48,   -70,    27,    57,    30,   -70,    40,
      42,   -17,   -70,   -49,    15,    15,     3,     3,    50,   -70,
      16,   -69,   -48,   -70,   -70,    60,   -70,   -27,    41,   -69,
     -70,    66,   -18,   -69,   -70,    -9,   -70
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -70,   -55,   -70,   -70,   -70,    -4,    43,    48,    -8,   -70,
      51,   -70,   -70,   -70,   -70,   -70,    46,    47,   -70
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
       3,    70,     1,    25,    37,    38,    67,    65,     5,     6,
      74,    32,    33,    23,    72,    51,     7,     4,    75,    76,
      32,    33,    24,    46,    47,    52,     4,    53,    58,     5,
       6,    39,    40,    41,    42,     4,    44,     7,     5,     6,
       8,     9,    10,    11,     4,    60,     7,     5,     6,     8,
       9,    10,    11,    62,    68,     7,     5,     6,     8,     9,
      10,    11,    37,    38,     7,    71,    36,     8,     9,    10,
      11,    37,    38,    26,    34,    54,    55,    35,    27,    28,
      29,    30,    56,    57,    61,    46,    66,    69,    47,    39,
      40,    41,    42,    73,    59,    63,     0,    64,    39,    40,
      41,    42
};

static const yytype_int8 yycheck[] =
{
       0,    28,    71,     7,    21,    22,    61,    24,    56,    57,
      28,    60,    61,    23,    69,    23,    64,    44,    73,    28,
      60,    61,    70,    45,    46,    65,    44,    31,    36,    56,
      57,    48,    49,    50,    51,    44,    70,    64,    56,    57,
      67,    68,    69,    70,    44,    18,    64,    56,    57,    67,
      68,    69,    70,    23,    62,    64,    56,    57,    67,    68,
      69,    70,    21,    22,    64,    24,    63,    67,    68,    69,
      70,    21,    22,    47,    59,    32,    33,    62,    52,    53,
      54,    55,    34,    35,    27,    45,    70,    27,    46,    48,
      49,    50,    51,    27,    43,    49,    -1,    50,    48,    49,
      50,    51
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    71,    73,     0,    44,    56,    57,    64,    67,    68,
      69,    70,    74,    75,    76,    77,    78,    79,    80,    82,
      84,    86,    87,    23,    70,    77,    47,    52,    53,    54,
      55,    85,    60,    61,    59,    62,    63,    21,    22,    48,
      49,    50,    51,    81,    70,    83,    45,    46,    88,    89,
      90,    80,    65,    77,    78,    78,    79,    79,    80,    82,
      18,    27,    23,    88,    89,    24,    70,    73,    80,    27,
      28,    24,    73,    27,    28,    73,    28
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
#line 47 "./parser/parser.y"
    {
    struct CmpndStatementNode *node = (struct CmpndStatementNode *) malloc(sizeof(struct CmpndStatementNode));
    if (!node) {
        fprintf(stderr, "Memory allocation failed for CmpndStatementNode\n");
        exit(1);
    }

    //printf("in just recursive Node\n");
    node->ptr = (yyvsp[(2) - (2)].nodePtr);
    add_to_cmpnd_Statement(mainProgram, node);
;}
    break;

  case 3:
#line 58 "./parser/parser.y"
    {free_cmpndStatement( mainProgram); exit(1); ;}
    break;

  case 4:
#line 59 "./parser/parser.y"
    {(yyval.nodePtr)=(yyvsp[(1) - (1)].nodePtr);;}
    break;

  case 5:
#line 60 "./parser/parser.y"
    {(yyval.nodePtr)=(yyvsp[(1) - (1)].nodePtr);;}
    break;

  case 6:
#line 61 "./parser/parser.y"
    {(yyval.nodePtr)=(yyvsp[(1) - (1)].nodePtr);;}
    break;

  case 7:
#line 62 "./parser/parser.y"
    {(yyval.nodePtr)=(yyvsp[(1) - (1)].nodePtr);;}
    break;

  case 8:
#line 75 "./parser/parser.y"
    {
                struct VariableNode *varNodePtr = (struct VariableNode *)malloc(sizeof(struct VariableNode));
               strcpy(varNodePtr->name,(yyvsp[(1) - (3)].stringval)); 
               varNodePtr->base.node_type =NODE_TYPE_VARIABLE;
               struct ASSIGN_NODE * nodePtr = (struct ASSIGN_NODE *) malloc(sizeof(struct ASSIGN_NODE)); 
                nodePtr = new_ASSIGN_NODE((yyvsp[(2) - (3)].op),varNodePtr,(yyvsp[(3) - (3)].nodePtr),lineno);
                (yyval.nodePtr) = nodePtr;
                ;}
    break;

  case 9:
#line 84 "./parser/parser.y"
    { 
           struct  DECL_NODE *nodePtr = ( struct DECL_NODE*)malloc(sizeof(struct DECL_NODE));
                 nodePtr = new_DECL_NODE((yyvsp[(1) - (2)].type),(yyvsp[(2) - (2)].var_list) ,lineno);
                 (yyval.nodePtr) =nodePtr;

                 ;}
    break;

  case 10:
#line 90 "./parser/parser.y"
    { struct EXP_NODE *nodePtr  = (struct EXP_NODE*)malloc(sizeof(struct EXP_NODE));
          nodePtr =  new_EXP_NODE(ADD,(yyvsp[(1) - (3)].nodePtr),(yyvsp[(3) - (3)].nodePtr),lineno);
         (yyval.nodePtr) = nodePtr;
         ;}
    break;

  case 11:
#line 95 "./parser/parser.y"
    {struct EXP_NODE *nodePtr  = (struct EXP_NODE*)malloc(sizeof(struct EXP_NODE));
          nodePtr =  new_EXP_NODE(SUB,(yyvsp[(1) - (3)].nodePtr),(yyvsp[(3) - (3)].nodePtr),lineno);
         (yyval.nodePtr) = nodePtr;
;}
    break;

  case 12:
#line 99 "./parser/parser.y"
    {(yyval.nodePtr)=(yyvsp[(1) - (1)].nodePtr); ;}
    break;

  case 13:
#line 102 "./parser/parser.y"
    {struct EXP_NODE *nodePtr  = (struct EXP_NODE*)malloc(sizeof(struct EXP_NODE));
          nodePtr =  new_EXP_NODE(DIV,(yyvsp[(1) - (3)].nodePtr),(yyvsp[(3) - (3)].nodePtr),lineno);
         (yyval.nodePtr) = nodePtr;
;}
    break;

  case 14:
#line 107 "./parser/parser.y"
    {struct EXP_NODE *nodePtr  = (struct EXP_NODE*)malloc(sizeof(struct EXP_NODE));
          nodePtr =  new_EXP_NODE(MUL,(yyvsp[(1) - (3)].nodePtr),(yyvsp[(3) - (3)].nodePtr),lineno);
         (yyval.nodePtr) = nodePtr;
;}
    break;

  case 15:
#line 111 "./parser/parser.y"
    {(yyval.nodePtr)=(yyvsp[(1) - (1)].nodePtr);;}
    break;

  case 16:
#line 114 "./parser/parser.y"
    {struct EXP_NODE *nodePtr  = (struct EXP_NODE*)malloc(sizeof(struct EXP_NODE));
          nodePtr =  new_EXP_NODE(POW,(yyvsp[(1) - (3)].nodePtr),(yyvsp[(3) - (3)].nodePtr),lineno);
         (yyval.nodePtr) = nodePtr;
;}
    break;

  case 17:
#line 118 "./parser/parser.y"
    {(yyval.nodePtr)=(yyvsp[(1) - (1)].nodePtr);;}
    break;

  case 18:
#line 121 "./parser/parser.y"
    {struct EXP_NODE *nodePtr  = (struct EXP_NODE*)malloc(sizeof(struct EXP_NODE));
          nodePtr =  new_EXP_NODE((yyvsp[(2) - (3)].op),(yyvsp[(1) - (3)].nodePtr),(yyvsp[(3) - (3)].nodePtr),lineno);
         (yyval.nodePtr) = nodePtr;
;}
    break;

  case 19:
#line 125 "./parser/parser.y"
    {  (yyval.nodePtr)=(yyvsp[(1) - (1)].nodePtr); ;}
    break;

  case 20:
#line 127 "./parser/parser.y"
    {(yyval.op)=GREATER_THAN_ENUM;;}
    break;

  case 21:
#line 128 "./parser/parser.y"
    {(yyval.op)=LESS_THAN_ENUM;;}
    break;

  case 22:
#line 129 "./parser/parser.y"
    {(yyval.op)=NOT_EQUAL_TO_ENUM;;}
    break;

  case 23:
#line 130 "./parser/parser.y"
    {(yyval.op)=EQUAL_TO_ENUM;;}
    break;

  case 24:
#line 131 "./parser/parser.y"
    {(yyval.op)=LESS_THAN_EQUAL_TO_ENUM;;}
    break;

  case 25:
#line 132 "./parser/parser.y"
    {(yyval.op)=GREATER_THAN_EQUAL_TO_ENUM;;}
    break;

  case 26:
#line 134 "./parser/parser.y"
    { struct  ConstNode *nodePtr = ( struct ConstNode*)malloc(sizeof(struct ConstNode));

     union  value val;
     val.intval= atoi((yyvsp[(1) - (1)].stringval));
     nodePtr = new_ConstNode(val,lineno,INTEGER_ENUM);
          (yyval.nodePtr) = nodePtr;;}
    break;

  case 27:
#line 141 "./parser/parser.y"
    {
     struct  ConstNode *nodePtr = ( struct ConstNode*)malloc(sizeof(struct ConstNode));
     
     union  value val;
     val.floatval = atof((yyvsp[(1) - (1)].stringval));
     nodePtr = new_ConstNode(val,lineno,DOUBLE_ENUM);

     (yyval.nodePtr) = nodePtr;;}
    break;

  case 28:
#line 149 "./parser/parser.y"
    {
                             struct VariableNode * var = (struct VariableNode *) malloc(sizeof(struct VariableNode));
               var = new_VariableNode((yyvsp[(1) - (1)].stringval),lineno);
                (yyval.nodePtr)=var;
     ;}
    break;

  case 29:
#line 154 "./parser/parser.y"
    { 
     printf("%d here\n",node_type_to_string(((struct Node *)((yyvsp[(2) - (3)].nodePtr)))->node_type));
     (yyval.nodePtr) = (yyvsp[(2) - (3)].nodePtr);
     ;}
    break;

  case 30:
#line 160 "./parser/parser.y"
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

  case 31:
#line 178 "./parser/parser.y"
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

  case 32:
#line 191 "./parser/parser.y"
    {printf("Here"); (yyval.type) = INTEGER_ENUM; ;}
    break;

  case 33:
#line 192 "./parser/parser.y"
    { (yyval.type) =DOUBLE_ENUM;;}
    break;

  case 34:
#line 193 "./parser/parser.y"
    {(yyval.type) = CHAR_ENUM;;}
    break;

  case 35:
#line 196 "./parser/parser.y"
    {(yyval.op) = ASSIGN_ENUM;;}
    break;

  case 36:
#line 197 "./parser/parser.y"
    {(yyval.op)=ADD_CMPND_ENUM;;}
    break;

  case 37:
#line 198 "./parser/parser.y"
    {(yyval.op)=SUB_CMPND_ENUM;;}
    break;

  case 38:
#line 199 "./parser/parser.y"
    {(yyval.op)=MUL_CMPND_ENUM;;}
    break;

  case 39:
#line 200 "./parser/parser.y"
    {(yyval.op)=DIV_CMPND_ENUM;;}
    break;

  case 40:
#line 200 "./parser/parser.y"
    {;}
    break;

  case 41:
#line 201 "./parser/parser.y"
    {;}
    break;

  case 42:
#line 202 "./parser/parser.y"
    {;}
    break;


/* Line 1267 of yacc.c.  */
#line 1857 "parser.tab.c"
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


#line 209 "./parser/parser.y"


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

int main(int argc, char** argv){
init_SymbolTable(&symTable);
    mainProgram = (struct CmpndStatement*)malloc(sizeof(struct CmpndStatement));
    init_cmpndStatement( mainProgram);
if (signal(SIGINT, signal_handler) == SIG_ERR) {
        fprintf(stderr, "Error setting up signal handler.\n");
        return 1;
    }
    // Initialize the lexer state (if using Flex) or other setup
    while (1) {
        yyparse();
    }
    return 0;

}

