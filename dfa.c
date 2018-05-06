#include<stdio.h>
void main()
{
	int mat[10][10],n,i,j,in,fi,st,p=0;
	char s[10];
	printf("Enter the number of states");
	scanf("%d",&n);
	printf("Enter the transition table values");
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	printf("Enter the initial state");
	scanf("%d",&in);
	printf("Enter the final state");
	scanf("%d",&fi);
	printf("Enter the string");
	scanf("%s",s);
	st=in;
	while(s[p]!='\0')
	{
		if(s[p]=='1')
		{
			st=mat[st][1];
			p++;
		}
		else
		{
			st=mat[st][0];
			p++;
		}
	}
if(s[p]=='\0' &&st==fi)
{
	printf("String accepted");
}
else
	printf("String rejected");
}
