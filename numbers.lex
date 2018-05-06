%{
#include<stdio.h>
int n=0;
%}
%%
[0123456789]+ n++;
%%
main()
{
yyin=fopen("numbers.txt","r");
yylex();
printf("Number of numbers=%d\n",n);
}
int yywrap()
{
return 1;
}
