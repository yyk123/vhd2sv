/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
