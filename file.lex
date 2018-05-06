%{
#include<stdio.h>
int l=0,w=0,c=0;
%}
%%
{
[\n] {l++;w++;}
[\t ""] {w++;}
. c++;
}
%%
main()
{
yyin=fopen("input.txt","r");
yylex();
int yywarp()
{
return 1;
}
printf("no. of lines=%d\nNumber of words=%d\nNumber of characters=%d\n",l,w,c);

}

