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
   enum yytokentype {//词法分析的符号表，加入的符号需要来这里定义
     T_IntConstant = 258,
     T_Identifier = 259,
     U_neg = 260,
     
      //以下是我新加入的
      CHAR=261,
      COMMA= 262,
      LEFT_BRACKET = 263,
      RIGHT_BRACKET = 264,
      KW_INT = 265,
      KW_FLOAT = 266,
      KW_IF = 267,
      KW_ELSE = 268,
      KW_FOR = 269,
      KW_WHILE = 270,
      KW_RETURN  = 271,
      T_FloatConstant = 272,
      T_StringConstant = 273,
      LEFT_PARENTHESES = 274,/*左右()这两条规则多余了，产生warning了可以无视*/
      RIGHT_PARENTHESES = 275
   };
#endif
//给符号的表赋值
/* Tokens.  */
#define T_IntConstant 258
#define T_Identifier 259
#define U_neg 260
#define CHAR 261
#define COMMA 262
#define LEFT_BRACKET 263
#define RIGHT_BRACKET 264
#define KW_INT 265
#define KW_FLOAT 266
#define KW_IF 267
#define KW_ELSE 268
#define KW_FOR 269
#define KW_WHILE 270
#define KW_RETURN 271
#define T_FloatConstant 272
#define T_StringConstant 273
#define LEFT_PARENTHESES 274
#define RIGHT_PARENTHESES 275


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

