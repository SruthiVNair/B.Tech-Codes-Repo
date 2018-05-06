%{
#include<stdio.h>
int c=0,v=0;
%}
%%
[aeiouAEIOU] v++;
. c++;

%%
main()
{
printf("enter the text=");

yylex();
 printf("no. of vowels=%d\nNumber of consonents=%d\n",v,c);
yywrap()
{
return 1;
}

}

