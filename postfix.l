%{
#include<stdio.h>
#include<ctype.h>
%}
%token num
%left '+''-'
%left '*''/'
%right '^'
%%
s:e'\n'{printf("%d",$1);};
e:e '+' e{$$=$1+$3;}
|e '-' e{$$=$1-$3;}
|e '*' e{$$=$1*$3;}
|e '/' e{$$=$1/$3;}
|e '^' e {

 |num
 ;
%%
yylex()
{
int c;
c=getchar();
if(isdigit(c))
{
yylval=c-'0';
return num;
}
return c;
}
int main()
{
yyparse();
return 1;
}
int yyerror()
{
return 1;
}
int yywrap()
{
return 1;
}
