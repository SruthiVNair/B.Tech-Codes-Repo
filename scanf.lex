%{
#include<stdio.h>
int count = 0;
%}

a "%d"|"%s"|"%c"
id [a-zA-Z][a-zA-Z0-9]*

%%
scanf\((\"({a}*|.*)*\"(,&{id})*\))\; count=1;
%%

int main()
{
  yyin=fopen("printfsyntax.c", "r");
           yylex();
if(count==1)
	{
printf("correct\n");
}
else printf("incorrect\n");
}
