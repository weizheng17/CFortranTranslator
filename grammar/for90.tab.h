/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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

#ifndef YY_YY_FOR90_TAB_H_INCLUDED
# define YY_YY_FOR90_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     YY_REQ_MORE = 258,
     YY_GT = 259,
     YY_GE = 260,
     YY_EQ = 261,
     YY_LE = 262,
     YY_LT = 263,
     YY_NEQ = 264,
     YY_NEQV = 265,
     YY_EQV = 266,
     YY_ANDAND = 267,
     YY_OROR = 268,
     YY_NOT = 269,
     YY_POWER = 270,
     YY_DOUBLECOLON = 271,
     YY_NEG = 272,
     YY_INTEGER = 273,
     YY_FLOAT = 274,
     YY_WORD = 275,
     YY_OPERATOR = 276,
     YY_STRING = 277,
     YY_ILLEGAL = 278,
     YY_COMPLEX = 279,
     YY_TRUE = 280,
     YY_FALSE = 281,
     YY_IF = 282,
     YY_THEN = 283,
     YY_ELSE = 284,
     YY_ELSEIF = 285,
     YY_END = 286,
     YY_DO = 287,
     YY_CONTINUE = 288,
     YY_WHILE = 289,
     YY_WHERE = 290,
     YY_CASE = 291,
     YY_PROGRAM = 292,
     YY_FUNCTION = 293,
     YY_RECURSIVE = 294,
     YY_RESULT = 295,
     YY_SUBROUTINE = 296,
     YY_MODULE = 297,
     YY_BLOCK = 298,
     YY_IMPLICIT = 299,
     YY_NONE = 300,
     YY_USE = 301,
     YY_PARAMETER = 302,
     YY_FORMAT = 303,
     YY_ENTRY = 304,
     YY_INTEGER_T = 305,
     YY_FLOAT_T = 306,
     YY_STRING_T = 307,
     YY_COMPLEX_T = 308,
     YY_BOOL_T = 309,
     YY_WRITE = 310,
     YY_READ = 311,
     YY_PRINT = 312,
     YY_OPEN = 313,
     YY_CLOSE = 314
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_FOR90_TAB_H_INCLUDED  */