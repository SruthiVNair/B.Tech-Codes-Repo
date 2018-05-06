%{ 
#include<stdio.h>
 int a=0;
 int z=0;
int b=0;
%}
%%                         
[\t ""] b++;
[\n] {z++;b++;}
.  a++;
%%
main()
{
yyin=fopen("input.txt","r");
yylex();
printf("no.of characters=%d \nno.of words=%d\n no.of lines=%d \n",a,b,z);
}
 int yywrap()
{ return(1);
}
