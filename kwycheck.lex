
%{ 
#include<stdio.h>

char a[50][50];
int c=0,i,j;
%}
KEY include|int|float|for
%%
{KEY} {strcpy(a[c++],yytext);}
. printf(" ");
%%
main()
{
yyin=fopen("fun.c","r");
yylex();
fclose(yyin);
for(i=0;i<c;i++)
 {
    for(j=i+1;j<c;j++)
     {
       if(strcmp(a[i],a[j])==0)
           strcpy(a[i],"  ");
}
}
for(i=0;i<c;i++)
 printf("%s",a[i]);
printf("number of keywords=%d",c);
}
 int yywrap()
{ return(1);
}

