
%{
#include<stdio.h>
#include<math.h>
char a[50][50];
int keyword,i,j,c=0;
}%
KEY include|if|char|int|else
%%
{key} {strcpy(a[c++],yytext)}
printf(" ");
%%
main()
{
fopen("fun.txt",r)
}
