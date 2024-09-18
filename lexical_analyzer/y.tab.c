/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void yyerror(char *);
int yylex();
int addtoken(char *s,char*token_value);


#line 81 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 272 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INTEGER = 3,                    /* INTEGER  */
  YYSYMBOL_DOUBLE = 4,                     /* DOUBLE  */
  YYSYMBOL_STRING_VALUE = 5,               /* STRING_VALUE  */
  YYSYMBOL_BOOL_VALUE = 6,                 /* BOOL_VALUE  */
  YYSYMBOL_INT = 7,                        /* INT  */
  YYSYMBOL_FLOAT = 8,                      /* FLOAT  */
  YYSYMBOL_CHAR = 9,                       /* CHAR  */
  YYSYMBOL_BOOLEAN = 10,                   /* BOOLEAN  */
  YYSYMBOL_STRING = 11,                    /* STRING  */
  YYSYMBOL_VECTOR = 12,                    /* VECTOR  */
  YYSYMBOL_CLUSTER = 13,                   /* CLUSTER  */
  YYSYMBOL_VOID = 14,                      /* VOID  */
  YYSYMBOL_BODY = 15,                      /* BODY  */
  YYSYMBOL_BASIC = 16,                     /* BASIC  */
  YYSYMBOL_FORCE = 17,                     /* FORCE  */
  YYSYMBOL_IF = 18,                        /* IF  */
  YYSYMBOL_ELSE = 19,                      /* ELSE  */
  YYSYMBOL_CHECK_UNTIL = 20,               /* CHECK_UNTIL  */
  YYSYMBOL_BREAK = 21,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 22,                  /* CONTINUE  */
  YYSYMBOL_FIX = 23,                       /* FIX  */
  YYSYMBOL_USE = 24,                       /* USE  */
  YYSYMBOL_HARDWARE = 25,                  /* HARDWARE  */
  YYSYMBOL_GPU = 26,                       /* GPU  */
  YYSYMBOL_CPU = 27,                       /* CPU  */
  YYSYMBOL_OS = 28,                        /* OS  */
  YYSYMBOL_RETURN = 29,                    /* RETURN  */
  YYSYMBOL_TRY = 30,                       /* TRY  */
  YYSYMBOL_CATCH = 31,                     /* CATCH  */
  YYSYMBOL_TYPEOF = 32,                    /* TYPEOF  */
  YYSYMBOL_CLASS = 33,                     /* CLASS  */
  YYSYMBOL_EXTENDS = 34,                   /* EXTENDS  */
  YYSYMBOL_INHERITS = 35,                  /* INHERITS  */
  YYSYMBOL_HIDDEN = 36,                    /* HIDDEN  */
  YYSYMBOL_DEG = 37,                       /* DEG  */
  YYSYMBOL_ADD_OP = 38,                    /* ADD_OP  */
  YYSYMBOL_SUB_OP = 39,                    /* SUB_OP  */
  YYSYMBOL_DIV_OP = 40,                    /* DIV_OP  */
  YYSYMBOL_MULT_OP = 41,                   /* MULT_OP  */
  YYSYMBOL_POW_OP = 42,                    /* POW_OP  */
  YYSYMBOL_MOD_OP = 43,                    /* MOD_OP  */
  YYSYMBOL_ABS_OP = 44,                    /* ABS_OP  */
  YYSYMBOL_COMP_ASSIGN_DIV = 45,           /* COMP_ASSIGN_DIV  */
  YYSYMBOL_COMP_ASSIGN_SUBTRACT = 46,      /* COMP_ASSIGN_SUBTRACT  */
  YYSYMBOL_COMP_ASSIGN_MUL = 47,           /* COMP_ASSIGN_MUL  */
  YYSYMBOL_LESS_THAN = 48,                 /* LESS_THAN  */
  YYSYMBOL_LESS_THAN_EQ = 49,              /* LESS_THAN_EQ  */
  YYSYMBOL_GREAT_THAN = 50,                /* GREAT_THAN  */
  YYSYMBOL_GREAT_THAN_EQ = 51,             /* GREAT_THAN_EQ  */
  YYSYMBOL_VAR = 52,                       /* VAR  */
  YYSYMBOL_ASSIGN = 53,                    /* ASSIGN  */
  YYSYMBOL_COMP_ASSIGN_ADD = 54,           /* COMP_ASSIGN_ADD  */
  YYSYMBOL_EOL = 55,                       /* EOL  */
  YYSYMBOL_LEFT_PAREN = 56,                /* LEFT_PAREN  */
  YYSYMBOL_RIGHT_PAREN = 57,               /* RIGHT_PAREN  */
  YYSYMBOL_LEFT_CURLY_BRACE = 58,          /* LEFT_CURLY_BRACE  */
  YYSYMBOL_RIGHT_CURLY_BRACE = 59,         /* RIGHT_CURLY_BRACE  */
  YYSYMBOL_LEFT_BRACE = 60,                /* LEFT_BRACE  */
  YYSYMBOL_RIGHT_BRACE = 61,               /* RIGHT_BRACE  */
  YYSYMBOL_MAIN = 62,                      /* MAIN  */
  YYSYMBOL_SINGLE_LINE_COMMENT = 63,       /* SINGLE_LINE_COMMENT  */
  YYSYMBOL_MULTI_LINE_COMMENT = 64,        /* MULTI_LINE_COMMENT  */
  YYSYMBOL_CONST = 65,                     /* CONST  */
  YYSYMBOL_MASS = 66,                      /* MASS  */
  YYSYMBOL_YYACCEPT = 67,                  /* $accept  */
  YYSYMBOL_input = 68,                     /* input  */
  YYSYMBOL_statement = 69                  /* statement  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   66

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  3
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  68

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   321


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      65,    66
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int8 yyrline[] =
{
       0,    29,    29,    30,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INTEGER", "DOUBLE",
  "STRING_VALUE", "BOOL_VALUE", "INT", "FLOAT", "CHAR", "BOOLEAN",
  "STRING", "VECTOR", "CLUSTER", "VOID", "BODY", "BASIC", "FORCE", "IF",
  "ELSE", "CHECK_UNTIL", "BREAK", "CONTINUE", "FIX", "USE", "HARDWARE",
  "GPU", "CPU", "OS", "RETURN", "TRY", "CATCH", "TYPEOF", "CLASS",
  "EXTENDS", "INHERITS", "HIDDEN", "DEG", "ADD_OP", "SUB_OP", "DIV_OP",
  "MULT_OP", "POW_OP", "MOD_OP", "ABS_OP", "COMP_ASSIGN_DIV",
  "COMP_ASSIGN_SUBTRACT", "COMP_ASSIGN_MUL", "LESS_THAN", "LESS_THAN_EQ",
  "GREAT_THAN", "GREAT_THAN_EQ", "VAR", "ASSIGN", "COMP_ASSIGN_ADD", "EOL",
  "LEFT_PAREN", "RIGHT_PAREN", "LEFT_CURLY_BRACE", "RIGHT_CURLY_BRACE",
  "LEFT_BRACE", "RIGHT_BRACE", "MAIN", "SINGLE_LINE_COMMENT",
  "MULTI_LINE_COMMENT", "CONST", "MASS", "$accept", "input", "statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-1)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      -1,     0,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     1,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    39,    40,    41,
      42,    43,    44,    45,    46,    48,    49,    50,    51,    52,
      53,    54,    55,    38,    47,    56,    58,    57,    61,    62,
      59,    60,    63,    64,    65,    66,    67,     3
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
      -1,    -1,    -1
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,    67
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
       2,     0,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66
};

static const yytype_int8 yycheck[] =
{
       0,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    68,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    69
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    67,    68,    68,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 4: /* statement: INTEGER  */
#line 33 "parser.y"
            { char buffer[20]; sprintf(buffer, "%d", (yyvsp[0].intval)); addtoken("INTEGER", buffer); }
