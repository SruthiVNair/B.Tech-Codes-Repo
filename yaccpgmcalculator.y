%{
#include<stdio.h>
#include<ctype.h>
%}
%token num
%left '*''/' 
%left '+''-'
%right '^'
%%
s:e'\n'{printf("%d",$1);}
e:e'+'e{$$=$1+$3}
|e:e'-'e{$$=$1-$3}
|e:e'*'e{$$=$1*$3}
|e:e'\'e{$$=$1\$3}
|e'^'{ 	
	int i,j;
	j=$1;
	for(i=1;i<$3;i++)
	{
		j=j*$1;
		$$=j;
		
	}
	}
|e:'('e')'e{$$=$2}
num1:num1 num{$$=$1*10+$2} 
|num
;
%%
yylex()
{
int c;
cc=getchar();
if(isdigit(c))
{
yyval=c-'0';
return num;
}
return c;
}
main()
{
yyparse();
return 1;
}
yyerror()
{
return 1;
}
yyqwrap()
{
return 1;
}
