%{
#include<stdio.h>
#include<math.h>

%}
%%
\/\/ ;

[\/*(.*\n)*\*\/]+ ;

%%
main()
{
yyin=fopen("comment.txt","r");
yylex();

}
yywrap()
{
return 1;
}