#line 1371 "y.tab.c"
    break;

  case 5: /* statement: DOUBLE  */
#line 34 "parser.y"
             { char buffer[20]; sprintf(buffer, "%.2f", (yyvsp[0].floatval)); addtoken("DOUBLE", buffer); }
#line 1377 "y.tab.c"
    break;

  case 6: /* statement: STRING_VALUE  */
#line 35 "parser.y"
                   { addtoken("STRING_VALUE", (yyvsp[0].stringval)); }
#line 1383 "y.tab.c"
    break;

  case 7: /* statement: BOOL_VALUE  */
#line 36 "parser.y"
                 { addtoken("BOOL_VALUE", (yyvsp[0].stringval)); }
#line 1389 "y.tab.c"
    break;

  case 8: /* statement: INT  */
#line 37 "parser.y"
          { addtoken("INT", " "); }
#line 1395 "y.tab.c"
    break;

  case 9: /* statement: FLOAT  */
#line 38 "parser.y"
            { addtoken("FLOAT", " "); }
#line 1401 "y.tab.c"
    break;

  case 10: /* statement: CHAR  */
#line 39 "parser.y"
           { addtoken("CHAR", " "); }
#line 1407 "y.tab.c"
    break;

  case 11: /* statement: BOOLEAN  */
#line 40 "parser.y"
              { addtoken("BOOLEAN", " "); }
