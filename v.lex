%{ 
#include<stdio.h>
 int c=0;
 int v=0;
%}
%%
[aeiouAEIOU] v++;                           
. c++;
%%
main()
{
printf("enter the string");
yylex();
 printf("no.of constants=%d \n no.of vowels=%d \n",c,v);
}
 int yywrap()
{ return(1);
}
