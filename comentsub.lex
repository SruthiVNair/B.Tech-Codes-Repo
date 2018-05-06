%{
#include<stdio.h>
int flag = 1;
%}
%%
"/*" flag=0;
"*/" flag = 1;
 {if (flag==1) printf("%s",yytext);}
"//"[A-Za-z0-9""()%&,;/ ]* {printf("");}
%%
main()
{
yyin = fopen("comment.txt","r");
yylex();
}
int yywrap()
{
return 1;
}
