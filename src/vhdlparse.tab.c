/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "vhdlparse.y"

////////////////////////////////////////////////////////////////////////////////
//                                            __ _      _     _               //
//                                           / _(_)    | |   | |              //
//                __ _ _   _  ___  ___ _ __ | |_ _  ___| | __| |              //
//               / _` | | | |/ _ \/ _ \ '_ \|  _| |/ _ \ |/ _` |              //
//              | (_| | |_| |  __/  __/ | | | | | |  __/ | (_| |              //
//               \__, |\__,_|\___|\___|_| |_|_| |_|\___|_|\__,_|              //
//                  | |                                                       //
//                  |_|                                                       //
//                                                                            //
//                                                                            //
//              VHDL to Verilog                                               //
//              HDL Translator                                                //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

/* Copyright (c) 202X-202X by the author(s)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 * =============================================================================
 * Author(s):
 *   Francisco Javier Reina Campo <frareicam@gmail.com>
 *   yunkun yang <yangyk16@whu.edu.cn>
 */

#include "vhd2sv.h"
void yyerror();
static  TCELLPNT  ParseLastModule;


#line 119 "vhdlparse.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_VHDLPARSE_TAB_H_INCLUDED
# define YY_YY_VHDLPARSE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_ALL = 258,
    T_ARCHITECTURE = 259,
    T_ARRAY = 260,
    T_BEGIN = 261,
    T_BLOCK = 262,
    T_CASE = 263,
    T_COMPONENT = 264,
    T_CONSTANT = 265,
    T_CONVINT = 266,
    T_CONVSTDVEC = 267,
    T_DOWNTO = 268,
    T_ELSE = 269,
    T_ELSIF = 270,
    T_END = 271,
    T_ENTITY = 272,
    T_EVENT = 273,
    T_CLK_POS = 274,
    T_CLK_NEG = 275,
    T_FOR = 276,
    T_FUNCTION = 277,
    T_GENERATE = 278,
    T_GENERIC = 279,
    T_IF = 280,
    T_IN = 281,
    T_INOUT = 282,
    T_INTEGER = 283,
    T_IS = 284,
    T_LIBRARY = 285,
    T_LOOP = 286,
    T_ATTR_LENGTH = 287,
    T_ATTR_RIGHT = 288,
    T_ATTR_LEFT = 289,
    T_MAP = 290,
    T_NULL = 291,
    T_OF = 292,
    T_OTHERS = 293,
    T_OUT = 294,
    T_PORT = 295,
    T_PROCEDURE = 296,
    T_PROCESS = 297,
    T_RANGE = 298,
    T_RETURN = 299,
    T_SELECT = 300,
    T_SIGNAL = 301,
    T_SIGNED = 302,
    T_STDLOGICVEC = 303,
    T_STDLOGIC = 304,
    T_THEN = 305,
    T_TO = 306,
    T_TOSTDLOGICVEC = 307,
    T_TOUNSIGNED = 308,
    T_TOSIGNED = 309,
    T_TOINTEGER = 310,
    T_TYPE = 311,
    T_UNSIGNED = 312,
    T_USE = 313,
    T_VARIABLE = 314,
    T_WHEN = 315,
    T_WITH = 316,
    T_LPAREN = 317,
    T_RPAREN = 318,
    T_SIGSUBST = 319,
    T_VARSUBST = 320,
    T_PARSUBST = 321,
    T_SEMICOLON = 322,
    T_COLON = 323,
    T_COMMA = 324,
    T_COND_OR = 325,
    T_DECDIGIT = 326,
    T_HEXDIGIT = 327,
    T_BINDIGIT = 328,
    T_ID = 329,
    N_DUMMY = 330,
    N_GENERICDEF = 331,
    N_MODULE = 332,
    N_PARAMDEF = 333,
    N_PORTDEF = 334,
    N_SIGDEF = 335,
    N_ENUMTYPE = 336,
    N_SYNCPROCESS = 337,
    N_ASYNCPROCESS = 338,
    N_CALLPROC = 339,
    N_ASSIGN = 340,
    N_SYNCIF = 341,
    N_ASYNCIF = 342,
    N_CASECOND = 343,
    N_CONDASSIGN = 344,
    N_WHENCOND = 345,
    N_SELASSIGN = 346,
    N_SELCOND = 347,
    N_PORTMAP = 348,
    N_PORTITEMNAME = 349,
    N_IDLIST = 350,
    N_GE = 351,
    N_OTHERS = 352,
    N_CALLFUNC = 353,
    N_PAREN = 354,
    N_STDVECTOR = 355,
    N_STDELEMENT = 356,
    N_LISTARRAY = 357,
    N_TYPEID = 358,
    N_FORLOOP = 359,
    N_FORGENERATE = 360,
    N_TYPEDEF_ARRAY = 361,
    T_AND = 362,
    T_OR = 363,
    T_NAND = 364,
    T_NOR = 365,
    T_XOR = 366,
    T_NOT = 367,
    T_LE = 368,
    T_GT = 369,
    T_LS = 370,
    T_NOTEQUAL = 371,
    T_EQUAL = 372,
    T_SLL = 373,
    T_SRL = 374,
    T_PLUS = 375,
    T_MINUS = 376,
    T_MULT = 377,
    T_DIV = 378,
    T_MOD = 379,
    T_CONCAT = 380,
    T_UPLUS = 381,
    T_UMINUS = 382
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_VHDLPARSE_TAB_H_INCLUDED  */



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
typedef yytype_int16 yy_state_t;

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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1196

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  128
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  249
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  709

#define YYUNDEFTOK  2
#define YYMAXUTOK   382


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   182,   182,   187,   198,   212,   217,   225,   230,   239,
     245,   253,   259,   265,   271,   277,   283,   289,   295,   301,
     310,   318,   322,   329,   334,   339,   344,   352,   360,   368,
     372,   379,   384,   389,   394,   402,   406,   413,   417,   421,
     428,   432,   437,   441,   446,   451,   456,   460,   467,   471,
     478,   484,   490,   496,   502,   508,   517,   521,   525,   529,
     533,   537,   541,   545,   549,   553,   557,   561,   568,   573,
     578,   583,   591,   601,   613,   628,   634,   643,   648,   656,
     664,   672,   680,   688,   696,   704,   712,   723,   731,   739,
     747,   755,   763,   774,   778,   782,   786,   790,   794,   798,
     802,   806,   810,   814,   818,   822,   826,   830,   834,   841,
     847,   853,   859,   868,   876,   884,   892,   900,   908,   916,
     924,   935,   939,   946,   951,   958,   966,   974,   978,   982,
     986,   990,   994,   998,  1002,  1006,  1010,  1017,  1026,  1034,
    1039,  1044,  1052,  1057,  1065,  1071,  1077,  1083,  1092,  1097,
    1102,  1107,  1115,  1120,  1125,  1130,  1135,  1140,  1148,  1153,
    1158,  1163,  1168,  1176,  1181,  1189,  1193,  1200,  1205,  1210,
    1215,  1223,  1228,  1235,  1240,  1247,  1252,  1259,  1264,  1272,
    1277,  1285,  1291,  1300,  1305,  1312,  1316,  1323,  1329,  1335,
    1341,  1350,  1355,  1362,  1366,  1370,  1374,  1378,  1382,  1389,
    1393,  1397,  1401,  1405,  1409,  1413,  1420,  1424,  1428,  1435,
    1439,  1443,  1447,  1456,  1460,  1467,  1471,  1475,  1479,  1486,
    1490,  1497,  1501,  1505,  1509,  1513,  1517,  1521,  1526,  1531,
    1536,  1541,  1546,  1551,  1556,  1561,  1566,  1571,  1577,  1583,
    1589,  1594,  1599,  1611,  1615,  1620,  1628,  1633,  1638,  1642
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_ALL", "T_ARCHITECTURE", "T_ARRAY",
  "T_BEGIN", "T_BLOCK", "T_CASE", "T_COMPONENT", "T_CONSTANT", "T_CONVINT",
  "T_CONVSTDVEC", "T_DOWNTO", "T_ELSE", "T_ELSIF", "T_END", "T_ENTITY",
  "T_EVENT", "T_CLK_POS", "T_CLK_NEG", "T_FOR", "T_FUNCTION", "T_GENERATE",
  "T_GENERIC", "T_IF", "T_IN", "T_INOUT", "T_INTEGER", "T_IS", "T_LIBRARY",
  "T_LOOP", "T_ATTR_LENGTH", "T_ATTR_RIGHT", "T_ATTR_LEFT", "T_MAP",
  "T_NULL", "T_OF", "T_OTHERS", "T_OUT", "T_PORT", "T_PROCEDURE",
  "T_PROCESS", "T_RANGE", "T_RETURN", "T_SELECT", "T_SIGNAL", "T_SIGNED",
  "T_STDLOGICVEC", "T_STDLOGIC", "T_THEN", "T_TO", "T_TOSTDLOGICVEC",
  "T_TOUNSIGNED", "T_TOSIGNED", "T_TOINTEGER", "T_TYPE", "T_UNSIGNED",
  "T_USE", "T_VARIABLE", "T_WHEN", "T_WITH", "T_LPAREN", "T_RPAREN",
  "T_SIGSUBST", "T_VARSUBST", "T_PARSUBST", "T_SEMICOLON", "T_COLON",
  "T_COMMA", "T_COND_OR", "T_DECDIGIT", "T_HEXDIGIT", "T_BINDIGIT", "T_ID",
  "N_DUMMY", "N_GENERICDEF", "N_MODULE", "N_PARAMDEF", "N_PORTDEF",
  "N_SIGDEF", "N_ENUMTYPE", "N_SYNCPROCESS", "N_ASYNCPROCESS",
  "N_CALLPROC", "N_ASSIGN", "N_SYNCIF", "N_ASYNCIF", "N_CASECOND",
  "N_CONDASSIGN", "N_WHENCOND", "N_SELASSIGN", "N_SELCOND", "N_PORTMAP",
  "N_PORTITEMNAME", "N_IDLIST", "N_GE", "N_OTHERS", "N_CALLFUNC",
  "N_PAREN", "N_STDVECTOR", "N_STDELEMENT", "N_LISTARRAY", "N_TYPEID",
  "N_FORLOOP", "N_FORGENERATE", "N_TYPEDEF_ARRAY", "T_AND", "T_OR",
  "T_NAND", "T_NOR", "T_XOR", "T_NOT", "T_LE", "T_GT", "T_LS",
  "T_NOTEQUAL", "T_EQUAL", "T_SLL", "T_SRL", "T_PLUS", "T_MINUS", "T_MULT",
  "T_DIV", "T_MOD", "T_CONCAT", "T_UPLUS", "T_UMINUS", "$accept", "top",
  "module", "header_part", "header_item", "use_item", "entity_part",
  "generic_part", "parameter_part", "parameter_item", "port_part",
  "io_part", "io_list", "io_item", "id_list", "sigdir", "sigtype",
  "sigwidth", "arch_part", "declaration_part", "component_part",
  "const_part", "signal_part", "typedef_part", "type_item",
  "function_part", "funcport_part", "func_result", "procedure_part",
  "body_part", "forgenerate_part", "process_part", "processvar_part",
  "processvar_item", "process_body", "forloop_part", "callproc_part",
  "subst_part", "syncif_part", "asyncif_part", "if_part", "ifelse_part",
  "edge_cond", "case_part", "case_body", "case_item", "case_cond",
  "when_part", "whenclause", "withsel_part", "withbody", "portmap_part",
  "portmap_body", "portmap_item", "block_part", "sensesig_list", "exp",
  "eqexp", "shiftexp", "addexp", "multexp", "notexp", "literal", "signame", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382
};
# endif

