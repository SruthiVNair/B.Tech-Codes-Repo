%{
#include<stdio.h>
int count = 0;
%}

c "%d"|"%s"|"%c";
id [a-zA-Z][a-zA-Z0-9]*;

%%
printf\((\"({c}*|.*)*\"(,{id})*\))\; count=1;
%%

int main()
{
  yyin=fopen("printfsyntax.c", "r");
           yylex();
if(count == 1)
	{
printf("correct\n-f");
	return 0;
}

	printf("not correct");
	return 0;
}
