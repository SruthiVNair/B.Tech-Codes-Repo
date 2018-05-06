%{
#include <stdio.h>
int count = 0;
%}

a "%d"|"%s"|"%c"
id [a-zA-Z][a-zA-Z0-9]*
%%
printf\(\"({a}*|.*)*\"(,{id})*\)\;  count=1;
%%
int main()
{
	  yyin=fopen("print.txt", "r");
           yylex();
	if(count==1)
	{
	printf("not correct");
	}
        else
	printf(" correct");
	return 0;
}