#define YYPACT_NINF (-535)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-250)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -4,   -43,    43,   164,    -4,    33,  -535,    21,   118,   152,
    -535,  -535,    33,   161,  -535,   274,  -535,   218,   -43,  -535,
     274,   241,   233,  -535,  -535,  -535,  -535,   222,   281,    10,
     269,   286,   303,   362,   294,   328,  -535,   348,   -43,    46,
     374,   403,    63,   428,   400,  -535,   408,   -43,   413,    46,
     433,    46,   472,  -535,   148,   461,  -535,   489,   907,  -535,
     498,  -535,   694,  -535,  -535,  -535,   357,   501,  -535,   518,
     545,  -535,   187,   562,   569,   570,   576,   -43,   579,   648,
     476,   476,   476,   476,   476,   476,  -535,   614,   596,   602,
    -535,   605,  -535,   298,  -535,  -535,  -535,   694,   604,  -535,
    -535,   476,   595,   613,   692,    87,   -40,   670,   187,   187,
     187,   187,   187,   187,   187,   187,   373,   667,   630,   637,
     286,   632,   672,   187,  -535,  -535,  -535,  -535,  -535,  -535,
     692,   692,   692,   692,   692,  -535,   412,  -535,   699,   689,
      87,   654,   655,  -535,  -535,  -535,   656,   657,   659,   661,
     665,   668,   669,   525,  -535,  -535,  -535,   671,   848,   666,
     677,   399,  -535,   757,   272,   407,  -535,  -535,   674,   675,
     663,   723,   329,    12,  -535,  -535,  -535,  -535,  -535,  -535,
    -535,  -535,   692,   692,   188,   694,   -43,   706,   724,   694,
     111,   742,  -535,   179,   696,   704,   709,   905,   692,  -535,
     187,   692,   710,   692,   692,   692,   692,   692,   692,   692,
     692,   692,   703,   525,   -37,   708,   716,   189,   723,  -535,
    -535,  -535,    87,   692,   692,   692,   692,   692,   692,   692,
     692,   692,   692,   692,   692,   692,   692,   692,   692,   775,
     775,   775,   692,  -535,    87,   718,   719,   693,   213,   717,
     476,   725,   722,   692,   127,   734,   726,  -535,   739,  -535,
     599,   910,   303,   798,   752,   755,   694,   235,   434,   762,
     -43,   759,   764,    62,   692,   692,  -535,  -535,  -535,  -535,
     915,   818,   810,   336,   245,   756,   828,   834,   849,   976,
     986,   860,   877,   465,   773,   723,   765,  -535,  -535,   776,
     777,   230,   786,   506,   352,   460,   405,  -535,   435,   435,
     435,   435,   435,   435,   482,   736,   207,   753,  -535,   397,
     737,  -535,  -535,  -535,   774,    87,  -535,   692,   873,   859,
      87,   439,   851,   853,   692,   822,  -535,   692,  -535,  -535,
     876,   884,   692,  -535,   865,   780,   -43,  -535,   892,   134,
     692,  -535,   692,   841,  -535,  -535,   832,  -535,   840,   682,
     682,  -535,   901,   187,   780,   903,  -535,   692,  -535,  -535,
    -535,   692,   692,  -535,  -535,   852,   855,   167,   886,   266,
     887,  -535,  -535,  -535,   692,  -535,  -535,   682,   187,   692,
     889,    87,   885,   893,  -535,   817,  -535,   204,   945,   259,
     922,   339,   201,   890,   471,   122,   946,   780,   780,   780,
    -535,  -535,   780,   780,   574,   846,   780,  -535,   933,   902,
    -535,   899,  -535,   260,   957,   958,   780,   883,   888,   898,
    -535,  -535,   185,   214,  -535,  -535,   524,   959,   953,   416,
     914,    87,    87,  -535,   692,   354,  -535,   912,  -535,   195,
     974,    87,   952,   975,   895,   921,   941,   440,   954,   -35,
      87,    81,  -535,  -535,  -535,  -535,  -535,   692,   694,   995,
    -535,   998,  -535,  -535,   961,  1013,   996,  1021,  -535,  -535,
    -535,   556,  1032,   187,   780,  1040,   692,   984,   985,  -535,
     823,  -535,   982,  -535,   692,  1041,  1012,   195,   196,   999,
     692,   988,   989,   990,   440,   997,   338,   392,   391,   608,
     994,   992,  1005,   943,  1006,   203,   694,  -535,   368,   369,
    1023,  1014,  1010,   991,   467,  1064,  1066,   780,  -535,  1048,
    1022,  -535,  -535,   960,    13,  1074,  1075,  1012,  1063,   640,
    1095,   999,  1081,  1000,  1050,  1051,  -535,  1090,  1100,   402,
     471,  1093,   591,  -535,  -535,   692,  1052,  -535,  -535,  -535,
    1046,  1054,  -535,  -535,  1055,  -535,  1056,   488,  -535,   692,
     692,  -535,  1057,  1102,  1084,  1111,  1094,  -535,  -535,  1058,
    1061,    27,    45,  1114,   999,  1065,  1067,  1126,  -535,   780,
    1062,  -535,  -535,  1069,  1112,  1113,  1123,  1091,   251,  1073,
     471,  1117,  -535,   967,  -535,  1076,  -535,  -535,  -535,  -535,
    1077,  -535,  -535,  -535,   507,   519,  1103,  1085,  1079,  -535,
    1078,  1082,  1080,  1083,    47,  1132,   780,   780,  1086,  1135,
    -535,  -535,  1088,  1089,  1133,   794,   837,  -535,  1107,  1092,
    -535,  -535,  -535,  -535,  1096,  -535,  1097,   528,    87,  -535,
    1098,  -535,  1099,  -535,  1087,  1101,  1152,  -535,  -535,  -535,
    1131,  -535,  -535,  1104,  1142,  1153,   692,  1145,   633,  -535,
     795,  -535,  -535,  -535,  -535,  1105,  1110,  -535,  -535,  1108,
    -535,  1109,  1115,  -535,  1116,  1149,   514,  1118,  1154,  -535,
    1155,  1161,  -535,  1119,  -535,  -535,  -535,  -535,  1120,  -535,
    1121,  1122,  1156,  -535,  -535,  -535,  -535,  1124,  -535
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     0,     6,     0,    36,     0,
      10,     1,     0,     0,     5,     0,     8,     0,     0,     7,
       0,     0,     0,     4,     9,    35,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    19,     0,     0,     0,
       0,     0,     0,     0,     0,    18,     0,    22,     0,     0,
       0,    30,     0,    27,     0,     0,    16,     0,     0,    17,
       0,    21,     0,    31,    28,    29,     0,     0,    13,     0,
       0,    15,     0,     0,     0,     0,     0,     0,     0,     0,
      57,    59,    61,    63,    65,    67,    20,    46,     0,    42,
      40,     0,    47,    26,    37,    39,    38,     0,     0,    12,
      14,     0,     0,     0,     0,     0,   248,     0,   106,    94,
     108,    96,    98,   100,   102,   104,     0,     0,     0,     0,
       0,     0,     0,     0,    56,    58,    60,    62,    64,    66,
       0,     0,     0,     0,     0,    25,    33,    11,     0,     0,
       0,     0,     0,   224,   226,   225,     0,     0,     0,     0,
       0,     0,     0,     0,   223,   222,   221,   243,     0,     0,
       0,     0,   198,   205,   208,   214,   218,   220,   248,     0,
     192,     0,     0,     0,   105,    93,   107,    95,    97,    99,
     101,   103,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    45,     0,     0,     0,     0,    24,     0,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   243,     0,     0,     0,     0,   219,
     213,   212,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   249,     0,     0,     0,   184,     0,   186,
       0,     0,     0,     0,   248,     0,     0,    55,     0,   174,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    44,    41,    43,    23,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   244,   245,     0,
       0,     0,     0,   193,   194,   196,   197,   195,   201,   202,
     203,   204,   200,   199,   206,   207,   209,   210,   211,   215,
     216,   217,   191,   246,     0,     0,   247,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    54,     0,   140,   141,
       0,     0,     0,    87,     0,     0,     0,   124,     0,   122,
       0,    73,     0,     0,    76,    75,     0,    52,     0,    49,
      48,    34,     0,     0,     0,     0,   231,     0,   232,   234,
     235,     0,     0,   236,   233,     0,     0,   244,     0,     0,
       0,   241,   230,   242,     0,   138,   183,   185,     0,     0,
       0,     0,     0,     0,   173,     0,    53,     0,     0,     0,
       0,     0,     0,     0,     0,   248,     0,   132,   134,   126,
     135,   136,   128,   130,     0,     0,     0,   121,     0,     0,
      77,     0,    51,     0,     0,     0,     0,     0,     0,     0,
     228,   229,   241,   242,   227,   178,     0,     0,     0,     0,
       0,     0,     0,   139,     0,     0,    70,     0,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   131,   133,   125,   127,   129,     0,     0,     0,
      74,     0,    50,   190,     0,     0,     0,     0,   239,   237,
     238,     0,     0,     0,     0,     0,     0,     0,     0,   175,
       0,    68,     0,    71,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   189,     0,     0,
       0,     0,     0,   172,     0,     0,     0,     0,   177,     0,
       0,   176,    69,     0,     0,     0,     0,     0,     0,     0,
       0,   166,     0,     0,     0,     0,   158,     0,     0,     0,
       0,     0,     0,   150,   160,     0,     0,    92,   140,   123,
       0,     0,    78,   112,     0,   120,     0,     0,   180,     0,
       0,   188,     0,     0,     0,     0,     0,   182,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   165,     0,
       0,   161,   162,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   148,     0,    91,     0,    90,   111,   119,   118,
       0,   179,   171,   187,     0,     0,     0,     0,     0,    86,
       0,     0,     0,     0,     0,     0,   170,   169,     0,     0,
     159,   143,     0,     0,     0,     0,     0,   151,     0,     0,
     139,    89,   117,   110,     0,   116,     0,     0,     0,    85,
       0,    82,     0,    84,     0,     0,     0,   168,   167,   163,
       0,   142,   157,     0,     0,     0,     0,     0,     0,   154,
       0,   149,   109,   115,   114,     0,     0,    81,    83,     0,
      80,     0,     0,   156,     0,     0,     0,     0,     0,   152,
       0,     0,   113,     0,    79,   164,   137,   147,     0,   155,
       0,     0,     0,   181,   145,   153,   146,     0,   144
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -535,  -535,  -535,  1174,   297,  -535,  1172,  1008,   -34,  -535,
     -30,  1070,  1143,  1144,    94,  -535,   -96,   -86,  1175,   116,
    -535,  -253,  -535,  -535,  -535,  -535,  -535,  -473,  -535,  -103,
    -535,  -535,  -235,  -535,  -202,  -535,   -53,    68,  -535,  -535,
    -535,  -534,  -387,  -535,  -353,  -535,  -314,  -535,  -313,  -535,
    -434,  -535,  -168,  -535,  -535,   -75,  -100,  -535,   875,   447,
     450,  -535,  1038,   -72
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,     7,    15,    32,    46,    47,
      33,    40,    50,    51,    48,    97,    93,   215,    23,    79,
      80,    81,    82,    83,   272,    84,   187,   495,    85,   107,
     108,   109,   348,   349,   406,   407,   408,   409,   410,   411,
     412,   553,   505,   413,   540,   541,   522,   112,   259,   113,
     435,   114,   300,   247,   115,   169,   193,   162,   163,   164,
     165,   166,   167,   414
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     116,   136,    41,   246,   161,   174,   175,   176,   177,   178,
     179,   180,   181,    61,   347,   508,   256,   458,   602,   110,
     191,   394,   171,   535,   536,   295,     1,    35,   172,  -248,
     347,     8,  -248,   170,   197,   579,   116,   116,   116,   116,
     116,   116,   116,   116,   192,   194,   195,   196,   365,   620,
      13,   116,   528,   217,     2,   110,   110,   110,   110,   110,
     110,   110,   110,     1,   583,   202,   356,   622,   170,   654,
     110,   248,   509,   224,   225,   226,   227,    36,   216,   257,
      55,   170,   260,   261,    37,   245,   258,   580,    16,   264,
      17,     2,    49,   268,   271,     9,   347,   281,   280,   249,
     255,   621,   669,   284,   285,   286,   287,   288,   289,   290,
     291,   292,    25,   217,   417,   282,   269,    10,   301,   623,
       8,   655,   511,   303,   304,   305,   306,   307,   116,   357,
      56,   489,   299,    52,   689,   611,   358,    57,   294,    87,
     111,   170,   248,    52,    74,    52,   249,   110,   347,   105,
     302,   332,   265,   331,   263,   512,   245,   386,    88,    89,
      90,   168,   425,   597,    11,    67,   450,   333,    91,   322,
     344,   121,   170,   270,   359,   360,   111,   111,   111,   111,
     111,   111,   111,   111,   171,    92,   347,    18,   588,   242,
     460,   111,   274,   346,   101,   379,   124,   125,   126,   127,
     128,   129,   274,   402,   485,   462,   463,   464,   102,   378,
     465,   466,    30,   638,   469,    68,   403,   138,   444,    19,
     404,   376,    69,   249,   477,   586,   274,   387,    31,   103,
     275,   625,   340,  -249,   395,    21,  -249,   397,    29,   494,
     275,   345,   400,   274,   560,    74,    30,   496,   104,   105,
     418,  -246,   298,   249,  -246,   390,   612,   105,   170,   538,
     424,   106,    31,   451,   275,   244,   419,   427,   111,   405,
      27,   428,   429,   487,   488,   168,   326,   561,    22,   274,
    -247,   275,   526,  -247,   436,   437,   223,   224,   225,   226,
     227,   116,    24,   383,   346,   537,   223,   224,   225,   226,
     227,   636,    14,   438,   459,   548,   552,    28,   366,    14,
     110,   223,   224,   225,   226,   227,   116,   275,    34,   440,
     223,   224,   225,   226,   227,   575,   446,   473,   237,   433,
     452,    38,   238,   447,   474,   110,   250,   223,   224,   225,
     226,   227,   364,    31,   490,   449,    74,   596,    39,    74,
     251,   274,   223,   224,   225,   226,   227,   506,   509,   224,
     225,   226,   227,   134,   353,   135,   328,   513,    43,   249,
     249,   252,   514,   223,   224,   225,   226,   227,    42,   498,
     525,   523,   216,    94,    95,   170,   436,   629,   510,   275,
     253,   105,   236,   237,   533,   346,    96,   238,   346,   402,
     402,   298,    44,   254,   506,   549,   550,   551,   547,   303,
     402,   116,   403,   403,   542,    45,   404,   404,   595,    54,
     562,   491,   484,   403,   657,   658,    74,   404,   492,   294,
     110,   111,   170,   665,   668,   563,   565,   182,   183,   523,
     415,    53,   564,   566,   222,   509,   224,   225,   226,   227,
     598,   141,   142,   105,   105,   603,   111,    58,   454,   455,
     456,   225,   226,   227,   105,   405,   405,    59,   691,   436,
     523,    60,   143,   144,   145,   346,   405,   198,   212,   199,
     676,    62,   141,   142,   391,    73,    74,   146,   147,   454,
     455,   456,   148,   149,   150,   151,    64,   152,    75,   350,
     598,   351,   504,   143,   144,   145,   223,   224,   225,   226,
     227,   154,   155,   156,   214,  -250,   227,    76,   146,   147,
     240,   241,    77,   148,   149,   150,   151,   105,   152,   239,
     240,   241,    78,   457,   571,    70,   141,   142,   375,   168,
      66,   572,   154,   155,   156,   157,   223,   224,   225,   226,
     227,   111,   158,   234,   235,   609,    71,   143,   144,   145,
     159,   160,   610,   212,   636,    86,   686,   141,   142,  -250,
     226,   227,   146,   147,   643,    98,   249,   148,   149,   150,
     151,   644,   152,   158,   481,    99,   645,   213,   143,   144,
     145,   159,   160,   646,   521,   674,   154,   155,   156,   214,
    -250,   235,   675,   146,   147,   549,   600,   601,   148,   149,
     150,   151,   100,   152,   224,   225,   226,   227,   153,   141,
     142,   223,   224,   225,   226,   227,   554,   154,   155,   156,
     157,   223,   224,   225,   226,   227,   117,   158,   467,   183,
     143,   144,   145,   118,   119,   159,   160,   549,   666,   688,
     120,   141,   142,   122,   123,   146,   147,   130,   131,   337,
     148,   149,   150,   151,   132,   152,   338,   133,   158,   139,
     153,   137,   143,   144,   145,   140,   159,   160,   585,   154,
     155,   156,   157,   316,   317,   318,   173,   146,   147,   319,
     320,   321,   148,   149,   150,   151,   184,   152,   185,   186,
     189,   190,   153,   141,   142,   200,   223,   224,   225,   226,
     227,   154,   155,   156,   157,   201,   203,   204,   205,   206,
     158,   207,    87,   208,   143,   144,   145,   209,   159,   160,
     210,   211,   244,   218,   141,   142,   242,   220,   243,   146,
     147,    88,    89,    90,   148,   149,   150,   151,   221,   152,
     266,    91,   158,   267,   153,   143,   144,   145,   273,   276,
     159,   160,   325,   154,   155,   156,   157,   277,    92,   293,
     146,   147,   278,   283,   296,   148,   149,   150,   151,   297,
     152,   323,   324,   327,   330,   213,   141,   142,   402,   223,
     224,   225,   226,   227,   154,   155,   156,   214,   334,   329,
     335,   403,   402,   402,   158,   404,   336,   143,   144,   145,
     664,   690,   159,   160,   341,   403,   403,   342,   343,   404,
     404,   228,   146,   147,   352,   367,   354,   148,   149,   150,
     151,   355,   152,   363,   362,   158,   377,   153,   380,   381,
     382,   385,   105,   159,   160,   402,   154,   155,   156,   157,
     384,   549,   666,   667,   405,  -250,   105,   105,   403,   141,
     142,   241,   404,   223,   224,   225,   226,   227,   405,   405,
     229,   230,   231,   232,   233,   234,   235,   337,   238,   388,
     143,   144,   145,   337,   443,   389,   392,   158,   393,   396,
     531,   368,   398,   399,   401,   146,   147,   369,   416,   105,
     148,   149,   150,   151,   420,   152,   421,   422,   423,   426,
     153,   405,   370,    72,   468,   430,    73,    74,   431,   154,
     155,   156,   157,   373,   223,   224,   225,   226,   227,    75,
     223,   224,   225,   226,   227,   223,   224,   225,   226,   227,
     374,   223,   224,   225,   226,   227,   478,   441,    76,   432,
     434,   479,   439,    77,   445,   442,   223,   224,   225,   226,
     227,   480,   461,    78,   453,   471,   472,   223,   224,   225,
     226,   227,   279,   475,   476,   482,   483,   339,   486,   493,
     497,   499,   361,   502,   223,   224,   225,   226,   227,   448,
     223,   224,   225,   226,   227,   223,   224,   225,   226,   227,
     470,   500,   501,   503,   507,   223,   224,   225,   226,   227,
     558,   515,   223,   224,   225,   226,   227,   223,   224,   225,
     226,   227,   223,   224,   225,   226,   227,   578,   517,   223,
     224,   225,   226,   227,   640,   516,   518,   520,   519,   524,
     223,   224,   225,   226,   227,   371,   527,   529,   530,   532,
     223,   224,   225,   226,   227,   372,   494,   534,   555,   539,
     546,   570,   543,   544,   545,   567,   556,   223,   224,   225,
     226,   227,   557,   559,   223,   224,   225,   226,   227,   569,
     573,   568,   574,   223,   224,   225,   226,   227,   576,   577,
     581,   582,   584,   223,   224,   225,   226,   227,   223,   224,
     225,   226,   227,   308,   309,   310,   311,   312,   313,   314,
     315,   587,   589,   591,   592,   593,   594,   590,   599,   604,
     605,   606,   607,   608,   613,   614,   615,   616,   619,   617,
     624,   626,   618,   627,   628,   630,   631,   632,   633,   634,
     637,   635,   639,   641,   642,   647,   649,   648,   656,   651,
     653,   660,   650,   659,   652,   661,   662,   670,   663,   671,
     681,   679,   682,   672,   673,   677,   678,   684,   680,   685,
     687,   683,   692,   693,   698,   694,   695,   702,    12,   700,
     701,   707,   696,   697,    20,   699,   703,   704,   705,   706,
     188,   708,   262,    63,    65,    26,   219
};

