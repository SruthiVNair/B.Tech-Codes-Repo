%{
#include<stdio.h>
int f=0;
%}
op "+"|"-"|"*"|"/"
num [0-9]*
letter [a-zA-Z]*
relop ">"|"<"|"=="|"<="|">="
unary "--"|"++"
id ({letter})({letter}|{num})*
factor {id}|{num}
expr {factor}{op}{factor}|{factor}
initialisation {id}"="{expr}
condition {id}{relop}{num}|{id}{relop}{id}
incr {id}{unary}|{unary}{id}
%%
"for("{initialisation}+";"{condition}+";"{incr}+")" f=1;printf("%s\n",yytext);
%%
main()
{
yyin=fopen("forloop.txt","r");
yylex();
if(f==1)
	printf(" correct syntax \n");
else
	printf("wrong syntax!!\n");

}
int yywrap()
{
return 1;
}