#line 1413 "y.tab.c"
    break;

  case 12: /* statement: STRING  */
#line 41 "parser.y"
             { addtoken("STRING", " "); }
#line 1419 "y.tab.c"
    break;

  case 13: /* statement: VECTOR  */
#line 42 "parser.y"
             { addtoken("VECTOR", " "); }
#line 1425 "y.tab.c"
    break;

  case 14: /* statement: CLUSTER  */
#line 43 "parser.y"
              { addtoken("CLUSTER", " "); }
#line 1431 "y.tab.c"
    break;

  case 15: /* statement: VOID  */
#line 44 "parser.y"
           { addtoken("VOID", " "); }
#line 1437 "y.tab.c"
    break;

  case 16: /* statement: BODY  */
#line 45 "parser.y"
           { addtoken("BODY", " "); }
#line 1443 "y.tab.c"
    break;

  case 17: /* statement: BASIC  */
#line 46 "parser.y"
            { addtoken("BASIC", " "); }
#line 1449 "y.tab.c"
    break;

  case 18: /* statement: FORCE  */
#line 47 "parser.y"
            { addtoken("FORCE", " "); }
#line 1455 "y.tab.c"
    break;

  case 19: /* statement: IF  */
#line 48 "parser.y"
         { addtoken("IF", " "); }
#line 1461 "y.tab.c"
    break;

  case 20: /* statement: ELSE  */
#line 49 "parser.y"
           { addtoken("ELSE", " "); }
#line 1467 "y.tab.c"
    break;

  case 21: /* statement: CHECK_UNTIL  */
#line 50 "parser.y"
                  { addtoken("CHECK_UNTIL", " "); }
#line 1473 "y.tab.c"
    break;

  case 22: /* statement: BREAK  */
#line 51 "parser.y"
            { addtoken("BREAK", " "); }
#line 1479 "y.tab.c"
    break;

  case 23: /* statement: CONTINUE  */
#line 52 "parser.y"
               { addtoken("CONTINUE", " "); }
#line 1485 "y.tab.c"
    break;

  case 24: /* statement: FIX  */
#line 53 "parser.y"
          { addtoken("FIX", " "); }
#line 1491 "y.tab.c"
    break;

  case 25: /* statement: USE  */
#line 54 "parser.y"
          { addtoken("USE", " "); }
#line 1497 "y.tab.c"
    break;

  case 26: /* statement: HARDWARE  */
#line 55 "parser.y"
               { addtoken("HARDWARE", " "); }
#line 1503 "y.tab.c"
    break;

  case 27: /* statement: GPU  */
#line 56 "parser.y"
          { addtoken("GPU", " "); }
#line 1509 "y.tab.c"
    break;

  case 28: /* statement: CPU  */
#line 57 "parser.y"
          { addtoken("CPU", " "); }
#line 1515 "y.tab.c"
    break;

  case 29: /* statement: OS  */
#line 58 "parser.y"
         { addtoken("OS", " "); }
#line 1521 "y.tab.c"
    break;

  case 30: /* statement: RETURN  */
#line 59 "parser.y"
             { addtoken("RETURN", " "); }
#line 1527 "y.tab.c"
    break;

  case 31: /* statement: TRY  */
#line 60 "parser.y"
          { addtoken("TRY", " "); }
#line 1533 "y.tab.c"
    break;

  case 32: /* statement: CATCH  */
#line 61 "parser.y"
            { addtoken("CATCH", " "); }
#line 1539 "y.tab.c"
    break;

  case 33: /* statement: TYPEOF  */
#line 62 "parser.y"
             { addtoken("TYPEOF", " "); }
#line 1545 "y.tab.c"
    break;

  case 34: /* statement: CLASS  */
