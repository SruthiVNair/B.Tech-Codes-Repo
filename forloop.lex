%{
#include<stdio.h>
#include<string.h>
#include<math.h>
int f=0;
%}
num [0-9]
id [A-Za-z]
relop "<"|">"|"=="|"<="|">="
op "*"|"-"|"+"|"/"
unary "++"|"--"
letter {id}
digit  {num}
intialisation {letter}"="{digit}
condition {letter}relop{num}|{letter}relop{letter} 
incrementation {letter}unary|unary{letter}
%%
"for("[initialisation]+";"[condition]";"[incrementation]+")" {f=1;printf("%s\n",yytext);}
%%
main()
{
fopen("forloop.txt","r");
yylex();
fclose(yyin);
if(f==1)
{
printf("syntax is correct");
}

}
yywarp
{
return 1;
}
