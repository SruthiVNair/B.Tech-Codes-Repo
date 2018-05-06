%{
#include<stdio.h>
int w=0;
%}
%%
#include<.*> w++;
.* {}
%%
main()
{
yyin=fopen("sum.c","r");
yylex();
printf("Number of header=%d\n",w);
}
int yywrap()
{
return 1;
}
