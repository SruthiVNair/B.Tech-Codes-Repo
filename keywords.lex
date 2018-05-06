%{
#include<string.h>
#include<stdio.h>
#include<math.h>
int i,j=0,c=0;
char a[50][50];
%}
key include|int|char|float|if|const|printf|char
%%
{key} {strcpy(a[c++],yytext);} 
printf(" ");
%%
main()
{
yyin=fopen("keywords.txt","r");
yylex();
for(i=0;i<c;i++)
{
for(j=i+1;j<c-1;j++)
{
if(strcmp(a[i],a[j])==0)
{
strcpy(a[i]," ");
}
}
}
for(i=0;i<c;i++)
{
printf("%s",a[i]);
}
printf("keyword count=%d\n",c);
fclose(yyin);
}
int yywarp()
{
return 1;
}
