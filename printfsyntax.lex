%{
#include<stdio.h>
int count=0;
}%

c "%d"|"%s"|"%c";
id [a-z][A-Za-z0-9]*;

%%
printf\(\".*{c}\"\,{id}|\".*\"|\"{c}.*\"\,{id}\)\;
 count=1;
%%
int main()
{
yyin=fopen("printfsyntax.txt","r");
yylex();
if(count==1)
{
printf("CORRECT!");}
else printf("WRONG!");
return 0;
}
