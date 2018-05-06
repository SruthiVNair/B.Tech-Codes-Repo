%{
#include<stdio.h>
int v=0,c=0;
%}
%%
[aeiouAEIOU] v++;
. c++;
\n printf("\nno:of consonants=%d\n no:of vowels=%d\n",c,v);

%%
main()
{
printf("enter the string ");
yylex();

}
int yywrap()
{
return 1;
}
