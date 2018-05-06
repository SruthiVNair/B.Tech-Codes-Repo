%{
#include<stdio.h>
int w=0;
%}
%%

%%
main()
{
yyin=fopen("num.txt","r");
yylex();
printf("Number of header=%d\n",w);
}
int yywarp()
{
return 1;
}