#line 63 "parser.y"
            { addtoken("CLASS", " "); }
#line 1551 "y.tab.c"
    break;

  case 35: /* statement: EXTENDS  */
#line 64 "parser.y"
              { addtoken("EXTENDS", " "); }
#line 1557 "y.tab.c"
    break;

  case 36: /* statement: INHERITS  */
#line 65 "parser.y"
               { addtoken("INHERITS", " "); }
#line 1563 "y.tab.c"
    break;

  case 37: /* statement: HIDDEN  */
#line 66 "parser.y"
             { addtoken("HIDDEN", " "); }
#line 1569 "y.tab.c"
    break;

  case 38: /* statement: ASSIGN  */
#line 67 "parser.y"
             { addtoken("ASSIGN", " "); }
#line 1575 "y.tab.c"
    break;

  case 39: /* statement: DEG  */
#line 68 "parser.y"
          { addtoken("DEG", " "); }
#line 1581 "y.tab.c"
    break;

  case 40: /* statement: ADD_OP  */
#line 69 "parser.y"
             { addtoken("ADD_OP", " "); }
#line 1587 "y.tab.c"
    break;

  case 41: /* statement: SUB_OP  */
#line 70 "parser.y"
             { addtoken("SUB_OP", " "); }
#line 1593 "y.tab.c"
    break;

  case 42: /* statement: DIV_OP  */
#line 71 "parser.y"
             { addtoken("DIV_OP", " "); }
#line 1599 "y.tab.c"
    break;

  case 43: /* statement: MULT_OP  */
#line 72 "parser.y"
              { addtoken("MULT_OP", " "); }
#line 1605 "y.tab.c"
    break;

  case 44: /* statement: POW_OP  */
#line 73 "parser.y"
             { addtoken("POW_OP", " "); }
#line 1611 "y.tab.c"
    break;

  case 45: /* statement: MOD_OP  */
#line 74 "parser.y"
             { addtoken("MOD_OP", " "); }
#line 1617 "y.tab.c"
    break;

  case 46: /* statement: ABS_OP  */
#line 75 "parser.y"
             { addtoken("ABS_OP", " "); }
#line 1623 "y.tab.c"
    break;

  case 47: /* statement: COMP_ASSIGN_ADD  */
#line 76 "parser.y"
                      { addtoken("COMP_ASSIGN_ADD", " "); }
#line 1629 "y.tab.c"
    break;

  case 48: /* statement: COMP_ASSIGN_DIV  */
#line 77 "parser.y"
                      { addtoken("COMP_ASSIGN_DIV", " "); }
#line 1635 "y.tab.c"
    break;

  case 49: /* statement: COMP_ASSIGN_SUBTRACT  */
#line 78 "parser.y"
                           { addtoken("COMP_ASSIGN_SUBTRACT", " "); }
#line 1641 "y.tab.c"
    break;

  case 50: /* statement: COMP_ASSIGN_MUL  */
#line 79 "parser.y"
                      { addtoken("COMP_ASSIGN_MUL", " "); }
#line 1647 "y.tab.c"
    break;

  case 51: /* statement: LESS_THAN  */
#line 80 "parser.y"
                { addtoken("LESS_THAN", " "); }
#line 1653 "y.tab.c"
    break;

  case 52: /* statement: LESS_THAN_EQ  */
#line 81 "parser.y"
                   { addtoken("LESS_THAN_EQ", " "); }
#line 1659 "y.tab.c"
    break;

  case 53: /* statement: GREAT_THAN  */
#line 82 "parser.y"
                 { addtoken("GREAT_THAN", " "); }
#line 1665 "y.tab.c"
    break;

  case 54: /* statement: GREAT_THAN_EQ  */
#line 83 "parser.y"
                    { addtoken("GREAT_THAN_EQ", " "); }
#line 1671 "y.tab.c"
    break;

  case 55: /* statement: VAR  */
#line 84 "parser.y"
          { addtoken("VAR", " "); }
#line 1677 "y.tab.c"
    break;

  case 56: /* statement: EOL  */
#line 85 "parser.y"
          { addtoken("EOL", " "); }
#line 1683 "y.tab.c"
    break;

  case 57: /* statement: RIGHT_PAREN  */
#line 86 "parser.y"
                  { addtoken("RIGHT_PAREN", " "); }