static const yytype_int16 yycheck[] =
{
      72,    97,    32,   171,   104,   108,   109,   110,   111,   112,
     113,   114,   115,    47,   267,    50,     4,   404,   552,    72,
     123,   334,    62,   496,   497,    62,    30,    17,    68,    66,
     283,    74,    69,   105,   134,    22,   108,   109,   110,   111,
     112,   113,   114,   115,   130,   131,   132,   133,   283,    22,
      17,   123,   486,   153,    58,   108,   109,   110,   111,   112,
     113,   114,   115,    30,   537,   140,     4,    22,   140,    22,
     123,   171,   107,   108,   109,   110,   111,    67,   153,    67,
      17,   153,   182,   183,    74,   171,    74,    74,    67,   185,
      69,    58,    46,   189,   190,     1,   349,   200,   198,   171,
     172,    74,   636,   203,   204,   205,   206,   207,   208,   209,
     210,   211,    18,   213,   349,   201,     5,    74,   218,    74,
      74,    74,    41,   223,   224,   225,   226,   227,   200,    67,
      67,   444,   218,    39,   668,   569,    74,    74,   213,    28,
      72,   213,   242,    49,    10,    51,   218,   200,   401,    62,
     222,    24,   186,   253,   184,    74,   242,   325,    47,    48,
      49,    74,   364,   550,     0,    17,   401,    40,    57,   244,
     266,    77,   244,    62,   274,   275,   108,   109,   110,   111,
     112,   113,   114,   115,    62,    74,   439,    69,   541,    62,
      68,   123,    13,    59,     7,   295,    80,    81,    82,    83,
      84,    85,    13,     8,   439,   407,   408,   409,    21,   295,
     412,   413,    24,   600,   416,    67,    21,   101,    14,    67,
      25,   293,    74,   295,   426,   539,    13,   327,    40,    42,
      51,   584,   262,    66,   334,    74,    69,   337,    16,    44,
      51,     6,   342,    13,    41,    10,    24,   449,    61,    62,
     350,    66,    63,   325,    69,   330,   570,    62,   330,    63,
     363,    74,    40,    62,    51,    69,   352,   367,   200,    74,
      29,   371,   372,   441,   442,    74,    63,    74,     4,    13,
      66,    51,   484,    69,   384,   388,   107,   108,   109,   110,
     111,   363,    74,    63,    59,   497,   107,   108,   109,   110,
     111,    50,     5,   389,   404,   507,   508,    74,    63,    12,
     363,   107,   108,   109,   110,   111,   388,    51,    37,   391,
     107,   108,   109,   110,   111,   527,    67,    67,   121,    63,
     402,    62,   125,    74,    74,   388,     7,   107,   108,   109,
     110,   111,     6,    40,   444,     6,    10,   549,    62,    10,
      21,    13,   107,   108,   109,   110,   111,   457,   107,   108,
     109,   110,   111,    65,   270,    67,   250,   467,    74,   441,
     442,    42,   468,   107,   108,   109,   110,   111,    16,   451,
     483,   481,   457,    26,    27,   457,   486,   589,   460,    51,
      61,    62,   120,   121,   494,    59,    39,   125,    59,     8,
       8,    63,    74,    74,   504,    14,    15,    16,    16,   509,
       8,   483,    21,    21,   500,    67,    25,    25,    16,    16,
     516,    67,     6,    21,   626,   627,    10,    25,    74,   504,
     483,   363,   504,   635,   636,    67,    67,    64,    65,   539,
     346,    67,    74,    74,    45,   107,   108,   109,   110,   111,
     550,    11,    12,    62,    62,   555,   388,    29,    18,    19,
      20,   109,   110,   111,    62,    74,    74,    67,   670,   569,
     570,    63,    32,    33,    34,    59,    74,    65,    38,    67,
     648,    68,    11,    12,    45,     9,    10,    47,    48,    18,
      19,    20,    52,    53,    54,    55,    63,    57,    22,    65,
     600,    67,    62,    32,    33,    34,   107,   108,   109,   110,
     111,    71,    72,    73,    74,   110,   111,    41,    47,    48,
     123,   124,    46,    52,    53,    54,    55,    62,    57,   122,
     123,   124,    56,    62,    67,    74,    11,    12,    73,    74,
      68,    74,    71,    72,    73,    74,   107,   108,   109,   110,
     111,   483,   112,   118,   119,    67,    67,    32,    33,    34,
     120,   121,    74,    38,    50,    67,   666,    11,    12,   109,
     110,   111,    47,    48,    67,    74,   648,    52,    53,    54,
      55,    74,    57,   112,    60,    67,    67,    62,    32,    33,
      34,   120,   121,    74,    38,    67,    71,    72,    73,    74,
     118,   119,    74,    47,    48,    14,    15,    16,    52,    53,
      54,    55,    67,    57,   108,   109,   110,   111,    62,    11,
      12,   107,   108,   109,   110,   111,    18,    71,    72,    73,
      74,   107,   108,   109,   110,   111,    74,   112,    64,    65,
      32,    33,    34,    74,    74,   120,   121,    14,    15,    16,
      74,    11,    12,    74,     6,    47,    48,    43,    62,    60,
      52,    53,    54,    55,    62,    57,    67,    62,   112,    74,
      62,    67,    32,    33,    34,    62,   120,   121,    38,    71,
      72,    73,    74,   236,   237,   238,    16,    47,    48,   239,
     240,   241,    52,    53,    54,    55,    29,    57,    68,    62,
      68,    29,    62,    11,    12,     6,   107,   108,   109,   110,
     111,    71,    72,    73,    74,    26,    62,    62,    62,    62,
     112,    62,    28,    62,    32,    33,    34,    62,   120,   121,
      62,    62,    69,    62,    11,    12,    62,    71,    63,    47,
      48,    47,    48,    49,    52,    53,    54,    55,    71,    57,
      44,    57,   112,    29,    62,    32,    33,    34,    16,    63,
     120,   121,    69,    71,    72,    73,    74,    63,    74,    66,
      47,    48,    63,    63,    66,    52,    53,    54,    55,    63,
      57,    63,    63,    66,    62,    62,    11,    12,     8,   107,
     108,   109,   110,   111,    71,    72,    73,    74,    64,    74,
      74,    21,     8,     8,   112,    25,    67,    32,    33,    34,
      16,    16,   120,   121,    16,    21,    21,    65,    63,    25,
      25,    64,    47,    48,    62,    69,    67,    52,    53,    54,
      55,    67,    57,    23,    16,   112,    63,    62,    73,    63,
      63,    67,    62,   120,   121,     8,    71,    72,    73,    74,
      64,    14,    15,    16,    74,   119,    62,    62,    21,    11,
      12,   124,    25,   107,   108,   109,   110,   111,    74,    74,
     113,   114,   115,   116,   117,   118,   119,    60,   125,     6,
      32,    33,    34,    60,    67,    26,    35,   112,    35,    67,
      67,    63,    16,     9,    29,    47,    48,    63,     6,    62,
      52,    53,    54,    55,    63,    57,    74,    67,     7,     6,
      62,    74,    63,     6,    68,    63,     9,    10,    63,    71,
      72,    73,    74,    63,   107,   108,   109,   110,   111,    22,
     107,   108,   109,   110,   111,   107,   108,   109,   110,   111,
      63,   107,   108,   109,   110,   111,    63,    62,    41,    63,
      63,    63,    63,    46,     9,    62,   107,   108,   109,   110,
     111,    63,    16,    56,    74,    63,    67,   107,   108,   109,
     110,   111,    67,    16,    16,    16,    23,    67,    64,    67,
       6,    29,    67,    62,   107,   108,   109,   110,   111,    67,
     107,   108,   109,   110,   111,   107,   108,   109,   110,   111,
      67,    26,   107,    62,    50,   107,   108,   109,   110,   111,
      67,    16,   107,   108,   109,   110,   111,   107,   108,   109,
     110,   111,   107,   108,   109,   110,   111,    67,    67,   107,
     108,   109,   110,   111,    67,    37,    23,    16,    42,     7,
     107,   108,   109,   110,   111,    69,     6,    63,    63,    67,
     107,   108,   109,   110,   111,    69,    44,    16,    64,    60,
      63,    70,    74,    74,    74,    42,    74,   107,   108,   109,
     110,   111,    67,    67,   107,   108,   109,   110,   111,    69,
      16,    67,    16,   107,   108,   109,   110,   111,    40,    67,
      16,    16,    29,   107,   108,   109,   110,   111,   107,   108,
     109,   110,   111,   228,   229,   230,   231,   232,   233,   234,
     235,    16,    31,    63,    63,    25,    16,   117,    25,    67,
      74,    67,    67,    67,    67,    23,    42,    16,    67,    35,
      16,    66,    74,    66,     8,    73,    67,    25,    25,    16,
      67,    50,    25,    67,    67,    42,    67,    62,    16,    67,
      67,    16,    74,    67,    74,    67,    67,    50,    25,    67,
       8,    74,    31,    67,    67,    67,    67,    25,    67,    16,
      25,    67,    67,    63,    25,    67,    67,    16,     4,    25,
      25,    25,    67,    67,    12,    67,    67,    67,    67,    67,
     120,    67,   184,    49,    51,    20,   158
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    30,    58,   129,   130,   131,   132,   133,    74,   142,
      74,     0,   131,    17,   132,   134,    67,    69,    69,    67,
     134,    74,     4,   146,    74,   142,   146,    29,    74,    16,
      24,    40,   135,   138,    37,    17,    67,    74,    62,    62,
     139,   138,    16,    74,    74,    67,   136,   137,   142,    46,
     140,   141,   142,    67,    16,    17,    67,    74,    29,    67,
      63,   136,    68,   141,    63,   140,    68,    17,    67,    74,
      74,    67,     6,     9,    10,    22,    41,    46,    56,   147,
     148,   149,   150,   151,   153,   156,    67,    28,    47,    48,
      49,    57,    74,   144,    26,    27,    39,   143,    74,    67,
      67,     7,    21,    42,    61,    62,    74,   157,   158,   159,
     164,   165,   175,   177,   179,   182,   191,    74,    74,    74,
      74,   142,    74,     6,   147,   147,   147,   147,   147,   147,
      43,    62,    62,    62,    65,    67,   144,    67,   147,    74,
      62,    11,    12,    32,    33,    34,    47,    48,    52,    53,
      54,    55,    57,    62,    71,    72,    73,    74,   112,   120,
     121,   184,   185,   186,   187,   188,   189,   190,    74,   183,
     191,    62,    68,    16,   157,   157,   157,   157,   157,   157,
     157,   157,    64,    65,    29,    68,    62,   154,   139,    68,
      29,   157,   145,   184,   145,   145,   145,   184,    65,    67,
       6,    26,   183,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    38,    62,    74,   145,   183,   184,    62,   190,
      71,    71,    45,   107,   108,   109,   110,   111,    64,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   125,   122,
     123,   124,    62,    63,    69,   145,   180,   181,   184,   191,
       7,    21,    42,    61,    74,   191,     4,    67,    74,   176,
     184,   184,   135,   138,   144,   136,    44,    29,   144,     5,
      62,   144,   152,    16,    13,    51,    63,    63,    63,    67,
     184,   157,   145,    63,   184,   184,   184,   184,   184,   184,
     184,   184,   184,    66,   183,    62,    66,    63,    63,   145,
     180,   184,   191,   184,   184,   184,   184,   184,   186,   186,
     186,   186,   186,   186,   186,   186,   187,   187,   187,   188,
     188,   188,   183,    63,    63,    69,    63,    66,   147,    74,
      62,   184,    24,    40,    64,    74,    67,    60,    67,    67,
     138,    16,    65,    63,   144,     6,    59,   149,   160,   161,
      65,    67,    62,   142,    67,    67,     4,    67,    74,   184,
     184,    67,    16,    23,     6,   160,    63,    69,    63,    63,
      63,    69,    69,    63,    63,    73,   191,    63,   145,   184,
      73,    63,    63,    63,    64,    67,   180,   184,     6,    26,
     183,    45,    35,    35,   176,   184,    67,   184,    16,     9,
     184,    29,     8,    21,    25,    74,   162,   163,   164,   165,
     166,   167,   168,   171,   191,   142,     6,   160,   184,   145,
      63,    74,    67,     7,   157,   162,     6,   184,   184,   184,
      63,    63,    63,    63,    63,   178,   184,   157,   145,    63,
     191,    62,    62,    67,    14,     9,    67,    74,    67,     6,
     160,    62,   191,    74,    18,    19,    20,    62,   170,   184,
      68,    16,   162,   162,   162,   162,   162,    64,    68,   162,
      67,    63,    67,    67,    74,    16,    16,   162,    63,    63,
      63,    60,    16,    23,     6,   160,    64,   180,   180,   176,
     184,    67,    74,    67,    44,   155,   162,     6,   191,    29,
      26,   107,    62,    62,    62,   170,   184,    50,    50,   107,
     191,    41,    74,   184,   144,    16,    37,    67,    23,    42,
      16,    38,   174,   184,     7,   157,   162,     6,   178,    63,
      63,    67,    67,   184,    16,   155,   155,   162,    63,    60,
     172,   173,   145,    74,    74,    74,    63,    16,   162,    14,
      15,    16,   162,   169,    18,    64,    74,    67,    67,    67,
      41,    74,   144,    67,    74,    67,    74,    42,    67,    69,
      70,    67,    74,    16,    16,   162,    40,    67,    67,    22,
      74,    16,    16,   155,    29,    38,   174,    16,   172,    31,
     117,    63,    63,    25,    16,    16,   162,   170,   184,    25,
      15,    16,   169,   184,    67,    74,    67,    67,    67,    67,
      74,   178,   174,    67,    23,    42,    16,    35,    74,    67,
      22,    74,    22,    74,    16,   172,    66,    66,     8,   162,
      73,    67,    25,    25,    16,    50,    50,    67,   170,    25,
      67,    67,    67,    67,    74,    67,    74,    42,    62,    67,
      74,    67,    74,    67,    22,    74,    16,   162,   162,    67,
      16,    67,    67,    25,    16,   162,    15,    16,   162,   169,
      50,    67,    67,    67,    67,    74,   180,    67,    67,    74,
      67,     8,    31,    67,    25,    16,   184,    25,    16,   169,
      16,   162,    67,    63,    67,    67,    67,    67,    25,    67,
      25,    25,    16,    67,    67,    67,    67,    25,    67
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   128,   129,   130,   130,   131,   131,   132,   132,   133,
     133,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     135,   136,   136,   137,   137,   137,   137,   138,   139,   140,
     140,   141,   141,   141,   141,   142,   142,   143,   143,   143,
     144,   144,   144,   144,   144,   144,   144,   144,   145,   145,
     146,   146,   146,   146,   146,   146,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   148,   148,
     148,   148,   149,   150,   150,   151,   151,   152,   152,   153,
     153,   153,   153,   153,   153,   153,   153,   154,   155,   156,
     156,   156,   156,   157,   157,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   158,
     158,   158,   158,   159,   159,   159,   159,   159,   159,   159,
     159,   160,   160,   161,   161,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   163,   164,   165,
     165,   165,   166,   166,   167,   167,   167,   167,   168,   168,
     168,   168,   169,   169,   169,   169,   169,   169,   170,   170,
     170,   170,   170,   171,   171,   172,   172,   173,   173,   173,
     173,   174,   174,   175,   175,   176,   176,   177,   177,   178,
     178,   179,   179,   180,   180,   181,   181,   182,   182,   182,
     182,   183,   183,   184,   184,   184,   184,   184,   184,   185,
     185,   185,   185,   185,   185,   185,   186,   186,   186,   187,
     187,   187,   187,   187,   187,   188,   188,   188,   188,   189,
     189,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   191,   191,   191,   191
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     4,     3,     2,     1,     3,     2,     3,
       2,     9,     8,     7,     8,     7,     6,     7,     6,     5,
       5,     2,     1,     6,     5,     4,     3,     3,     3,     2,
       1,     2,     5,     4,     7,     3,     1,     1,     1,     1,
       1,     4,     1,     4,     4,     3,     1,     1,     3,     3,
      12,    11,    10,    11,    10,     9,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     8,     9,
       7,     8,     7,     5,     7,     5,     5,     3,     6,    14,
      13,    13,    12,    13,    12,    12,    11,     3,     3,    11,
      10,    10,     9,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,    12,
      11,    10,     9,    13,    12,    12,    11,    11,    10,    10,
       9,     2,     1,     5,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     1,     1,     9,     5,     6,
       4,     4,     7,     6,    11,    10,    10,     9,     5,     7,
       4,     6,     5,     7,     4,     6,     5,     4,     3,     5,
       3,     4,     4,     7,     9,     2,     1,     4,     4,     3,
       3,     3,     1,     5,     3,     5,     2,     8,     6,     5,
       4,    14,     9,     3,     1,     3,     1,    10,     9,     8,
       7,     3,     1,     3,     3,     3,     3,     3,     1,     3,
       3,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     2,     2,     1,     3,     3,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     5,     5,     5,
       4,     4,     4,     4,     4,     4,     4,     6,     6,     6,
       4,     4,     4,     1,     3,     3,     4,     4,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
  case 2:
#line 183 "vhdlparse.y"
    { ParseTreeTop = yyvsp[0]; }
#line 2047 "vhdlparse.tab.c"
    break;

  case 3:
#line 188 "vhdlparse.y"
    {  /* one design unit: N_MODULE info0=header, info1=entity, info2=arch */
      TCELLPNT newmod = MallocTcell(N_MODULE,NULLSTR,0);
      SetNext(ParseLastModule,newmod); ParseLastModule = newmod;        /* link module chain */
      SetLine(newmod,CellLine(yyvsp[0])); SetNext(newmod,NULLCELL); SetInfo0(newmod,yyvsp[-2]); SetInfo1(newmod,yyvsp[-1]); SetInfo2(newmod,yyvsp[0]);

      SetSig(newmod,ParseSigListTop); ParseSigListTop = MakeNewSigList();    /* reset signal list */
      SetTypList(newmod,TypeListTop); TypeListTop = MakeNewTypeList();    /* reset type list */
      /* reset comment list ... unnecessary (common to all modules) */
      /* reset extract list ... unnecessary (common to all modules) */
    }
#line 2062 "vhdlparse.tab.c"
    break;

  case 4:
#line 199 "vhdlparse.y"
    {  /* one design unit: N_MODULE info0=header, info1=entity, info2=arch */
      TCELLPNT newmod = MallocTcell(N_MODULE,NULLSTR,0);
      yyval = ParseLastModule = newmod;
      SetLine(newmod,CellLine(yyvsp[0])); SetNext(newmod,NULLCELL); SetInfo0(newmod,yyvsp[-2]); SetInfo1(newmod,yyvsp[-1]); SetInfo2(newmod,yyvsp[0]);

      SetSig(newmod,ParseSigListTop); ParseSigListTop = MakeNewSigList();    /* reset signal list */
      SetTypList(newmod,TypeListTop); TypeListTop = MakeNewTypeList();    /* reset type list */
      /* reset comment list ... unnecessary (common to all modules) */
      /* reset extract list ... unnecessary (common to all modules) */
    }
#line 2077 "vhdlparse.tab.c"
    break;

  case 5:
#line 213 "vhdlparse.y"
    {  /* library/use definitions */
      yyval = NULLCELL;
      FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 2086 "vhdlparse.tab.c"
    break;

  case 6:
#line 218 "vhdlparse.y"
    {  /* library/use definitions */
      yyval = NULLCELL;
      FreeTcell(yyvsp[0]);
    }
#line 2095 "vhdlparse.tab.c"
    break;

  case 7:
#line 226 "vhdlparse.y"
    {  /* library/use definitions */
      yyval = NULLCELL;
      FreeTcell(yyvsp[-2]); FreeTree(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 2104 "vhdlparse.tab.c"
    break;

  case 8:
#line 231 "vhdlparse.y"
    {  /* library/use definitions */
      yyval = NULLCELL;
      FreeTcell(yyvsp[-1]);
      FreeTcell(yyvsp[0]);
    }
#line 2114 "vhdlparse.tab.c"
    break;

  case 9:
#line 240 "vhdlparse.y"
    {  /* library/use definitions */
      yyval = NULLCELL;
      FreeTcell(yyvsp[-2]);
      FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 2124 "vhdlparse.tab.c"
    break;

  case 10:
#line 246 "vhdlparse.y"
    {  /* library/use definitions */
      yyval = NULLCELL;
      FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 2133 "vhdlparse.tab.c"
    break;

  case 11:
#line 254 "vhdlparse.y"
    {  /* entity part: T_ENTITY info0=ID, info1=generic, info2=port */
      yyval = yyvsp[-8]; SetLine(yyval,CellLine(yyvsp[-6])); SetInfo0(yyval,yyvsp[-7]); SetInfo1(yyval,yyvsp[-5]); SetInfo2(yyval,yyvsp[-4]);
      FreeTcell(yyvsp[-6]); FreeTcell(yyvsp[-3]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
      RegisterIoSignals(ParseSigListTop, CellInfo2(yyval));
    }
#line 2143 "vhdlparse.tab.c"
    break;

  case 12:
#line 260 "vhdlparse.y"
    {  /* entity part: T_ENTITY info0=ID, info1=generic, info2=port */
      yyval = yyvsp[-7]; SetLine(yyval,CellLine(yyvsp[-5])); SetInfo0(yyval,yyvsp[-6]); SetInfo1(yyval,yyvsp[-4]); SetInfo2(yyval,yyvsp[-3]);
      FreeTcell(yyvsp[-5]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
      RegisterIoSignals(ParseSigListTop, CellInfo2(yyval));
    }
#line 2153 "vhdlparse.tab.c"
    break;

  case 13:
#line 266 "vhdlparse.y"
    {  /* entity part: T_ENTITY info0=ID, info1=generic, info2=port */
      yyval = yyvsp[-6]; SetLine(yyval,CellLine(yyvsp[-4])); SetInfo0(yyval,yyvsp[-5]); SetInfo1(yyval,yyvsp[-3]); SetInfo2(yyval,yyvsp[-2]);
      FreeTcell(yyvsp[-4]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
      RegisterIoSignals(ParseSigListTop, CellInfo2(yyval));
    }
#line 2163 "vhdlparse.tab.c"
    break;

  case 14:
#line 272 "vhdlparse.y"
    {  /* entity part: T_ENTITY info0=ID, info1=generic(NULL), info2=port */
      yyval = yyvsp[-7]; SetLine(yyval,CellLine(yyvsp[-5])); SetInfo0(yyval,yyvsp[-6]); SetInfo1(yyval,NULLCELL); SetInfo2(yyval,yyvsp[-4]);
      FreeTcell(yyvsp[-5]); FreeTcell(yyvsp[-3]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
      RegisterIoSignals(ParseSigListTop, CellInfo2(yyval));
    }
#line 2173 "vhdlparse.tab.c"
    break;

  case 15:
#line 278 "vhdlparse.y"
    {  /* entity part: T_ENTITY info0=ID, info1=generic(NULL), info2=port */
      yyval = yyvsp[-6]; SetLine(yyval,CellLine(yyvsp[-4])); SetInfo0(yyval,yyvsp[-5]); SetInfo1(yyval,NULLCELL); SetInfo2(yyval,yyvsp[-3]);
      FreeTcell(yyvsp[-4]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
      RegisterIoSignals(ParseSigListTop, CellInfo2(yyval));
    }
#line 2183 "vhdlparse.tab.c"
    break;

  case 16:
#line 284 "vhdlparse.y"
    {  /* entity part: T_ENTITY info0=ID, info1=generic(NULL), info2=port */
      yyval = yyvsp[-5]; SetLine(yyval,CellLine(yyvsp[-3])); SetInfo0(yyval,yyvsp[-4]); SetInfo1(yyval,NULLCELL); SetInfo2(yyval,yyvsp[-2]);
      FreeTcell(yyvsp[-3]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
      RegisterIoSignals(ParseSigListTop, CellInfo2(yyval));
    }
#line 2193 "vhdlparse.tab.c"
    break;

  case 17:
#line 290 "vhdlparse.y"
    {  /* entity part: T_ENTITY info0=ID, info1=generic(NULL), info2=port(NULL) */
      yyval = yyvsp[-6]; SetLine(yyval,CellLine(yyvsp[-4])); SetInfo0(yyval,yyvsp[-5]); SetInfo1(yyval,NULLCELL); SetInfo2(yyval,NULLCELL);
      FreeTcell(yyvsp[-4]); FreeTcell(yyvsp[-3]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
      RegisterIoSignals(ParseSigListTop, CellInfo2(yyval));
    }
#line 2203 "vhdlparse.tab.c"
    break;

  case 18:
#line 296 "vhdlparse.y"
    {  /* entity part: T_ENTITY info0=ID, info1=generic(NULL), info2=port(NULL) */
      yyval = yyvsp[-5]; SetLine(yyval,CellLine(yyvsp[-3])); SetInfo0(yyval,yyvsp[-4]); SetInfo1(yyval,NULLCELL); SetInfo2(yyval,NULLCELL);
      FreeTcell(yyvsp[-3]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
      RegisterIoSignals(ParseSigListTop, CellInfo2(yyval));
    }
#line 2213 "vhdlparse.tab.c"
    break;

  case 19:
#line 302 "vhdlparse.y"
    {  /* entity part: T_ENTITY info0=ID, info1=generic(NULL), info2=port(NULL) */
      yyval = yyvsp[-4]; SetLine(yyval,CellLine(yyvsp[-2])); SetInfo0(yyval,yyvsp[-3]); SetInfo1(yyval,NULLCELL); SetInfo2(yyval,NULLCELL);
      FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
      RegisterIoSignals(ParseSigListTop, CellInfo2(yyval));
    }
#line 2223 "vhdlparse.tab.c"
    break;

  case 20:
#line 311 "vhdlparse.y"
    {  /* generic part: N_GENERICDEF info0=parameter */
      yyval = yyvsp[-4]; SetLine(yyval,CellLine(yyvsp[0])); SetType(yyval,N_GENERICDEF); SetInfo0(yyval,yyvsp[-2]);
      FreeTcell(yyvsp[-3]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 2232 "vhdlparse.tab.c"
    break;

  case 21:
#line 319 "vhdlparse.y"
    {  /* parameters: */
      yyval = yyvsp[-1]; SetNext(yyval,yyvsp[0]);
    }
#line 2240 "vhdlparse.tab.c"
    break;

  case 22:
#line 323 "vhdlparse.y"
    {  /* parameters: */
      yyval = yyvsp[0]; SetNext(yyval,NULLCELL);
    }
#line 2248 "vhdlparse.tab.c"
    break;

  case 23:
#line 330 "vhdlparse.y"
    {  /* parameter item: N_PARAMDEF info0=idlist, info1=sigtype, info2=defaultval */
      yyval = MallocTcell(N_PARAMDEF,NULLSTR,0); SetLine(yyval,CellLine(yyvsp[0])); SetInfo0(yyval,yyvsp[-5]); SetInfo1(yyval,yyvsp[-3]); SetInfo2(yyval,yyvsp[-1]);
      FreeTcell(yyvsp[-4]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[0]);
    }
#line 2257 "vhdlparse.tab.c"
    break;

  case 24:
#line 335 "vhdlparse.y"
    {  /* parameter item: N_PARAMDEF info0=idlist, info1=sigtype, info2=defaultval */
      yyval = MallocTcell(N_PARAMDEF,NULLSTR,0); SetLine(yyval,CellLine(yyvsp[0])); SetInfo0(yyval,yyvsp[-4]); SetInfo1(yyval,yyvsp[-2]); SetInfo2(yyval,yyvsp[0]);
      FreeTcell(yyvsp[-3]); FreeTcell(yyvsp[-1]);
    }
#line 2266 "vhdlparse.tab.c"
    break;

  case 25:
#line 340 "vhdlparse.y"
    {  /* parameter item: N_PARAMDEF info0=idlist, info1=sigtype, info2=defaultval(NULL) */
      yyval = MallocTcell(N_PARAMDEF,NULLSTR,0); SetLine(yyval,CellLine(yyvsp[0])); SetInfo0(yyval,yyvsp[-3]); SetInfo1(yyval,yyvsp[-1]); SetInfo2(yyval,NULLCELL);
      FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[0]);
    }
#line 2275 "vhdlparse.tab.c"
    break;

  case 26:
#line 345 "vhdlparse.y"
    {  /* parameter item: N_PARAMDEF info0=idlist, info1=sigtype, info2=defaultval(NULL) */
      yyval = MallocTcell(N_PARAMDEF,NULLSTR,0); SetLine(yyval,CellLine(yyvsp[0])); SetInfo0(yyval,yyvsp[-2]); SetInfo1(yyval,yyvsp[0]); SetInfo2(yyval,NULLCELL);
      FreeTcell(yyvsp[-1]);
    }
#line 2284 "vhdlparse.tab.c"
    break;

  case 27:
#line 353 "vhdlparse.y"
    {  /* port part: N_PORTDEF info0=parameter */
      yyval = yyvsp[-2]; SetLine(yyval,CellLine(yyvsp[-2])); SetType(yyval,N_PORTDEF); SetInfo0(yyval,yyvsp[-1]);
      FreeTcell(yyvsp[0]);
    }
#line 2293 "vhdlparse.tab.c"
    break;

  case 28:
#line 361 "vhdlparse.y"
    {
      yyval = yyvsp[-1];
      FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[0]);
    }
#line 2302 "vhdlparse.tab.c"
    break;

  case 29:
#line 369 "vhdlparse.y"
    {  /* io defs: */
      yyval = yyvsp[-1]; SetNext(yyval,yyvsp[0]);
    }
#line 2310 "vhdlparse.tab.c"
    break;

  case 30:
#line 373 "vhdlparse.y"
    {  /* io defs: */
      yyval = yyvsp[0]; SetNext(yyval,NULLCELL);
    }
#line 2318 "vhdlparse.tab.c"
    break;

  case 31:
#line 380 "vhdlparse.y"
    {  /* (procedure signal I/O) */
      yyval = yyvsp[0];
      FreeTcell(yyvsp[-1]);
    }
#line 2327 "vhdlparse.tab.c"
    break;

  case 32:
#line 385 "vhdlparse.y"
    {  /* signal item: N_SIGDEF info0=idlist, info1=sigdir, info2=sigtype */
      yyval = MallocTcell(N_SIGDEF,NULLSTR,0); SetLine(yyval,CellLine(yyvsp[-4])); SetInfo0(yyval,yyvsp[-4]); SetInfo1(yyval,yyvsp[-2]); SetInfo2(yyval,yyvsp[-1]);
      FreeTcell(yyvsp[-3]); FreeTcell(yyvsp[0]);
    }
#line 2336 "vhdlparse.tab.c"
    break;

  case 33:
#line 390 "vhdlparse.y"
    {  /* signal item: N_SIGDEF info0=idlist, info1=sigdir, info2=sigtype */
      yyval = MallocTcell(N_SIGDEF,NULLSTR,0); SetLine(yyval,CellLine(yyvsp[-3])); SetInfo0(yyval,yyvsp[-3]); SetInfo1(yyval,yyvsp[-1]); SetInfo2(yyval,yyvsp[0]);
      FreeTcell(yyvsp[-2]);
    }
#line 2345 "vhdlparse.tab.c"
    break;

  case 34:
#line 395 "vhdlparse.y"
    {  /* signal item: N_SIGDEF info0=idlist, info1=sigdir, info2=sigtype */
      yyval = MallocTcell(N_SIGDEF,NULLSTR,0); SetLine(yyval,CellLine(yyvsp[-6])); SetInfo0(yyval,yyvsp[-6]); SetInfo1(yyval,yyvsp[-4]); SetInfo2(yyval,yyvsp[-3]);
      FreeTcell(yyvsp[-5]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 2354 "vhdlparse.tab.c"
    break;

  case 35:
#line 403 "vhdlparse.y"
    {  /* signal/parameter names: N_IDLIST */
      yyval = yyvsp[-2]; SetType(yyval,N_IDLIST); SetNext(yyval,yyvsp[0]);
    }
#line 2362 "vhdlparse.tab.c"
    break;

  case 36:
#line 407 "vhdlparse.y"
    {  /* signal/parameter names: N_IDLIST */
      yyval = yyvsp[0]; SetType(yyval,N_IDLIST); SetNext(yyval,NULLCELL); 
    }
#line 2370 "vhdlparse.tab.c"
    break;

  case 37:
#line 414 "vhdlparse.y"
    {
      yyval = yyvsp[0];
    }
#line 2378 "vhdlparse.tab.c"
    break;

  case 38:
#line 418 "vhdlparse.y"
    {
      yyval = yyvsp[0];
    }
#line 2386 "vhdlparse.tab.c"
    break;

  case 39:
#line 422 "vhdlparse.y"
    {
      yyval = yyvsp[0];
    }
#line 2394 "vhdlparse.tab.c"
    break;

  case 40:
#line 429 "vhdlparse.y"
    {
      yyval = yyvsp[0];
    }
#line 2402 "vhdlparse.tab.c"
    break;

  case 41:
#line 433 "vhdlparse.y"
    {  /* stdlogicvec: T_STDLOGICVEC info0 = sigwidth */
      yyval = yyvsp[-3]; SetLine(yyval,CellLine(yyvsp[-2])); SetInfo0(yyval,yyvsp[-1]);
      FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[0]);
    }
#line 2411 "vhdlparse.tab.c"
    break;

  case 42:
#line 438 "vhdlparse.y"
    {  /* stdlogicvec: T_STDLOGICVEC info0 = sigwidth(NULL) */
      yyval = yyvsp[0]; SetInfo0(yyval,NULLCELL);
    }
#line 2419 "vhdlparse.tab.c"
    break;

  case 43:
#line 442 "vhdlparse.y"
    {  /* stdlogicvec: T_STDLOGICVEC info0 = sigwidth */
      yyval = yyvsp[-3]; SetLine(yyval,CellLine(yyvsp[-2])); SetInfo0(yyval,yyvsp[-1]);
      FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[0]);
    }
#line 2428 "vhdlparse.tab.c"
    break;

  case 44:
#line 447 "vhdlparse.y"
    {  /* stdlogicvec: T_STDLOGICVEC info0 = sigwidth */
      yyval = yyvsp[-3]; SetLine(yyval,CellLine(yyvsp[-2])); SetInfo0(yyval,yyvsp[-1]);
      FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[0]);
    }
#line 2437 "vhdlparse.tab.c"
    break;

  case 45:
#line 452 "vhdlparse.y"
    {  /* integer: T_INTEGER info0 = sigwidth */
      yyval = yyvsp[-2]; SetLine(yyval,CellLine(yyvsp[-1])); SetInfo0(yyval,yyvsp[0]);
      FreeTcell(yyvsp[-1]);
    }
#line 2446 "vhdlparse.tab.c"
    break;

  case 46:
#line 457 "vhdlparse.y"
    {  /* integer: T_INTEGER info0 = sigwidth(NULL) */
      yyval = yyvsp[0]; SetInfo0(yyval,NULLCELL);
    }
#line 2454 "vhdlparse.tab.c"
    break;

  case 47:
#line 461 "vhdlparse.y"
    {
      yyval = yyvsp[0]; SetType(yyval,N_TYPEID);
    }
#line 2462 "vhdlparse.tab.c"
    break;

  case 48:
#line 468 "vhdlparse.y"
    {  /* sigwidth: T_TO info0=exp_L, info1=exp_R */
      yyval = yyvsp[-1]; SetLine(yyval,CellLine(yyvsp[-2])); SetInfo0(yyval,yyvsp[-2]); SetInfo1(yyval,yyvsp[0]);
    }
#line 2470 "vhdlparse.tab.c"
    break;

  case 49:
#line 472 "vhdlparse.y"
    {  /* sigwidth: T_DOWNTO info0=exp_L, info1=exp_R */
      yyval = yyvsp[-1]; SetLine(yyval,CellLine(yyvsp[-2])); SetInfo0(yyval,yyvsp[-2]); SetInfo1(yyval,yyvsp[0]);
    }
#line 2478 "vhdlparse.tab.c"
    break;

  case 50:
#line 479 "vhdlparse.y"
    {  /* architecture part: T_ARCHITECTURE info0=declaration, info1=body */
      yyval = yyvsp[-11]; SetLine(yyval,CellLine(yyvsp[-7])); SetInfo0(yyval,yyvsp[-6]); SetInfo1(yyval,yyvsp[-4]);
      FreeTcell(yyvsp[-10]); FreeTcell(yyvsp[-9]); FreeTcell(yyvsp[-8]); FreeTcell(yyvsp[-7]); FreeTcell(yyvsp[-5]);
      FreeTcell(yyvsp[-3]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 2488 "vhdlparse.tab.c"
    break;

  case 51:
#line 485 "vhdlparse.y"
    {  /* architecture part: T_ARCHITECTURE info0=declaration, info1=body */
      yyval = yyvsp[-10]; SetLine(yyval,CellLine(yyvsp[-6])); SetInfo0(yyval,yyvsp[-5]); SetInfo1(yyval,yyvsp[-3]);
      FreeTcell(yyvsp[-9]); FreeTcell(yyvsp[-8]); FreeTcell(yyvsp[-7]); FreeTcell(yyvsp[-6]); FreeTcell(yyvsp[-4]);
      FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 2498 "vhdlparse.tab.c"
    break;

  case 52:
#line 491 "vhdlparse.y"
    {  /* architecture part: T_ARCHITECTURE info0=declaration, info1=body */
      yyval = yyvsp[-9]; SetLine(yyval,CellLine(yyvsp[-5])); SetInfo0(yyval,yyvsp[-4]); SetInfo1(yyval,yyvsp[-2]);
      FreeTcell(yyvsp[-8]); FreeTcell(yyvsp[-7]); FreeTcell(yyvsp[-6]); FreeTcell(yyvsp[-5]); FreeTcell(yyvsp[-3]);
      FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 2508 "vhdlparse.tab.c"
    break;

  case 53:
#line 497 "vhdlparse.y"
    {  /* architecture part: T_ARCHITECTURE info0=declaration(NULL), info1=body */
      yyval = yyvsp[-10]; SetLine(yyval,CellLine(yyvsp[-5])); SetInfo0(yyval,NULLCELL); SetInfo1(yyval,yyvsp[-4]);
      FreeTcell(yyvsp[-9]); FreeTcell(yyvsp[-8]); FreeTcell(yyvsp[-7]); FreeTcell(yyvsp[-6]); FreeTcell(yyvsp[-5]);
      FreeTcell(yyvsp[-3]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 2518 "vhdlparse.tab.c"
    break;

  case 54:
#line 503 "vhdlparse.y"
    {  /* architecture part: T_ARCHITECTURE info0=declaration(NULL), info1=body */
      yyval = yyvsp[-9]; SetLine(yyval,CellLine(yyvsp[-4])); SetInfo0(yyval,NULLCELL); SetInfo1(yyval,yyvsp[-3]);
      FreeTcell(yyvsp[-8]); FreeTcell(yyvsp[-7]); FreeTcell(yyvsp[-6]); FreeTcell(yyvsp[-5]); FreeTcell(yyvsp[-4]);
      FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 2528 "vhdlparse.tab.c"
    break;

  case 55:
#line 509 "vhdlparse.y"
    {  /* architecture part: T_ARCHITECTURE info0=declaration(NULL), info1=body */
      yyval = yyvsp[-8]; SetLine(yyval,CellLine(yyvsp[-3])); SetInfo0(yyval,NULLCELL); SetInfo1(yyval,yyvsp[-2]);
      FreeTcell(yyvsp[-7]); FreeTcell(yyvsp[-6]); FreeTcell(yyvsp[-5]); FreeTcell(yyvsp[-4]); FreeTcell(yyvsp[-3]);
      FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 2538 "vhdlparse.tab.c"
    break;

  case 56:
#line 518 "vhdlparse.y"
    {  /* (discard component declaration) */
      yyval = yyvsp[0];
    }
#line 2546 "vhdlparse.tab.c"
    break;

  case 57:
#line 522 "vhdlparse.y"
    {  /* (discard component declaration) */
      yyval = NULLCELL;
    }
#line 2554 "vhdlparse.tab.c"
    break;

  case 58:
#line 526 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetNext(yyval,yyvsp[0]);
    }
#line 2562 "vhdlparse.tab.c"
    break;

  case 59:
#line 530 "vhdlparse.y"
    {
      yyval = yyvsp[0]; SetNext(yyval,NULLCELL);
    }
#line 2570 "vhdlparse.tab.c"
    break;

  case 60:
#line 534 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetNext(yyval,yyvsp[0]);
    }
#line 2578 "vhdlparse.tab.c"
    break;

  case 61:
#line 538 "vhdlparse.y"
    {
      yyval = yyvsp[0]; SetNext(yyval,NULLCELL);
    }
#line 2586 "vhdlparse.tab.c"
    break;

  case 62:
#line 542 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetNext(yyval,yyvsp[0]);
    }
#line 2594 "vhdlparse.tab.c"
    break;

  case 63:
#line 546 "vhdlparse.y"
    {
      yyval = yyvsp[0]; SetNext(yyval,NULLCELL);
    }
#line 2602 "vhdlparse.tab.c"
    break;

  case 64:
#line 550 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetNext(yyval,yyvsp[0]);
    }
#line 2610 "vhdlparse.tab.c"
    break;

  case 65:
#line 554 "vhdlparse.y"
    {
      yyval = yyvsp[0]; SetNext(yyval,NULLCELL);
    }
#line 2618 "vhdlparse.tab.c"
    break;

  case 66:
#line 558 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetNext(yyval,yyvsp[0]);
    }
#line 2626 "vhdlparse.tab.c"
    break;

  case 67:
#line 562 "vhdlparse.y"
    {
      yyval = yyvsp[0]; SetNext(yyval,NULLCELL);
    }
#line 2634 "vhdlparse.tab.c"
    break;

  case 68:
#line 569 "vhdlparse.y"
    {  /* (discard component declaration) */
      yyval = NULLCELL;
      FreeTcell(yyvsp[-7]); FreeTcell(yyvsp[-6]); FreeTree(yyvsp[-5]); FreeTree(yyvsp[-4]); FreeTcell(yyvsp[-3]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]);
    }
#line 2643 "vhdlparse.tab.c"
    break;

  case 69:
#line 574 "vhdlparse.y"
    {  /* (discard component declaration) */
      yyval = NULLCELL;
      FreeTcell(yyvsp[-8]); FreeTcell(yyvsp[-7]); FreeTree(yyvsp[-6]); FreeTree(yyvsp[-5]); FreeTcell(yyvsp[-4]); FreeTcell(yyvsp[-3]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]);
    }
#line 2652 "vhdlparse.tab.c"
    break;

  case 70:
#line 579 "vhdlparse.y"
    {  /* (discard component declaration) */
      yyval = NULLCELL;
      FreeTcell(yyvsp[-6]); FreeTcell(yyvsp[-5]); FreeTree(yyvsp[-4]); FreeTcell(yyvsp[-3]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]);
    }
#line 2661 "vhdlparse.tab.c"
    break;

  case 71:
#line 584 "vhdlparse.y"
    {  /* (discard component declaration) */
      yyval = NULLCELL;
      FreeTcell(yyvsp[-7]); FreeTcell(yyvsp[-6]); FreeTree(yyvsp[-5]); FreeTcell(yyvsp[-4]); FreeTcell(yyvsp[-3]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]);
    }
#line 2670 "vhdlparse.tab.c"
    break;

  case 72:
#line 592 "vhdlparse.y"
    {  /* constant def: T_CONSTANT info0=ID, info1=type, info2=value */
      yyval = yyvsp[-6]; SetLine(yyval,CellLine(yyvsp[0])); SetInfo0(yyval,yyvsp[-5]); SetInfo1(yyval,yyvsp[-3]); SetInfo2(yyval,yyvsp[-1]);
      if (AppendSigList(ParseSigListTop,CellStr(yyvsp[-5]),yyvsp[-3],False,False,False,False) == False)  /* (const) */
        yyerror("$Duplicate signal declaration (Verilog is case sensitive).");
      FreeTcell(yyvsp[-4]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[0]);
    }
#line 2681 "vhdlparse.tab.c"
    break;

  case 73:
#line 602 "vhdlparse.y"
    {  /* signal def: T_SIGNAL info0=idlist, info1=type */
      yyval = yyvsp[-4]; SetLine(yyval,CellLine(yyvsp[-4])); SetInfo0(yyval,yyvsp[-3]); SetInfo1(yyval,yyvsp[-1]);
      {
        register TCELLPNT  item;
        for (item = yyvsp[-3]; item != NULLCELL; item = NextCell(item)) {
          if (AppendSigList(ParseSigListTop,CellStr(item),yyvsp[-1],False,False,False,False) == False)  /* (wire) */
            yyerror("$Duplicate signal declaration (Verilog is case sensitive).");
        }
      }
      FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[0]);
    }
#line 2697 "vhdlparse.tab.c"
    break;

  case 74:
#line 614 "vhdlparse.y"
    {  /* signal def: T_SIGNAL info0=idlist, info1=type */
      yyval = yyvsp[-6]; SetLine(yyval,CellLine(yyvsp[-6])); SetInfo0(yyval,yyvsp[-5]); SetInfo1(yyval,yyvsp[-3]); SetInfo2(yyval,yyvsp[-1]);
      {
        register TCELLPNT  item;
        for (item = yyvsp[-5]; item != NULLCELL; item = NextCell(item)) {
          if (AppendSigList(ParseSigListTop,CellStr(item),yyvsp[-3],False,False,False,False) == False)  /* (wire) */
            yyerror("$Duplicate signal declaration (Verilog is case sensitive).");
        }
      }
      FreeTcell(yyvsp[-4]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[0]);
    }
#line 2713 "vhdlparse.tab.c"
    break;

  case 75:
#line 629 "vhdlparse.y"
    {  /* type def: T_TYPE info0=ID, info1=type */
      yyval = yyvsp[-4]; SetLine(yyval,CellLine(yyvsp[-2])); SetInfo0(yyval,yyvsp[-3]); SetInfo1(yyval,yyvsp[-1]);
      AppendTypeList(TypeListTop, yyval);
      FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[0]);
    }
#line 2723 "vhdlparse.tab.c"
    break;

  case 76:
#line 635 "vhdlparse.y"
    {  /* type def: T_TYPE info0=ID, info1=type */
      yyval = yyvsp[-4]; SetLine(yyval,CellLine(yyvsp[-2])); SetInfo0(yyval,yyvsp[-3]); SetInfo1(yyval,yyvsp[-1]);
      AppendTypeList(TypeListTop, yyval);
      FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[0]);
    }
#line 2733 "vhdlparse.tab.c"
    break;

  case 77:
#line 644 "vhdlparse.y"
    {  /* type def: N_ENUMTYPE info0=list */
      yyval = yyvsp[-2]; SetLine(yyval,CellLine(yyvsp[-2])); SetType(yyval,N_ENUMTYPE); SetInfo0(yyval,yyvsp[-1]);
      FreeTcell(yyvsp[0]);
    }
#line 2742 "vhdlparse.tab.c"
    break;

  case 78:
#line 649 "vhdlparse.y"
    {  /* type def: T_ARRAY info0=width, info1=type */
      yyval = yyvsp[-5]; SetLine(yyval,CellLine(yyvsp[-4])); SetType(yyval, N_TYPEDEF_ARRAY); SetInfo0(yyval,yyvsp[-3]); SetInfo1(yyval,yyvsp[0]);
      FreeTcell(yyvsp[-4]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]);
    }
#line 2751 "vhdlparse.tab.c"
    break;

  case 79:
#line 657 "vhdlparse.y"
    {  /* function def: T_FUNCTION info0=ID, info1=port, info2=type, info3=variable, info4=body, info5=ret */
      yyval = yyvsp[-13]; SetLine(yyval,CellLine(yyvsp[-12])); SetInfo0(yyval,yyvsp[-12]); SetInfo1(yyval,yyvsp[-11]); SetInfo2(yyval,yyvsp[-9]); SetInfo3(yyval,yyvsp[-7]); SetInfo4(yyval,yyvsp[-5]); SetInfo5(yyval,yyvsp[-4]);
      if (AppendSigList(ParseSigListTop,CellStr(yyvsp[-12]),NULLCELL,False,False,False,True) == False)  /* (function/procedure) */
        yyerror("$Duplicate function declaration.");
      FreeTcell(yyvsp[-10]); FreeTcell(yyvsp[-8]); FreeTcell(yyvsp[-6]);
      FreeTcell(yyvsp[-3]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 2763 "vhdlparse.tab.c"
    break;

  case 80:
#line 665 "vhdlparse.y"
    {  /* function def: T_FUNCTION info0=ID, info1=port, info2=type, info3=variable, info4=body, info5=ret */
      yyval = yyvsp[-12]; SetLine(yyval,CellLine(yyvsp[-11])); SetInfo0(yyval,yyvsp[-11]); SetInfo1(yyval,yyvsp[-10]); SetInfo2(yyval,yyvsp[-8]); SetInfo3(yyval,yyvsp[-6]); SetInfo4(yyval,yyvsp[-4]); SetInfo5(yyval,yyvsp[-3]);
      if (AppendSigList(ParseSigListTop,CellStr(yyvsp[-11]),NULLCELL,False,False,False,True) == False)  /* (function/procedure) */
        yyerror("$Duplicate function declaration.");
      FreeTcell(yyvsp[-9]); FreeTcell(yyvsp[-7]); FreeTcell(yyvsp[-5]);
      FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 2775 "vhdlparse.tab.c"
    break;

  case 81:
#line 673 "vhdlparse.y"
    {  /* function def: T_FUNCTION info0=ID, info1=port, info2=type, info3=variable(NULL), info4=body, info5=ret */
      yyval = yyvsp[-12]; SetLine(yyval,CellLine(yyvsp[-11])); SetInfo0(yyval,yyvsp[-11]); SetInfo1(yyval,yyvsp[-10]); SetInfo2(yyval,yyvsp[-8]); SetInfo3(yyval,NULLCELL); SetInfo4(yyval,yyvsp[-5]); SetInfo5(yyval,yyvsp[-4]);
      if (AppendSigList(ParseSigListTop,CellStr(yyvsp[-11]),NULLCELL,False,False,False,True) == False)  /* (function/procedure) */
        yyerror("$Duplicate function declaration.");
      FreeTcell(yyvsp[-9]); FreeTcell(yyvsp[-7]); FreeTcell(yyvsp[-6]);
      FreeTcell(yyvsp[-3]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 2787 "vhdlparse.tab.c"
    break;

  case 82:
#line 681 "vhdlparse.y"
    {  /* function def: T_FUNCTION info0=ID, info1=port, info2=type, info3=variable(NULL), info4=body, info5=ret */
      yyval = yyvsp[-11]; SetLine(yyval,CellLine(yyvsp[-10])); SetInfo0(yyval,yyvsp[-10]); SetInfo1(yyval,yyvsp[-9]); SetInfo2(yyval,yyvsp[-7]); SetInfo3(yyval,NULLCELL); SetInfo4(yyval,yyvsp[-4]); SetInfo5(yyval,yyvsp[-3]);
      if (AppendSigList(ParseSigListTop,CellStr(yyvsp[-10]),NULLCELL,False,False,False,True) == False)  /* (function/procedure) */
        yyerror("$Duplicate function declaration.");
      FreeTcell(yyvsp[-8]); FreeTcell(yyvsp[-6]); FreeTcell(yyvsp[-5]);
      FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 2799 "vhdlparse.tab.c"
    break;

  case 83:
#line 689 "vhdlparse.y"
    {  /* function def: T_FUNCTION info0=ID, info1=port, info2=type, info3=variable, info4=body(NULL), info5=ret */
      yyval = yyvsp[-12]; SetLine(yyval,CellLine(yyvsp[-11])); SetInfo0(yyval,yyvsp[-11]); SetInfo1(yyval,yyvsp[-10]); SetInfo2(yyval,yyvsp[-8]); SetInfo3(yyval,yyvsp[-6]); SetInfo4(yyval,NULLCELL); SetInfo5(yyval,yyvsp[-4]);
      if (AppendSigList(ParseSigListTop,CellStr(yyvsp[-11]),NULLCELL,False,False,False,True) == False)  /* (function/procedure) */
        yyerror("$Duplicate function declaration.");
      FreeTcell(yyvsp[-9]); FreeTcell(yyvsp[-7]); FreeTcell(yyvsp[-5]);
      FreeTcell(yyvsp[-3]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 2811 "vhdlparse.tab.c"
    break;

  case 84:
#line 697 "vhdlparse.y"
    {  /* function def: T_FUNCTION info0=ID, info1=port, info2=type, info3=variable, info4=body(NULL), info5=ret */
      yyval = yyvsp[-11]; SetLine(yyval,CellLine(yyvsp[-10])); SetInfo0(yyval,yyvsp[-10]); SetInfo1(yyval,yyvsp[-9]); SetInfo2(yyval,yyvsp[-7]); SetInfo3(yyval,yyvsp[-5]); SetInfo4(yyval,NULLCELL); SetInfo5(yyval,yyvsp[-3]);
      if (AppendSigList(ParseSigListTop,CellStr(yyvsp[-10]),NULLCELL,False,False,False,True) == False)  /* (function/procedure) */
        yyerror("$Duplicate function declaration.");
      FreeTcell(yyvsp[-8]); FreeTcell(yyvsp[-6]); FreeTcell(yyvsp[-4]);
      FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 2823 "vhdlparse.tab.c"
    break;

  case 85:
#line 705 "vhdlparse.y"
    {  /* function def: T_FUNCTION info0=ID, info1=port, info2=type, info3=variable(NULL), info4=body(NULL), info5=ret */
      yyval = yyvsp[-11]; SetLine(yyval,CellLine(yyvsp[-10])); SetInfo0(yyval,yyvsp[-10]); SetInfo1(yyval,yyvsp[-9]); SetInfo2(yyval,yyvsp[-7]); SetInfo3(yyval,NULLCELL); SetInfo4(yyval,NULLCELL); SetInfo5(yyval,yyvsp[-4]);
      if (AppendSigList(ParseSigListTop,CellStr(yyvsp[-10]),NULLCELL,False,False,False,True) == False)  /* (function/procedure) */
        yyerror("$Duplicate function declaration.");
      FreeTcell(yyvsp[-8]); FreeTcell(yyvsp[-6]); FreeTcell(yyvsp[-5]);
      FreeTcell(yyvsp[-3]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 2835 "vhdlparse.tab.c"
    break;

  case 86:
#line 713 "vhdlparse.y"
    {  /* function def: T_FUNCTION info0=ID, info1=port, info2=type, info3=variable(NULL), info4=body(NULL), info5=ret */
      yyval = yyvsp[-10]; SetLine(yyval,CellLine(yyvsp[-9])); SetInfo0(yyval,yyvsp[-9]); SetInfo1(yyval,yyvsp[-8]); SetInfo2(yyval,yyvsp[-6]); SetInfo3(yyval,NULLCELL); SetInfo4(yyval,NULLCELL); SetInfo5(yyval,yyvsp[-3]);
      if (AppendSigList(ParseSigListTop,CellStr(yyvsp[-9]),NULLCELL,False,False,False,True) == False)  /* (function/procedure) */
        yyerror("$Duplicate function declaration.");
      FreeTcell(yyvsp[-7]); FreeTcell(yyvsp[-5]); FreeTcell(yyvsp[-4]);
      FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 2847 "vhdlparse.tab.c"
    break;

  case 87:
#line 724 "vhdlparse.y"
    {
      yyval = yyvsp[-1];
      FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[0]);
    }
#line 2856 "vhdlparse.tab.c"
    break;

  case 88:
#line 732 "vhdlparse.y"
    {  /* function return: T_RETURN info0=exp */
      yyval = yyvsp[-2]; SetLine(yyval,CellLine(yyvsp[-2])); SetInfo0(yyval,yyvsp[-1]);
      FreeTcell(yyvsp[0]);
    }
#line 2865 "vhdlparse.tab.c"
    break;

  case 89:
#line 740 "vhdlparse.y"
    {  /* procedure def: T_PROCEDURE info0=ID, info1=port, info2=variale, info3=body */
      yyval = yyvsp[-10]; SetLine(yyval,CellLine(yyvsp[-9])); SetInfo0(yyval,yyvsp[-9]); SetInfo1(yyval,yyvsp[-8]); SetInfo2(yyval,yyvsp[-6]); SetInfo3(yyval,yyvsp[-4]);
      if (AppendSigList(ParseSigListTop,CellStr(yyvsp[-9]),NULLCELL,False,False,False,True) == False)  /* (function/procedure) */
        yyerror("$Duplicate procedure declaration.");
      FreeTcell(yyvsp[-7]); FreeTcell(yyvsp[-5]); FreeTcell(yyvsp[-3]);
      FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 2877 "vhdlparse.tab.c"
    break;

  case 90:
#line 748 "vhdlparse.y"
    {  /* procedure def: T_PROCEDURE info0=ID, info1=port, info2=variale, info3=body */
      yyval = yyvsp[-9]; SetLine(yyval,CellLine(yyvsp[-8])); SetInfo0(yyval,yyvsp[-8]); SetInfo1(yyval,yyvsp[-7]); SetInfo2(yyval,yyvsp[-5]); SetInfo3(yyval,yyvsp[-3]);
      if (AppendSigList(ParseSigListTop,CellStr(yyvsp[-8]),NULLCELL,False,False,False,True) == False)  /* (function/procedure) */
        yyerror("$Duplicate procedure declaration.");
      FreeTcell(yyvsp[-6]); FreeTcell(yyvsp[-4]); FreeTcell(yyvsp[-2]);
      FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 2889 "vhdlparse.tab.c"
    break;

  case 91:
#line 756 "vhdlparse.y"
    {  /* procedure def: T_PROCEDURE info0=ID, info1=port, info2=variale(NULL), info3=body */
      yyval = yyvsp[-9]; SetLine(yyval,CellLine(yyvsp[-8])); SetInfo0(yyval,yyvsp[-8]); SetInfo1(yyval,yyvsp[-7]); SetInfo2(yyval,NULLCELL); SetInfo3(yyval,yyvsp[-4]);
      if (AppendSigList(ParseSigListTop,CellStr(yyvsp[-8]),NULLCELL,False,False,False,True) == False)  /* (function/procedure) */
        yyerror("$Duplicate procedure declaration.");
      FreeTcell(yyvsp[-6]); FreeTcell(yyvsp[-5]); FreeTcell(yyvsp[-3]);
      FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 2901 "vhdlparse.tab.c"
    break;

  case 92:
#line 764 "vhdlparse.y"
    {  /* procedure def: T_PROCEDURE info0=ID, info1=port, info2=variale(NULL), info3=body */
      yyval = yyvsp[-8]; SetLine(yyval,CellLine(yyvsp[-7])); SetInfo0(yyval,yyvsp[-7]); SetInfo1(yyval,yyvsp[-6]); SetInfo2(yyval,NULLCELL); SetInfo3(yyval,yyvsp[-3]);
      if (AppendSigList(ParseSigListTop,CellStr(yyvsp[-7]),NULLCELL,False,False,False,True) == False)  /* (function/procedure) */
        yyerror("$Duplicate procedure declaration.");
      FreeTcell(yyvsp[-5]); FreeTcell(yyvsp[-4]); FreeTcell(yyvsp[-2]);
      FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 2913 "vhdlparse.tab.c"
    break;

  case 93:
#line 775 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetNext(yyval,yyvsp[0]);
    }
#line 2921 "vhdlparse.tab.c"
    break;

  case 94:
#line 779 "vhdlparse.y"
    {
      yyval = yyvsp[0]; SetNext(yyval,NULLCELL);
    }
#line 2929 "vhdlparse.tab.c"
    break;

  case 95:
#line 783 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetType(yyvsp[-1],N_ASSIGN); SetNext(yyval,yyvsp[0]);
    }
#line 2937 "vhdlparse.tab.c"
    break;

  case 96:
#line 787 "vhdlparse.y"
    {
      yyval = yyvsp[0]; SetType(yyvsp[0],N_ASSIGN); SetNext(yyval,NULLCELL);
    }
#line 2945 "vhdlparse.tab.c"
    break;

  case 97:
#line 791 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetNext(yyval,yyvsp[0]);
    }
#line 2953 "vhdlparse.tab.c"
    break;

  case 98:
#line 795 "vhdlparse.y"
    {
      yyval = yyvsp[0]; SetNext(yyval,NULLCELL);
    }
#line 2961 "vhdlparse.tab.c"
    break;

  case 99:
#line 799 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetNext(yyval,yyvsp[0]);
    }
#line 2969 "vhdlparse.tab.c"
    break;

  case 100:
#line 803 "vhdlparse.y"
    {
      yyval = yyvsp[0]; SetNext(yyval,NULLCELL);
    }
#line 2977 "vhdlparse.tab.c"
    break;

  case 101:
#line 807 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetNext(yyval,yyvsp[0]);
    }
#line 2985 "vhdlparse.tab.c"
    break;

  case 102:
#line 811 "vhdlparse.y"
    {
      yyval = yyvsp[0]; SetNext(yyval,NULLCELL);
    }
#line 2993 "vhdlparse.tab.c"
    break;

  case 103:
#line 815 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetNext(yyval,yyvsp[0]);
    }
#line 3001 "vhdlparse.tab.c"
    break;

  case 104:
#line 819 "vhdlparse.y"
    {
      yyval = yyvsp[0]; SetNext(yyval,NULLCELL);
    }
#line 3009 "vhdlparse.tab.c"
    break;

  case 105:
#line 823 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetNext(yyval,yyvsp[0]);
    }
#line 3017 "vhdlparse.tab.c"
    break;

  case 106:
#line 827 "vhdlparse.y"
    {
      yyval = yyvsp[0]; SetNext(yyval,NULLCELL);
    }
#line 3025 "vhdlparse.tab.c"
    break;

  case 107:
#line 831 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetNext(yyval,yyvsp[0]);
    }
#line 3033 "vhdlparse.tab.c"
    break;

  case 108:
#line 835 "vhdlparse.y"
    {
      yyval = yyvsp[0]; SetNext(yyval,NULLCELL);
    }
#line 3041 "vhdlparse.tab.c"
    break;

  case 109:
#line 842 "vhdlparse.y"
    {  /* for generate: T_FOR info0=ID(label), info1=ID(variable), info2=width, info3=body */
      yyval = yyvsp[-9]; SetType(yyval,N_FORGENERATE); SetLine(yyval,CellLine(yyvsp[-7])); SetInfo0(yyval,yyvsp[-11]); SetInfo1(yyval,yyvsp[-8]); SetInfo2(yyval,yyvsp[-6]); SetInfo3(yyval,yyvsp[-4]);
      FreeTcell(yyvsp[-10]); FreeTcell(yyvsp[-7]); FreeTcell(yyvsp[-5]);
      FreeTcell(yyvsp[-3]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 3051 "vhdlparse.tab.c"
    break;

  case 110:
#line 848 "vhdlparse.y"
    {  /* for generate: T_FOR info0=ID(label), info1=ID(variable), info2=width, info3=body */
      yyval = yyvsp[-8]; SetType(yyval,N_FORGENERATE); SetLine(yyval,CellLine(yyvsp[-6])); SetInfo0(yyval,yyvsp[-10]); SetInfo1(yyval,yyvsp[-7]); SetInfo2(yyval,yyvsp[-5]); SetInfo3(yyval,yyvsp[-3]);
      FreeTcell(yyvsp[-9]); FreeTcell(yyvsp[-6]); FreeTcell(yyvsp[-4]);
      FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 3061 "vhdlparse.tab.c"
    break;

  case 111:
#line 854 "vhdlparse.y"
    {  /* for generate: T_FOR info0=ID(label,NULL), info1=ID(variable), info2=width, info3=body */
      yyval = yyvsp[-9]; SetType(yyval,N_FORGENERATE); SetLine(yyval,CellLine(yyvsp[-7])); SetInfo0(yyval,NULLCELL); SetInfo1(yyval,yyvsp[-8]); SetInfo2(yyval,yyvsp[-6]); SetInfo3(yyval,yyvsp[-4]);
      FreeTcell(yyvsp[-7]); FreeTcell(yyvsp[-5]); FreeTcell(yyvsp[-3]);
      FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 3071 "vhdlparse.tab.c"
    break;

  case 112:
#line 860 "vhdlparse.y"
    {  /* for generate: T_FOR info0=ID(label,NULL), info1=ID(variable), info2=width, info3=body */
      yyval = yyvsp[-8]; SetType(yyval,N_FORGENERATE); SetLine(yyval,CellLine(yyvsp[-6])); SetInfo0(yyval,NULLCELL); SetInfo1(yyval,yyvsp[-7]); SetInfo2(yyval,yyvsp[-5]); SetInfo3(yyval,yyvsp[-3]);
      FreeTcell(yyvsp[-6]); FreeTcell(yyvsp[-4]); FreeTcell(yyvsp[-2]);
      FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 3081 "vhdlparse.tab.c"
    break;

  case 113:
#line 869 "vhdlparse.y"
    {  /* process: T_PROCESS info0=ID(label), info1=sensitivity, info2=variable, info3=body */
      yyval = yyvsp[-10]; SetLine(yyval,CellLine(yyvsp[-9])); SetInfo0(yyval,yyvsp[-12]); SetInfo1(yyval,yyvsp[-8]); SetInfo2(yyval,yyvsp[-6]); SetInfo3(yyval,yyvsp[-4]);
      if (CellInfo3(yyval) != NULLCELL && CellType(CellInfo3(yyval)) == N_SYNCIF)  SetType(yyval,N_SYNCPROCESS);
      if (CellInfo3(yyval) != NULLCELL && CellType(CellInfo3(yyval)) == N_ASYNCIF) SetType(yyval,N_ASYNCPROCESS);
      FreeTcell(yyvsp[-11]); FreeTcell(yyvsp[-9]); FreeTcell(yyvsp[-7]); FreeTcell(yyvsp[-5]);
      FreeTcell(yyvsp[-3]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 3093 "vhdlparse.tab.c"
    break;

  case 114:
#line 877 "vhdlparse.y"
    {  /* process: T_PROCESS info0=ID(label), info1=sensitivity, info2=variable, info3=body */
      yyval = yyvsp[-9]; SetLine(yyval,CellLine(yyvsp[-8])); SetInfo0(yyval,yyvsp[-11]); SetInfo1(yyval,yyvsp[-7]); SetInfo2(yyval,yyvsp[-5]); SetInfo3(yyval,yyvsp[-3]);
      if (CellInfo3(yyval) != NULLCELL && CellType(CellInfo3(yyval)) == N_SYNCIF)  SetType(yyval,N_SYNCPROCESS);
      if (CellInfo3(yyval) != NULLCELL && CellType(CellInfo3(yyval)) == N_ASYNCIF) SetType(yyval,N_ASYNCPROCESS);
      FreeTcell(yyvsp[-10]); FreeTcell(yyvsp[-8]); FreeTcell(yyvsp[-6]); FreeTcell(yyvsp[-4]);
      FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 3105 "vhdlparse.tab.c"
    break;

  case 115:
#line 885 "vhdlparse.y"
    {  /* process: T_PROCESS info0=ID(label), info1=sensitivity, info2=variable(NULL), info3=body */
      yyval = yyvsp[-9]; SetLine(yyval,CellLine(yyvsp[-8])); SetInfo0(yyval,yyvsp[-11]); SetInfo1(yyval,yyvsp[-7]); SetInfo2(yyval,NULLCELL); SetInfo3(yyval,yyvsp[-4]);
      if (CellInfo3(yyval) != NULLCELL && CellType(CellInfo3(yyval)) == N_SYNCIF)  SetType(yyval,N_SYNCPROCESS);
      if (CellInfo3(yyval) != NULLCELL && CellType(CellInfo3(yyval)) == N_ASYNCIF) SetType(yyval,N_ASYNCPROCESS);
      FreeTcell(yyvsp[-10]); FreeTcell(yyvsp[-8]); FreeTcell(yyvsp[-6]); FreeTcell(yyvsp[-5]);
      FreeTcell(yyvsp[-3]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 3117 "vhdlparse.tab.c"
    break;

  case 116:
#line 893 "vhdlparse.y"
    {  /* process: T_PROCESS info0=ID(label), info1=sensitivity, info2=variable(NULL), info3=body */
      yyval = yyvsp[-8]; SetLine(yyval,CellLine(yyvsp[-7])); SetInfo0(yyval,yyvsp[-10]); SetInfo1(yyval,yyvsp[-6]); SetInfo2(yyval,NULLCELL); SetInfo3(yyval,yyvsp[-3]);
      if (CellInfo3(yyval) != NULLCELL && CellType(CellInfo3(yyval)) == N_SYNCIF)  SetType(yyval,N_SYNCPROCESS);
      if (CellInfo3(yyval) != NULLCELL && CellType(CellInfo3(yyval)) == N_ASYNCIF) SetType(yyval,N_ASYNCPROCESS);
      FreeTcell(yyvsp[-9]); FreeTcell(yyvsp[-7]); FreeTcell(yyvsp[-5]); FreeTcell(yyvsp[-4]);
      FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 3129 "vhdlparse.tab.c"
    break;

  case 117:
#line 901 "vhdlparse.y"
    {  /* process: T_PROCESS info0=ID(label,NULL), info1=sensitivity, info2=variable, info3=body */
      yyval = yyvsp[-10]; SetLine(yyval,CellLine(yyvsp[-9])); SetInfo0(yyval,NULLCELL); SetInfo1(yyval,yyvsp[-8]); SetInfo2(yyval,yyvsp[-6]); SetInfo3(yyval,yyvsp[-4]);
      if (CellInfo3(yyval) != NULLCELL && CellType(CellInfo3(yyval)) == N_SYNCIF)  SetType(yyval,N_SYNCPROCESS);
      if (CellInfo3(yyval) != NULLCELL && CellType(CellInfo3(yyval)) == N_ASYNCIF) SetType(yyval,N_ASYNCPROCESS);
      FreeTcell(yyvsp[-9]); FreeTcell(yyvsp[-7]); FreeTcell(yyvsp[-5]); FreeTcell(yyvsp[-3]);
      FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 3141 "vhdlparse.tab.c"
    break;

  case 118:
#line 909 "vhdlparse.y"
    {  /* process: T_PROCESS info0=ID(label,NULL), info1=sensitivity, info2=variable, info3=body */
      yyval = yyvsp[-9]; SetLine(yyval,CellLine(yyvsp[-8])); SetInfo0(yyval,NULLCELL); SetInfo1(yyval,yyvsp[-7]); SetInfo2(yyval,yyvsp[-5]); SetInfo3(yyval,yyvsp[-3]);
      if (CellInfo3(yyval) != NULLCELL && CellType(CellInfo3(yyval)) == N_SYNCIF)  SetType(yyval,N_SYNCPROCESS);
      if (CellInfo3(yyval) != NULLCELL && CellType(CellInfo3(yyval)) == N_ASYNCIF) SetType(yyval,N_ASYNCPROCESS);
      FreeTcell(yyvsp[-8]); FreeTcell(yyvsp[-6]); FreeTcell(yyvsp[-4]); FreeTcell(yyvsp[-2]);
      FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 3153 "vhdlparse.tab.c"
    break;

  case 119:
#line 917 "vhdlparse.y"
    {  /* process: T_PROCESS info0=ID(label,NULL), info1=sensitivity, info2=variable(NULL), info3=body */
      yyval = yyvsp[-9]; SetLine(yyval,CellLine(yyvsp[-8])); SetInfo0(yyval,NULLCELL); SetInfo1(yyval,yyvsp[-7]); SetInfo2(yyval,NULLCELL); SetInfo3(yyval,yyvsp[-4]);
      if (CellInfo3(yyval) != NULLCELL && CellType(CellInfo3(yyval)) == N_SYNCIF)  SetType(yyval,N_SYNCPROCESS);
      if (CellInfo3(yyval) != NULLCELL && CellType(CellInfo3(yyval)) == N_ASYNCIF) SetType(yyval,N_ASYNCPROCESS);
      FreeTcell(yyvsp[-8]); FreeTcell(yyvsp[-6]); FreeTcell(yyvsp[-5]); FreeTcell(yyvsp[-3]);
      FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 3165 "vhdlparse.tab.c"
    break;

  case 120:
#line 925 "vhdlparse.y"
    {  /* process: T_PROCESS info0=ID(label,NULL), info1=sensitivity, info2=variable(NULL), info3=body */
      yyval = yyvsp[-8]; SetLine(yyval,CellLine(yyvsp[-7])); SetInfo0(yyval,NULLCELL); SetInfo1(yyval,yyvsp[-6]); SetInfo2(yyval,NULLCELL); SetInfo3(yyval,yyvsp[-3]);
      if (CellInfo3(yyval) != NULLCELL && CellType(CellInfo3(yyval)) == N_SYNCIF)  SetType(yyval,N_SYNCPROCESS);
      if (CellInfo3(yyval) != NULLCELL && CellType(CellInfo3(yyval)) == N_ASYNCIF) SetType(yyval,N_ASYNCPROCESS);
      FreeTcell(yyvsp[-7]); FreeTcell(yyvsp[-5]); FreeTcell(yyvsp[-4]);
      FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 3177 "vhdlparse.tab.c"
    break;

  case 121:
#line 936 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetNext(yyval,yyvsp[0]);
    }
#line 3185 "vhdlparse.tab.c"
    break;

  case 122:
#line 940 "vhdlparse.y"
    {
      yyval = yyvsp[0]; SetNext(yyval,NULLCELL);
    }
#line 3193 "vhdlparse.tab.c"
    break;

  case 123:
#line 947 "vhdlparse.y"
    {  /* variable def: T_VARIABLE info0=idlist, info1=type */
      yyval = yyvsp[-4]; SetLine(yyval,CellLine(yyvsp[-4])); SetInfo0(yyval,yyvsp[-3]); SetInfo1(yyval,yyvsp[-1]);
      FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[0]);
    }
#line 3202 "vhdlparse.tab.c"
    break;

  case 124:
#line 952 "vhdlparse.y"
    {
      yyval = yyvsp[0];
    }
#line 3210 "vhdlparse.tab.c"
    break;

  case 125:
#line 959 "vhdlparse.y"
    {
      register SIGLIST  *sig;
      yyval = yyvsp[-1]; SetNext(yyval,yyvsp[0]);
      if ((sig = SearchSigList(ParseSigListTop, GetSigName(CellInfo1(yyvsp[-1]))) ) != NULLSIG) {
        SigIsReg(sig)  = True;    /* (register) */
      }
    }
#line 3222 "vhdlparse.tab.c"
    break;

  case 126:
#line 967 "vhdlparse.y"
    {
      register SIGLIST  *sig;
      yyval = yyvsp[0]; SetNext(yyval,NULLCELL);
      if ((sig = SearchSigList(ParseSigListTop, GetSigName(CellInfo1(yyvsp[0]))) ) != NULLSIG) {
        SigIsReg(sig)  = True;    /* (register) */
      }
    }
#line 3234 "vhdlparse.tab.c"
    break;

  case 127:
#line 975 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetNext(yyval,yyvsp[0]);
    }
#line 3242 "vhdlparse.tab.c"
    break;

  case 128:
#line 979 "vhdlparse.y"
    {
      yyval = yyvsp[0]; SetNext(yyval,NULLCELL);
    }
#line 3250 "vhdlparse.tab.c"
    break;

  case 129:
#line 983 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetNext(yyval,yyvsp[0]);
    }
#line 3258 "vhdlparse.tab.c"
    break;

  case 130:
#line 987 "vhdlparse.y"
    {
      yyval = yyvsp[0]; SetNext(yyval,NULLCELL);
    }
#line 3266 "vhdlparse.tab.c"
    break;

  case 131:
#line 991 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetNext(yyval,yyvsp[0]);
    }
#line 3274 "vhdlparse.tab.c"
    break;

  case 132:
#line 995 "vhdlparse.y"
    {
      yyval = yyvsp[0]; SetNext(yyval,NULLCELL);
    }
#line 3282 "vhdlparse.tab.c"
    break;

  case 133:
#line 999 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetNext(yyval,yyvsp[0]);
    }
#line 3290 "vhdlparse.tab.c"
    break;

  case 134:
#line 1003 "vhdlparse.y"
    {
      yyval = yyvsp[0]; SetNext(yyval,NULLCELL);
    }
#line 3298 "vhdlparse.tab.c"
    break;

  case 135:
#line 1007 "vhdlparse.y"
    {
      yyval = yyvsp[0]; SetNext(yyval,NULLCELL);
    }
#line 3306 "vhdlparse.tab.c"
    break;

  case 136:
#line 1011 "vhdlparse.y"
    {
      yyval = yyvsp[0]; SetNext(yyval,NULLCELL);
    }
#line 3314 "vhdlparse.tab.c"
    break;

  case 137:
#line 1018 "vhdlparse.y"
    {  /* for loop: T_FOR info0=ID(label,NULL), info1=ID(variable), info2=width, info3=body */
      yyval = yyvsp[-8]; SetType(yyval,N_FORLOOP); SetLine(yyval,CellLine(yyvsp[-6])); SetInfo0(yyval,NULLCELL); SetInfo1(yyval,yyvsp[-7]); SetInfo2(yyval,yyvsp[-5]); SetInfo3(yyval,yyvsp[-3]);
      FreeTcell(yyvsp[-6]); FreeTcell(yyvsp[-4]); FreeTcell(yyvsp[-2]);
      FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 3324 "vhdlparse.tab.c"
    break;

  case 138:
#line 1027 "vhdlparse.y"
    {  /* call proc: N_CALLPROC info0=ID, info1=port */
      yyval = yyvsp[-3]; SetLine(yyval,CellLine(yyvsp[-3])); SetType(yyval,N_CALLPROC); SetInfo0(yyval,yyvsp[-4]); SetInfo1(yyval,yyvsp[-2]);
      FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 3333 "vhdlparse.tab.c"
    break;

  case 139:
#line 1035 "vhdlparse.y"
    {  /* subst: T_SIGSUBST/N_ASSIGN info0=ID, info1=signal, info2=exp */
      yyval = yyvsp[-2]; SetLine(yyval,CellLine(yyvsp[-4])); SetInfo0(yyval,yyvsp[-5]); SetInfo1(yyval,yyvsp[-3]); SetInfo2(yyval,yyvsp[-1]);
      FreeTcell(yyvsp[-4]); FreeTcell(yyvsp[0]);
    }
#line 3342 "vhdlparse.tab.c"
    break;

  case 140:
#line 1040 "vhdlparse.y"
    {  /* subst: T_SIGSUBST/N_ASSIGN info0=ID(NULL), info1=signal, info2=exp */
      yyval = yyvsp[-2]; SetLine(yyval,CellLine(yyvsp[-3])); SetInfo0(yyval,NULLCELL); SetInfo1(yyval,yyvsp[-3]); SetInfo2(yyval,yyvsp[-1]);
      FreeTcell(yyvsp[0]);
    }
#line 3351 "vhdlparse.tab.c"
    break;

  case 141:
#line 1045 "vhdlparse.y"
    {  /* subst: T_VARSUBST info0=NULL, info1=signal, info2=exp */
      yyval = yyvsp[-2]; SetLine(yyval,CellLine(yyvsp[-3])); SetInfo0(yyval,NULLCELL); SetInfo1(yyval,yyvsp[-3]); SetInfo2(yyval,yyvsp[-1]);
      FreeTcell(yyvsp[0]);
    }
#line 3360 "vhdlparse.tab.c"
    break;

  case 142:
#line 1053 "vhdlparse.y"
    {  /* if: N_SYNCIF info0=cond, info1=then, info2=else(NULL) */
      yyval = yyvsp[-6]; SetLine(yyval,CellLine(yyvsp[-6])); SetType(yyval,N_SYNCIF); SetInfo0(yyval,yyvsp[-5]); SetInfo1(yyval,yyvsp[-3]); SetInfo2(yyval,NULLCELL);
      FreeTcell(yyvsp[-4]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 3369 "vhdlparse.tab.c"
    break;

  case 143:
#line 1058 "vhdlparse.y"
    {  /* if: N_SYNCIF info0=cond, info1=then(NULL), info2=else(NULL) */
      yyval = yyvsp[-5]; SetLine(yyval,CellLine(yyvsp[-5])); SetType(yyval,N_SYNCIF); SetInfo0(yyval,yyvsp[-4]); SetInfo1(yyval,NULLCELL); SetInfo2(yyval,NULLCELL);
      FreeTcell(yyvsp[-3]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 3378 "vhdlparse.tab.c"
    break;

  case 144:
#line 1066 "vhdlparse.y"
    {  /* if: N_ASYNCIF info0=exp, info1=body1, info2=edge_cond, info3=body2 */
      yyval = yyvsp[-10]; SetLine(yyval,CellLine(yyvsp[-10])); SetType(yyval,N_ASYNCIF); SetInfo0(yyval,yyvsp[-9]); SetInfo1(yyval,yyvsp[-7]); SetInfo2(yyval,yyvsp[-5]); SetInfo3(yyval,yyvsp[-3]);
      FreeTcell(yyvsp[-8]); FreeTcell(yyvsp[-6]); FreeTcell(yyvsp[-4]);
      FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 3388 "vhdlparse.tab.c"
    break;

  case 145:
#line 1072 "vhdlparse.y"
    {  /* if: N_ASYNCIF info0=exp, info1=body1(NULL), info2=edge_cond, info3=body2 */
      yyval = yyvsp[-9]; SetLine(yyval,CellLine(yyvsp[-9])); SetType(yyval,N_ASYNCIF); SetInfo0(yyval,yyvsp[-8]); SetInfo1(yyval,NULLCELL); SetInfo2(yyval,yyvsp[-5]); SetInfo3(yyval,yyvsp[-3]);
      FreeTcell(yyvsp[-7]); FreeTcell(yyvsp[-6]); FreeTcell(yyvsp[-4]);
      FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 3398 "vhdlparse.tab.c"
    break;

  case 146:
#line 1078 "vhdlparse.y"
    {  /* if: N_ASYNCIF info0=exp, info1=body1, info2=edge_cond, info3=body2(NULL) */
      yyval = yyvsp[-9]; SetLine(yyval,CellLine(yyvsp[-9])); SetType(yyval,N_ASYNCIF); SetInfo0(yyval,yyvsp[-8]); SetInfo1(yyval,yyvsp[-6]); SetInfo2(yyval,yyvsp[-4]); SetInfo3(yyval,NULLCELL);
      FreeTcell(yyvsp[-7]); FreeTcell(yyvsp[-5]); FreeTcell(yyvsp[-3]);
      FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 3408 "vhdlparse.tab.c"
    break;

  case 147:
#line 1084 "vhdlparse.y"
    {  /* if: N_ASYNCIF info0=exp, info1=body1(NULL), info2=edge_cond, info3=body2(NULL) */
      yyval = yyvsp[-8]; SetLine(yyval,CellLine(yyvsp[-8])); SetType(yyval,N_ASYNCIF); SetInfo0(yyval,yyvsp[-7]); SetInfo1(yyval,NULLCELL); SetInfo2(yyval,yyvsp[-4]); SetInfo3(yyval,NULLCELL);
      FreeTcell(yyvsp[-6]); FreeTcell(yyvsp[-5]); FreeTcell(yyvsp[-3]);
      FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 3418 "vhdlparse.tab.c"
    break;

  case 148:
#line 1093 "vhdlparse.y"
    {  /* if: T_IF info0=cond, info1=then, info2=else */
      yyval = yyvsp[-4]; SetLine(yyval,CellLine(yyvsp[-4])); SetInfo0(yyval,yyvsp[-3]); SetInfo1(yyval,yyvsp[-1]); SetInfo2(yyval,yyvsp[0]);
      FreeTcell(yyvsp[-2]);
    }
#line 3427 "vhdlparse.tab.c"
    break;

  case 149:
#line 1098 "vhdlparse.y"
    {  /* if: T_IF info0=cond, info1=then, info2=else(NULL) */
      yyval = yyvsp[-6]; SetLine(yyval,CellLine(yyvsp[-6])); SetInfo0(yyval,yyvsp[-5]); SetInfo1(yyval,yyvsp[-3]); SetInfo2(yyval,NULLCELL);
      FreeTcell(yyvsp[-4]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 3436 "vhdlparse.tab.c"
    break;

  case 150:
#line 1103 "vhdlparse.y"
    {  /* if: T_IF info0=cond, info1=then(NULL), info2=else */
      yyval = yyvsp[-3]; SetLine(yyval,CellLine(yyvsp[-3])); SetInfo0(yyval,yyvsp[-2]); SetInfo1(yyval,NULLCELL); SetInfo2(yyval,yyvsp[0]);
      FreeTcell(yyvsp[-1]);
    }
#line 3445 "vhdlparse.tab.c"
    break;

  case 151:
#line 1108 "vhdlparse.y"
    {  /* if: T_IF info0=cond, info1=then(NULL), info2=else(NULL) */
      yyval = yyvsp[-5]; SetLine(yyval,CellLine(yyvsp[-5])); SetInfo0(yyval,yyvsp[-4]); SetInfo1(yyval,NULLCELL); SetInfo2(yyval,NULLCELL);
      FreeTcell(yyvsp[-3]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 3454 "vhdlparse.tab.c"
    break;

  case 152:
#line 1116 "vhdlparse.y"
    {  /* elsif: T_ELSIF info0=cond, info1=then, info2=else */
      yyval = yyvsp[-4]; SetLine(yyval,CellLine(yyvsp[-4])); SetInfo0(yyval,yyvsp[-3]); SetInfo1(yyval,yyvsp[-1]); SetInfo2(yyval,yyvsp[0]);
      FreeTcell(yyvsp[-2]);
    }
#line 3463 "vhdlparse.tab.c"
    break;

  case 153:
#line 1121 "vhdlparse.y"
    {  /* elsif: T_ELSIF info0=cond, info1=then, info2=else(NULL) */
      yyval = yyvsp[-6]; SetLine(yyval,CellLine(yyvsp[-6])); SetInfo0(yyval,yyvsp[-5]); SetInfo1(yyval,yyvsp[-3]); SetInfo2(yyval,NULLCELL);
      FreeTcell(yyvsp[-4]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 3472 "vhdlparse.tab.c"
    break;

  case 154:
#line 1126 "vhdlparse.y"
    {  /* elsif: T_ELSIF info0=cond, info1=then(NULL), info2=else */
      yyval = yyvsp[-3]; SetLine(yyval,CellLine(yyvsp[-3])); SetInfo0(yyval,yyvsp[-2]); SetInfo1(yyval,NULLCELL); SetInfo2(yyval,yyvsp[0]);
      FreeTcell(yyvsp[-1]);
    }
#line 3481 "vhdlparse.tab.c"
    break;

  case 155:
#line 1131 "vhdlparse.y"
    {  /* elsif: T_ELSIF info0=cond, info1=then(NULL), info2=else(NULL) */
      yyval = yyvsp[-5]; SetLine(yyval,CellLine(yyvsp[-5])); SetInfo0(yyval,yyvsp[-4]); SetInfo1(yyval,NULLCELL); SetInfo2(yyval,NULLCELL);
      FreeTcell(yyvsp[-3]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 3490 "vhdlparse.tab.c"
    break;

  case 156:
#line 1136 "vhdlparse.y"
    {  /* else: T_ELSE info0=else */
      yyval = yyvsp[-4]; SetLine(yyval,CellLine(yyvsp[-4])); SetInfo0(yyval,yyvsp[-3]);
      FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 3499 "vhdlparse.tab.c"
    break;

  case 157:
#line 1141 "vhdlparse.y"
    {  /* else: T_ELSE info0=else(NULL) */
      yyval = yyvsp[-3]; SetLine(yyval,CellLine(yyvsp[0])); SetInfo0(yyval,NULLCELL);
      FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 3508 "vhdlparse.tab.c"
    break;

  case 158:
#line 1149 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetLine(yyval,CellLine(yyvsp[-2])); 
      FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[0]);
    }
#line 3517 "vhdlparse.tab.c"
    break;

  case 159:
#line 1154 "vhdlparse.y"
    {  /* event: T_EVENT info0=exp */
      yyval = yyvsp[-4]; SetLine(yyval,CellLine(yyvsp[0])); SetInfo0(yyval,yyvsp[-1]); SetInfo0(yyvsp[-1],yyvsp[-2]); SetInfo1(yyvsp[-1],yyvsp[0]);
      FreeTcell(yyvsp[-3]);
    }
#line 3526 "vhdlparse.tab.c"
    break;

  case 160:
#line 1159 "vhdlparse.y"
    {  /* event: T_EVENT info0=exp */
      yyval = yyvsp[0]; SetLine(yyval,CellLine(yyvsp[-2])); SetInfo0(yyval,yyvsp[-2]);
      FreeTcell(yyvsp[-1]);
    }
#line 3535 "vhdlparse.tab.c"
    break;

  case 161:
#line 1164 "vhdlparse.y"
    {  /* event: T_EVENT info0=id */
      yyval = yyvsp[-3]; SetLine(yyval,CellLine(yyvsp[-3])); SetInfo0(yyval,yyvsp[-1]);
      FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[0]);
    }
#line 3544 "vhdlparse.tab.c"
    break;

  case 162:
#line 1169 "vhdlparse.y"
    {  /* event: T_EVENT info0=id */
      yyval = yyvsp[-3]; SetLine(yyval,CellLine(yyvsp[-3])); SetInfo0(yyval,yyvsp[-1]);
      FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[0]);
    }
#line 3553 "vhdlparse.tab.c"
    break;

  case 163:
#line 1177 "vhdlparse.y"
    {  /* case: T_CASE info0=sig, info1=caseitem */
      yyval = yyvsp[-6]; SetLine(yyval,CellLine(yyvsp[-6])); SetInfo0(yyval,yyvsp[-5]); SetInfo1(yyval,yyvsp[-3]);
      FreeTcell(yyvsp[-4]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 3562 "vhdlparse.tab.c"
    break;

  case 164:
#line 1182 "vhdlparse.y"
    {  /* case: T_CASE info0=sig, info1=caseitem */
      yyval = yyvsp[-8]; SetLine(yyval,CellLine(yyvsp[-8])); SetInfo0(yyval,yyvsp[-6]); SetInfo1(yyval,yyvsp[-3]);
       FreeTcell(yyvsp[-7]); FreeTcell(yyvsp[-5]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 3571 "vhdlparse.tab.c"
    break;

  case 165:
#line 1190 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetNext(yyval,yyvsp[0]);
    }
#line 3579 "vhdlparse.tab.c"
    break;

  case 166:
#line 1194 "vhdlparse.y"
    {
      yyval = yyvsp[0]; SetNext(yyval,NULLCELL);
    }
#line 3587 "vhdlparse.tab.c"
    break;

  case 167:
#line 1201 "vhdlparse.y"
    {  /* case: N_CASECOND info0=exp, info1=body */
      yyval = yyvsp[-3]; SetLine(yyval,CellLine(yyvsp[-3])); SetType(yyval,N_CASECOND); SetInfo0(yyval,yyvsp[-2]); SetInfo1(yyval,yyvsp[0]);
      FreeTcell(yyvsp[-1]);
    }
#line 3596 "vhdlparse.tab.c"
    break;

  case 168:
#line 1206 "vhdlparse.y"
    {  /* case: N_CASECOND info0=exp, info1=body */
      yyval = yyvsp[-3]; SetLine(yyval,CellLine(yyvsp[-1])); SetType(yyval,N_CASECOND); SetInfo0(yyval,yyvsp[-2]); SetInfo1(yyval,yyvsp[0]);
      FreeTcell(yyvsp[-1]);
    }
#line 3605 "vhdlparse.tab.c"
    break;

  case 169:
#line 1211 "vhdlparse.y"
    {  /* case: N_CASECOND info0=exp, info1=body(NULL) */
      yyval = yyvsp[-2]; SetLine(yyval,CellLine(yyvsp[-2])); SetType(yyval,N_CASECOND); SetInfo0(yyval,yyvsp[-1]); SetInfo1(yyval,NULLCELL);
      FreeTcell(yyvsp[0]);
    }
#line 3614 "vhdlparse.tab.c"
    break;

  case 170:
#line 1216 "vhdlparse.y"
    {  /* case: N_CASECOND info0=exp, info1=body(NULL) */
      yyval = yyvsp[-2]; SetLine(yyval,CellLine(yyvsp[0])); SetType(yyval,N_CASECOND); SetInfo0(yyval,yyvsp[-1]); SetInfo1(yyval,NULLCELL);
      FreeTcell(yyvsp[0]);
    }
#line 3623 "vhdlparse.tab.c"
    break;

  case 171:
#line 1224 "vhdlparse.y"
    {
      yyval = yyvsp[-2]; SetNext(yyval,yyvsp[0]);
      FreeTcell(yyvsp[-1]);
    }
#line 3632 "vhdlparse.tab.c"
    break;

  case 172:
#line 1229 "vhdlparse.y"
    {
      yyval = yyvsp[0]; SetNext(yyval,NULLCELL);
    }
#line 3640 "vhdlparse.tab.c"
    break;

  case 173:
#line 1236 "vhdlparse.y"
    {  /* when: N_CONDASSIGN info0=ID(label), info1=sig, info2=body */
      yyval = yyvsp[-1]; SetLine(yyval,CellLine(yyvsp[-3])); SetType(yyval,N_CONDASSIGN); SetInfo0(yyval,yyvsp[-4]); SetInfo1(yyval,yyvsp[-2]); SetInfo2(yyval,yyvsp[0]);
      FreeTcell(yyvsp[-3]);
    }
#line 3649 "vhdlparse.tab.c"
    break;

  case 174:
#line 1241 "vhdlparse.y"
    {  /* when: N_CONDASSIGN info0=ID(label,NULL), info1=sig, info2=body */
      yyval = yyvsp[-1]; SetLine(yyval,CellLine(yyvsp[-2])); SetType(yyval,N_CONDASSIGN); SetInfo0(yyval,NULLCELL); SetInfo1(yyval,yyvsp[-2]); SetInfo2(yyval,yyvsp[0]);
    }
#line 3657 "vhdlparse.tab.c"
    break;

  case 175:
#line 1248 "vhdlparse.y"
    {  /* when: N_WHENCOND info0=substexp, info1=condexp, info2=else */
      yyval = yyvsp[-3]; SetLine(yyval,CellLine(yyvsp[-4])); SetType(yyval,N_WHENCOND); SetInfo0(yyval,yyvsp[-4]); SetInfo1(yyval,yyvsp[-2]); SetInfo2(yyval,yyvsp[0]);
      FreeTcell(yyvsp[-1]);
    }
#line 3666 "vhdlparse.tab.c"
    break;

  case 176:
#line 1253 "vhdlparse.y"
    {  /* when: N_WHENCOND info0=substexp, info1=condexp(NULL), info2=else(NULL) */
      yyval = yyvsp[0]; SetLine(yyval,CellLine(yyvsp[-1])); SetType(yyval,N_WHENCOND); SetInfo0(yyval,yyvsp[-1]); SetInfo1(yyval,NULLCELL); SetInfo2(yyval,NULLCELL);
    }
#line 3674 "vhdlparse.tab.c"
    break;

  case 177:
#line 1260 "vhdlparse.y"
    {  /* when: N_SELASSIGN info0=ID(label), info1=exp, info2=sig, info3=body */
      yyval = yyvsp[-5]; SetLine(yyval,CellLine(yyvsp[-5])); SetType(yyval,N_SELASSIGN); SetInfo0(yyval,yyvsp[-7]); SetInfo1(yyval,yyvsp[-4]); SetInfo2(yyval,yyvsp[-2]); SetInfo3(yyval,yyvsp[0]);
      FreeTcell(yyvsp[-6]); FreeTcell(yyvsp[-3]); FreeTcell(yyvsp[-1]);
    }
#line 3683 "vhdlparse.tab.c"
    break;

  case 178:
#line 1265 "vhdlparse.y"
    {  /* when: N_SELASSIGN info0=ID(label,NULL), info1=exp, info2=sig, info3=body */
      yyval = yyvsp[-5]; SetLine(yyval,CellLine(yyvsp[-5])); SetType(yyval,N_SELASSIGN); SetInfo0(yyval,NULLCELL); SetInfo1(yyval,yyvsp[-4]); SetInfo2(yyval,yyvsp[-2]); SetInfo3(yyval,yyvsp[0]);
      FreeTcell(yyvsp[-3]); FreeTcell(yyvsp[-1]);
    }
#line 3692 "vhdlparse.tab.c"
    break;

  case 179:
#line 1273 "vhdlparse.y"
    {  /* when: N_SELCOND info0=substexp, info1=condexp, info2=else */
      yyval = yyvsp[-3]; SetLine(yyval,CellLine(yyvsp[-4])); SetType(yyval,N_SELCOND); SetInfo0(yyval,yyvsp[-4]); SetInfo1(yyval,yyvsp[-2]); SetInfo2(yyval,yyvsp[0]);
      FreeTcell(yyvsp[-1]);
    }
#line 3701 "vhdlparse.tab.c"
    break;

  case 180:
#line 1278 "vhdlparse.y"
    {  /* when: N_SELCOND info0=substexp, info1=condexp(NULL), info2=else(NULL) */
      yyval = yyvsp[-2]; SetLine(yyval,CellLine(yyvsp[-3])); SetType(yyval,N_SELCOND); SetInfo0(yyval,yyvsp[-3]); SetInfo1(yyval,NULLCELL); SetInfo2(yyval,NULLCELL);
      FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 3710 "vhdlparse.tab.c"
    break;

  case 181:
#line 1286 "vhdlparse.y"
    {  /* portmap: N_PORTMAP info0=ID(label), info1=ID(module), info2=generic, info3=port */
      yyval = yyvsp[-12]; SetLine(yyval,CellLine(yyvsp[-8])); SetType(yyval,N_PORTMAP); SetInfo0(yyval,yyvsp[-13]); SetInfo1(yyval,yyvsp[-11]); SetInfo2(yyval,yyvsp[-7]); SetInfo3(yyval,yyvsp[-2]);
      FreeTcell(yyvsp[-10]); FreeTcell(yyvsp[-9]); FreeTcell(yyvsp[-8]); FreeTcell(yyvsp[-6]);
      FreeTcell(yyvsp[-5]); FreeTcell(yyvsp[-4]); FreeTcell(yyvsp[-3]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 3720 "vhdlparse.tab.c"
    break;

  case 182:
#line 1292 "vhdlparse.y"
    {  /* portmap: N_PORTMAP info0=ID(label), info1=ID(module), info2=generic(NULL), info3=port */
      yyval = yyvsp[-7]; SetLine(yyval,CellLine(yyvsp[-3])); SetType(yyval,N_PORTMAP); SetInfo0(yyval,yyvsp[-8]); SetInfo1(yyval,yyvsp[-6]); SetInfo2(yyval,NULLCELL); SetInfo3(yyval,yyvsp[-2]);
      FreeTcell(yyvsp[-5]); FreeTcell(yyvsp[-4]); FreeTcell(yyvsp[-3]); FreeTcell(yyvsp[-1]);
      FreeTcell(yyvsp[0]);
    }
#line 3730 "vhdlparse.tab.c"
    break;

  case 183:
#line 1301 "vhdlparse.y"
    {
      yyval = yyvsp[-2]; SetLine(yyval,CellLine(yyvsp[-2])); SetNext(yyval,yyvsp[0]);
      FreeTcell(yyvsp[-1]);
    }
#line 3739 "vhdlparse.tab.c"
    break;

  case 184:
#line 1306 "vhdlparse.y"
    {
      yyval = yyvsp[0]; SetNext(yyval,NULLCELL);
    }
#line 3747 "vhdlparse.tab.c"
    break;

  case 185:
#line 1313 "vhdlparse.y"
    {  /* portmap: N_PORTITEMNAME info0=sig, info1=exp */
      yyval = yyvsp[-1]; SetLine(yyval,CellLine(yyvsp[-2])); SetType(yyval,N_PORTITEMNAME); SetInfo0(yyval,yyvsp[-2]); SetInfo1(yyval,yyvsp[0]);
    }
#line 3755 "vhdlparse.tab.c"
    break;

  case 186:
#line 1317 "vhdlparse.y"
    {  /* portmap: (PORTITEMORDER) */
      yyval = yyvsp[0];
    }
#line 3763 "vhdlparse.tab.c"
    break;

  case 187:
#line 1324 "vhdlparse.y"
    {  /* block: T_BLOCK info0=ID(label), info1=declaration, info2=body */
      yyval = yyvsp[-7]; SetLine(yyval,CellLine(yyvsp[-7])); SetInfo0(yyval,yyvsp[-9]); SetInfo1(yyval,yyvsp[-6]); SetInfo2(yyval,yyvsp[-4]);
      FreeTcell(yyvsp[-8]); FreeTcell(yyvsp[-5]); FreeTcell(yyvsp[-3]);
      FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 3773 "vhdlparse.tab.c"
    break;

  case 188:
#line 1330 "vhdlparse.y"
    {  /* block: T_BLOCK info0=ID(label), info1=declaration, info2=body */
      yyval = yyvsp[-6]; SetLine(yyval,CellLine(yyvsp[-6])); SetInfo0(yyval,yyvsp[-8]); SetInfo1(yyval,yyvsp[-5]); SetInfo2(yyval,yyvsp[-3]);
      FreeTcell(yyvsp[-7]); FreeTcell(yyvsp[-4]); FreeTcell(yyvsp[-2]);
      FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 3783 "vhdlparse.tab.c"
    break;

  case 189:
#line 1336 "vhdlparse.y"
    {  /* block: T_BLOCK info0=ID(label,NULL), info1=declaration, info2=body */
      yyval = yyvsp[-7]; SetLine(yyval,CellLine(yyvsp[-7])); SetInfo0(yyval,NULLCELL); SetInfo1(yyval,yyvsp[-6]); SetInfo2(yyval,yyvsp[-4]);
      FreeTcell(yyvsp[-5]); FreeTcell(yyvsp[-3]); FreeTcell(yyvsp[-2]);
      FreeTcell(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 3793 "vhdlparse.tab.c"
    break;

  case 190:
#line 1342 "vhdlparse.y"
    {  /* block: T_BLOCK info0=ID(label,NULL), info1=declaration, info2=body */
      yyval = yyvsp[-6]; SetLine(yyval,CellLine(yyvsp[-6])); SetInfo0(yyval,NULLCELL); SetInfo1(yyval,yyvsp[-5]); SetInfo2(yyval,yyvsp[-3]);
      FreeTcell(yyvsp[-4]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[-1]);
      FreeTcell(yyvsp[0]);
    }
#line 3803 "vhdlparse.tab.c"
    break;

  case 191:
#line 1351 "vhdlparse.y"
    {  /* signal list */
      yyval = yyvsp[-2]; SetLine(yyval,CellLine(yyvsp[-2])); SetNext(yyval,yyvsp[0]);
      FreeTcell(yyvsp[-1]);
    }
#line 3812 "vhdlparse.tab.c"
    break;

  case 192:
#line 1356 "vhdlparse.y"
    {
      yyval = yyvsp[0]; SetNext(yyval,NULLCELL);
    }
#line 3820 "vhdlparse.tab.c"
    break;

  case 193:
#line 1363 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetLine(yyval,CellLine(yyvsp[0])); SetInfo0(yyval,yyvsp[-2]); SetInfo1(yyval,yyvsp[0]);
    }
#line 3828 "vhdlparse.tab.c"
    break;

  case 194:
#line 1367 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetLine(yyval,CellLine(yyvsp[0])); SetInfo0(yyval,yyvsp[-2]); SetInfo1(yyval,yyvsp[0]);
    }
#line 3836 "vhdlparse.tab.c"
    break;

  case 195:
#line 1371 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetLine(yyval,CellLine(yyvsp[0])); SetInfo0(yyval,yyvsp[-2]); SetInfo1(yyval,yyvsp[0]);
    }
#line 3844 "vhdlparse.tab.c"
    break;

  case 196:
#line 1375 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetLine(yyval,CellLine(yyvsp[0])); SetInfo0(yyval,yyvsp[-2]); SetInfo1(yyval,yyvsp[0]);
    }
#line 3852 "vhdlparse.tab.c"
    break;

  case 197:
#line 1379 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetLine(yyval,CellLine(yyvsp[0])); SetInfo0(yyval,yyvsp[-2]); SetInfo1(yyval,yyvsp[0]);
    }
#line 3860 "vhdlparse.tab.c"
    break;

  case 198:
#line 1383 "vhdlparse.y"
    {
      yyval = yyvsp[0];
    }
#line 3868 "vhdlparse.tab.c"
    break;

  case 199:
#line 1390 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetLine(yyval,CellLine(yyvsp[0])); SetInfo0(yyval,yyvsp[-2]); SetInfo1(yyval,yyvsp[0]);
    }
#line 3876 "vhdlparse.tab.c"
    break;

  case 200:
#line 1394 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetLine(yyval,CellLine(yyvsp[0])); SetInfo0(yyval,yyvsp[-2]); SetInfo1(yyval,yyvsp[0]);
    }
#line 3884 "vhdlparse.tab.c"
    break;

  case 201:
#line 1398 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetLine(yyval,CellLine(yyvsp[0])); SetType(yyval,N_GE); SetInfo0(yyval,yyvsp[-2]); SetInfo1(yyval,yyvsp[0]);
    }
#line 3892 "vhdlparse.tab.c"
    break;

  case 202:
#line 1402 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetLine(yyval,CellLine(yyvsp[0])); SetInfo0(yyval,yyvsp[-2]); SetInfo1(yyval,yyvsp[0]);
    }
#line 3900 "vhdlparse.tab.c"
    break;

  case 203:
#line 1406 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetLine(yyval,CellLine(yyvsp[0])); SetInfo0(yyval,yyvsp[-2]); SetInfo1(yyval,yyvsp[0]);
    }
#line 3908 "vhdlparse.tab.c"
    break;

  case 204:
#line 1410 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetLine(yyval,CellLine(yyvsp[0])); SetInfo0(yyval,yyvsp[-2]); SetInfo1(yyval,yyvsp[0]);
    }
#line 3916 "vhdlparse.tab.c"
    break;

  case 205:
#line 1414 "vhdlparse.y"
    {
      yyval = yyvsp[0];
    }
#line 3924 "vhdlparse.tab.c"
    break;

  case 206:
#line 1421 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetLine(yyval,CellLine(yyvsp[0])); SetInfo0(yyval,yyvsp[-2]); SetInfo1(yyval,yyvsp[0]);
    }
#line 3932 "vhdlparse.tab.c"
    break;

  case 207:
#line 1425 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetLine(yyval,CellLine(yyvsp[0])); SetInfo0(yyval,yyvsp[-2]); SetInfo1(yyval,yyvsp[0]);
    }
#line 3940 "vhdlparse.tab.c"
    break;

  case 208:
#line 1429 "vhdlparse.y"
    {
      yyval = yyvsp[0];
    }
#line 3948 "vhdlparse.tab.c"
    break;

  case 209:
#line 1436 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetLine(yyval,CellLine(yyvsp[0])); SetInfo0(yyval,yyvsp[-2]); SetInfo1(yyval,yyvsp[0]);
    }
#line 3956 "vhdlparse.tab.c"
    break;

  case 210:
#line 1440 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetLine(yyval,CellLine(yyvsp[0])); SetInfo0(yyval,yyvsp[-2]); SetInfo1(yyval,yyvsp[0]);
    }
#line 3964 "vhdlparse.tab.c"
    break;

  case 211:
#line 1444 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetLine(yyval,CellLine(yyvsp[0])); SetInfo0(yyval,yyvsp[-2]); SetInfo1(yyval,yyvsp[0]);
    }
#line 3972 "vhdlparse.tab.c"
    break;

  case 212:
#line 1448 "vhdlparse.y"
    {
      char  *newstr;
      yyval = yyvsp[0]; FreeTcell(yyvsp[-1]);
      newstr = (char *)malloc(sizeof (char) * (strlen(CellStr(yyvsp[0])) + 2));
      sprintf(newstr, "-%s", CellStr(yyvsp[0]));
      free(CellStr(yyvsp[0]));
      CellStr(yyvsp[0]) = newstr;
    }
#line 3985 "vhdlparse.tab.c"
    break;

  case 213:
#line 1457 "vhdlparse.y"
    {
      yyval = yyvsp[0]; FreeTcell(yyvsp[-1]);
    }
#line 3993 "vhdlparse.tab.c"
    break;

  case 214:
#line 1461 "vhdlparse.y"
    {
      yyval = yyvsp[0];
    }
#line 4001 "vhdlparse.tab.c"
    break;

  case 215:
#line 1468 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetLine(yyval,CellLine(yyvsp[0])); SetInfo0(yyval,yyvsp[-2]); SetInfo1(yyval,yyvsp[0]);
    }
#line 4009 "vhdlparse.tab.c"
    break;

  case 216:
#line 1472 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetLine(yyval,CellLine(yyvsp[0])); SetInfo0(yyval,yyvsp[-2]); SetInfo1(yyval,yyvsp[0]);
    }
#line 4017 "vhdlparse.tab.c"
    break;

  case 217:
#line 1476 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetLine(yyval,CellLine(yyvsp[0])); SetInfo0(yyval,yyvsp[-2]); SetInfo1(yyval,yyvsp[0]);
    }
#line 4025 "vhdlparse.tab.c"
    break;

  case 218:
#line 1480 "vhdlparse.y"
    {
      yyval = yyvsp[0];
    }
#line 4033 "vhdlparse.tab.c"
    break;

  case 219:
#line 1487 "vhdlparse.y"
    {
      yyval = yyvsp[-1]; SetLine(yyval,CellLine(yyvsp[0])); SetInfo0(yyval,yyvsp[0]);
    }
#line 4041 "vhdlparse.tab.c"
    break;

  case 220:
#line 1491 "vhdlparse.y"
    {
      yyval = yyvsp[0];
    }
#line 4049 "vhdlparse.tab.c"
    break;

  case 221:
#line 1498 "vhdlparse.y"
    {
      yyval = yyvsp[0];
    }
#line 4057 "vhdlparse.tab.c"
    break;

  case 222:
#line 1502 "vhdlparse.y"
    {
      yyval = yyvsp[0];
    }
#line 4065 "vhdlparse.tab.c"
    break;

  case 223:
#line 1506 "vhdlparse.y"
    {
      yyval = yyvsp[0];
    }
#line 4073 "vhdlparse.tab.c"
    break;

  case 224:
#line 1510 "vhdlparse.y"
    {
      yyval = yyvsp[0];
    }
#line 4081 "vhdlparse.tab.c"
    break;

  case 225:
#line 1514 "vhdlparse.y"
    {
      yyval = yyvsp[0];
    }
#line 4089 "vhdlparse.tab.c"
    break;

  case 226:
#line 1518 "vhdlparse.y"
    {
      yyval = yyvsp[0];
    }
#line 4097 "vhdlparse.tab.c"
    break;

  case 227:
#line 1522 "vhdlparse.y"
    {  /* N_OTHERS info0=value */
      yyval = yyvsp[-3]; SetLine(yyval,CellLine(yyvsp[0])); SetType(yyval,N_OTHERS); SetInfo0(yyval,yyvsp[-1]);
      FreeTcell(yyvsp[-4]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[0]);
    }
#line 4106 "vhdlparse.tab.c"
    break;

  case 228:
#line 1527 "vhdlparse.y"
    {  /* N_OTHERS info0=value */
      yyval = yyvsp[-3]; SetLine(yyval,CellLine(yyvsp[0])); SetType(yyval,N_OTHERS); SetInfo0(yyval,yyvsp[-1]);
      FreeTcell(yyvsp[-4]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[0]);
    }
#line 4115 "vhdlparse.tab.c"
    break;

  case 229:
#line 1532 "vhdlparse.y"
    {  /* N_OTHERS info0=value */
      yyval = yyvsp[-3]; SetLine(yyval,CellLine(yyvsp[0])); SetType(yyval,N_OTHERS); SetInfo0(yyval,yyvsp[-1]);
      FreeTcell(yyvsp[-4]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[0]);
    }
#line 4124 "vhdlparse.tab.c"
    break;

  case 230:
#line 1537 "vhdlparse.y"
    {  /* N_CALLFUNC info0=ID, info1=port */
      yyval = yyvsp[-2]; SetLine(yyval,CellLine(yyvsp[0])); SetType(yyval,N_CALLFUNC); SetInfo0(yyval,yyvsp[-3]); SetInfo1(yyval,yyvsp[-1]);
      FreeTcell(yyvsp[0]);
    }
#line 4133 "vhdlparse.tab.c"
    break;

  case 231:
#line 1542 "vhdlparse.y"
    {  /* (conv_integer) */
      yyval = yyvsp[-1]; SetLine(yyval,CellLine(yyvsp[0])); 
      FreeTcell(yyvsp[-3]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[0]);
    }
#line 4142 "vhdlparse.tab.c"
    break;

  case 232:
#line 1547 "vhdlparse.y"
    {  /* (signed) */
      yyval = yyvsp[-1]; SetLine(yyval,CellLine(yyvsp[0])); 
      FreeTcell(yyvsp[-3]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[0]);
    }
#line 4151 "vhdlparse.tab.c"
    break;

  case 233:
#line 1552 "vhdlparse.y"
    {  /* (unsigned) */
      yyval = yyvsp[-1]; SetLine(yyval,CellLine(yyvsp[0])); 
      FreeTcell(yyvsp[-3]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[0]);
    }
#line 4160 "vhdlparse.tab.c"
    break;

  case 234:
#line 1557 "vhdlparse.y"
    {  /* (unsigned) */
      yyval = yyvsp[-1]; SetLine(yyval,CellLine(yyvsp[0])); 
      FreeTcell(yyvsp[-3]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[0]);
    }
#line 4169 "vhdlparse.tab.c"
    break;

  case 235:
#line 1562 "vhdlparse.y"
    {  /* (to_stdlogicvector) */
      yyval = yyvsp[-1]; SetLine(yyval,CellLine(yyvsp[0])); 
      FreeTcell(yyvsp[-3]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[0]);
    }
#line 4178 "vhdlparse.tab.c"
    break;

  case 236:
#line 1567 "vhdlparse.y"
    {  /* (to_integer) */
      yyval = yyvsp[-1]; SetLine(yyval,CellLine(yyvsp[0])); 
      FreeTcell(yyvsp[-3]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[0]);
    }
#line 4187 "vhdlparse.tab.c"
    break;

  case 237:
#line 1572 "vhdlparse.y"
    {  /* (to_unsigned) */
      yyval = yyvsp[-3]; SetLine(yyval,CellLine(yyvsp[0])); 
      FreeTcell(yyvsp[-5]); FreeTcell(yyvsp[-4]); FreeTcell(yyvsp[-2]);
      FreeTree(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 4197 "vhdlparse.tab.c"
    break;

  case 238:
#line 1578 "vhdlparse.y"
    {  /* (to_signed) */
      yyval = yyvsp[-3]; SetLine(yyval,CellLine(yyvsp[0])); 
      FreeTcell(yyvsp[-5]); FreeTcell(yyvsp[-4]); FreeTcell(yyvsp[-2]);
      FreeTree(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 4207 "vhdlparse.tab.c"
    break;

  case 239:
#line 1584 "vhdlparse.y"
    {  /* (conv_std_logicvector) */
      yyval = yyvsp[-3]; SetLine(yyval,CellLine(yyvsp[0])); 
      FreeTcell(yyvsp[-5]); FreeTcell(yyvsp[-4]); FreeTcell(yyvsp[-2]);
      FreeTree(yyvsp[-1]); FreeTcell(yyvsp[0]);
    }
#line 4217 "vhdlparse.tab.c"
    break;

  case 240:
#line 1590 "vhdlparse.y"
    {  /* (conv_integer) */
      yyval = yyvsp[-1]; SetLine(yyval,CellLine(yyvsp[0])); 
      FreeTcell(yyvsp[-3]); FreeTcell(yyvsp[-2]); FreeTcell(yyvsp[0]);
    }
#line 4226 "vhdlparse.tab.c"
    break;

  case 241:
#line 1595 "vhdlparse.y"
    {  /* N_STDVECTOR info0=ID, info1=width */
      yyval = yyvsp[-2]; SetLine(yyval,CellLine(yyvsp[0])); SetType(yyval,N_STDVECTOR); SetInfo0(yyval,yyvsp[-3]); SetInfo1(yyval,yyvsp[-1]);
      FreeTcell(yyvsp[0]);
    }
#line 4235 "vhdlparse.tab.c"
    break;

  case 242:
#line 1600 "vhdlparse.y"
    {  /* N_STDELEMENT info0=ID, info1=exp */
      if(SearchSigList(ParseSigListTop, GetSigName(yyvsp[-3])) != NULLSIG)
      {
        yyval = yyvsp[-2]; SetLine(yyval,CellLine(yyvsp[0])); SetType(yyval,N_STDELEMENT); SetInfo0(yyval,yyvsp[-3]); SetInfo1(yyval,yyvsp[-1]);
      }
      else
      {
        yyval = yyvsp[-2]; SetLine(yyval,CellLine(yyvsp[0])); SetType(yyval,N_CALLFUNC); SetInfo0(yyval,yyvsp[-3]); SetInfo1(yyval,yyvsp[-1]);  
      }
      FreeTcell(yyvsp[0]);
    }
#line 4251 "vhdlparse.tab.c"
    break;

  case 243:
#line 1612 "vhdlparse.y"
    {
      yyval = yyvsp[0];
    }
#line 4259 "vhdlparse.tab.c"
    break;

  case 244:
#line 1616 "vhdlparse.y"
    {  /* N_LISTARRAY info0=list */
      yyval = yyvsp[-2]; SetLine(yyval,CellLine(yyvsp[0])); SetType(yyval,N_LISTARRAY); SetInfo0(yyval,yyvsp[-1]);
      FreeTcell(yyvsp[0]);
    }
#line 4268 "vhdlparse.tab.c"
    break;

  case 245:
#line 1621 "vhdlparse.y"
    {  /* N_PAREN info0=exp */
      yyval = yyvsp[-2]; SetLine(yyval,CellLine(yyvsp[0])); SetType(yyval,N_PAREN); SetInfo0(yyval,yyvsp[-1]);
      FreeTcell(yyvsp[0]);
    }
#line 4277 "vhdlparse.tab.c"
    break;

  case 246:
#line 1629 "vhdlparse.y"
    {  /* N_STDVECTOR info0=ID, info1=width */
      yyval = yyvsp[-2]; SetLine(yyval,CellLine(yyvsp[0])); SetType(yyval,N_STDVECTOR); SetInfo0(yyval,yyvsp[-3]); SetInfo1(yyval,yyvsp[-1]);
      FreeTcell(yyvsp[0]);
    }
#line 4286 "vhdlparse.tab.c"
    break;

  case 247:
#line 1634 "vhdlparse.y"
    {  /* N_STDELEMENT info0=ID, info1=exp */
      yyval = yyvsp[-2]; SetLine(yyval,CellLine(yyvsp[0])); SetType(yyval,N_STDELEMENT); SetInfo0(yyval,yyvsp[-3]); SetInfo1(yyval,yyvsp[-1]);
      FreeTcell(yyvsp[0]);
    }
#line 4295 "vhdlparse.tab.c"
    break;

  case 248:
#line 1639 "vhdlparse.y"
    {
      yyval = yyvsp[0];
    }
#line 4303 "vhdlparse.tab.c"
    break;

  case 249:
#line 1643 "vhdlparse.y"
    {  /* N_LISTARRAY info0=list */
      yyval = yyvsp[-2]; SetLine(yyval,CellLine(yyvsp[0])); SetType(yyval,N_LISTARRAY); SetInfo0(yyval,yyvsp[-1]);
      FreeTcell(yyvsp[0]);
    }
#line 4312 "vhdlparse.tab.c"
    break;


#line 4316 "vhdlparse.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
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
                  yystos[+*yyssp], yyvsp);
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
  return yyresult;
}
#line 1649 "vhdlparse.y"


void yyerror(char *s)
{
  ParseError = True;
  if (*s == '$')
    fprintf(stderr, "ERROR: in line %d, %s\n", yylexlinenum, s + 1);
  else
    fprintf(stderr, "ERROR: parse error in line %d\n", yylexlinenum);
    return;
}

// end of file
