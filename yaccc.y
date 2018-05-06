%{
#include<stdio.h>
#include<ctype.h>
%}
%token key
%token sp
%token reop
%token op
%token digit
%token id
%token ty
%%
p:p s '\n'{printf("correct syntax");}
|
;
s:key '('k1';'k2';'k3')'
;
k1:ty sp s1'='s2
;
k2:s1 reop s1
|s1 reop s2
;
k3:op s1
|s1 op
;
s1:id
;
s2:digit
;
%%
#include "lex.yy.c"
void yyerror(char *s)
{
print(s);
} 
main()
{
yyparse();