#line 1689 "y.tab.c"
    break;

  case 58: /* statement: LEFT_PAREN  */
#line 87 "parser.y"
                 { addtoken("LEFT_PAREN", " "); }
#line 1695 "y.tab.c"
    break;

  case 59: /* statement: LEFT_BRACE  */
#line 88 "parser.y"
                 { addtoken("LEFT_BRACE", " "); }
#line 1701 "y.tab.c"
    break;

  case 60: /* statement: RIGHT_BRACE  */
#line 89 "parser.y"
                  { addtoken("RIGHT_BRACE", " "); }
#line 1707 "y.tab.c"
    break;

  case 61: /* statement: LEFT_CURLY_BRACE  */
#line 90 "parser.y"
                       { addtoken("LEFT_CURLY_BRACE", " "); }
#line 1713 "y.tab.c"
    break;

  case 62: /* statement: RIGHT_CURLY_BRACE  */
#line 91 "parser.y"
                        { addtoken("RIGHT_CURLY_BRACE", " "); }
#line 1719 "y.tab.c"
    break;

  case 63: /* statement: MAIN  */
#line 92 "parser.y"
           { addtoken("MAIN", " "); }
#line 1725 "y.tab.c"
    break;

  case 64: /* statement: SINGLE_LINE_COMMENT  */
#line 93 "parser.y"
                          { addtoken("SINGLE_LINE_COMMENT", " "); }
#line 1731 "y.tab.c"
    break;

  case 65: /* statement: MULTI_LINE_COMMENT  */
#line 94 "parser.y"
                         { addtoken("MULTI_LINE_COMMENT", " "); }
#line 1737 "y.tab.c"
    break;

  case 66: /* statement: CONST  */
#line 95 "parser.y"
            { addtoken("CONST", " "); }
#line 1743 "y.tab.c"
    break;

  case 67: /* statement: MASS  */
#line 96 "parser.y"
           { addtoken("MASS", " "); }
#line 1749 "y.tab.c"
    break;


#line 1753 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 99 "parser.y"

struct token {
  char * token;
  struct token * next;
  char * token_value;
};

struct token *token_list;


int addtoken(char * token,char *token_value) {
  struct token *curr_token; 
  curr_token = (struct token *)malloc(sizeof(struct token));
  if (curr_token==NULL){
   perror("Failed to allocate memory for token.\n");
   return -1;
  }
  curr_token->token =(char * )malloc(strlen(token)+1);
  if (curr_token->token==NULL){
    perror("Failed to allocate memory for token name.\n");
    free(curr_token);
    return -1;
  } 
  curr_token->token_value = (char * )malloc(strlen(token_value)+1);
  if (curr_token->token_value==NULL){
    perror("Failed to allocate memroy for token_value");
    free(curr_token->token);
    free(curr_token);
    return -1;
  }
  strcpy(curr_token->token,token);
  strcpy(curr_token->token_value,token_value);
  if (token_list == NULL) {
    token_list = curr_token;
  } else {
    struct token *temp;
    temp = token_list;
    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = curr_token;
  }
  return 1;
}

void printall(){
  struct token *current;
  current = token_list;
  while (current!=NULL) {
    if (strcmp(current->token,"EOL")==0){
    printf("\n");
    }else if ((strcmp(current->token,"INTEGER")==0) ||  (strcmp(current->token,"DOUBLE")	==0) ||  (strcmp(current->token,"STRING_VALUE")==0) ||  (strcmp(current->token,"BOOL_VALUE")==0)) { 
    printf(" <%s , %s > ",current->token,current->token_value);
    }else {
    printf(" <%s> ",current->token);
    }
    current = current->next;
  }
}

void yyerror(char *s) {
printf("%s\n", s);
}

// Freeing dynamically allocated memory;
void free_token_list() {
    struct token *current = token_list;
    struct token *next;
    
    while (current != NULL) {
        next = current->next;
        free(current->token);  
        free(current);            
        current = next;
    }
    token_list = NULL;  
}

extern FILE *yyin;  

int main(int argc, char **argv) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    // Open the input file
    yyin = fopen(argv[1], "r");
    if (yyin == NULL) {
        perror("Error opening file");
        return 1;
    }

    do {
        yyparse();  
    } while (!feof(yyin));

printall();
    fclose(yyin);  
    free_token_list();
    return 0;
}









