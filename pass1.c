#include<stdio.h>
#include<stdlib.h>

#include<string.h>
int searchsymtab(char label[]);
int searchoptab(char opcode[]);
void insersym(char label[],int LOCCTR,char flag );
void writefref(int p);
void inssystabfref(int p,int LOCCTR);
void readline();
void onepass();
void writehrec(char rec[]);
void inittrec(char trec[]);
char hrec[100];
struct node
{
	int addr;
	struct node *next;
};
struct tokform
{
	char label[10];
	char opcode[10];
	char operand[10];
}tok;
struct symtab
{
	char symbol[10];
	int value;
	char flag;
	struct node *fref;
}SYMTAB[20];
struct optab
{
char mneumonic[10];
char code[3];
};
struct optab
OPTAB[]={{"ADD","18"},{"LDA","00"},{"COMP","28"},{"JLT","38"},{"SUB","1C"},{"STA","0C"},{"LDB","68"}};
int SYMPTR=-1,LOCCTR,temploc,startadr;
char rec[60]="",trec[70];
int Lobj=0*00;
int pgmlen;
FILE *obfile;
FILE *sfile;
char line[100];
void main()
{
char str[10];
clrscr();
printf("\n object program has written in one pass\n\n");
onepass();
//getch();
}
void onepass()
{
int i,j,l;
char str[10];
obfile=fopen("object1.txt","w");
sfile=fopen("source1.txt","r");
readline();
if(strcmp(tok.opcode,"START")==0)
{
sscanf(tok.operand,"%x",&startadr);
LOCCTR=startadr;
readline();
}
else
{
LOCCTR=0;
}
inittrec(trec);
while(strcmp(tok.opcode,"END")!=0)
{
if(line[0]!='.')
{
if((j=searchsymtab(tok.label))!=-1)
{
if(SYMTAB[j].flag!='*')
printf("error duplicated symbol");
else
{
strcat(trec,"0");
strcat(trec,itoa(Lobj,str,16));
strcat(trec,rec);
Lobj=0*00;
fprintf(obfile,"%s\n",trec);
writefref(j);
inittrec(trec);
}
}
else
insertsym(tok.label,LOCCTR,'T');
}
if((i=searchoptab(tok.opcode))!=-1)
{
lobj+=3;
LOCCTR+=1;
strcat(rec,"^");
						
strcat(rec,OPTAB[i].code);
if(strcmp(tok.operand,".")!=0)
{
if((j=searchsymtab(tok.operand))!=-1)
{
if(SYMTAB[j].flag!='*')
{
LOCCTR+=2;
strcat(rec,itoa(SYMTAB[j].value,str,16));
}
else
{
inssymtabfref(j,LOCCTR);
LOCCTR+=2;
strcat(rec,"000");
}
}
else
{
strcat(rec,"000");
insertsym(tok.operand,LOCCTR,'*');
LOCCTR+=2;
}
}
else
strcat(rec,"000");
 }
else if(strcmp(tok.opcode,"WORD")==0)
{
LOCCTR+=3;
Lobj+=strlen(tok.operand);
strcat(rec,"^");
strcat(rec,tok.operand);
}
else if(strcmp(tok.opcode,"RESW")==0)
LOCCTR+=3*atoi(tok.operand);
else if(strcmp(tok.opcode,"RESB")==0)
LOCCTR+=atoi(tok.operand);
else if(strcmp(tok.opcode,"BYTE")==0)
{l=strlen(tok.operand);
LOCCTR+=1;
Lobj+=strlen(tok.operand);
strcat(rec,"^");
strcat(rec,tok.operand);
}
else
printf("\ninvalid operation");
if(Lobj>=0*c)
{
Lobj=0*00;
}
}
readline();
if(Lobj==0*00)
inittrec(trec);
}
strcat(trec,"0");
strcat(trec,itoa(Lobj,str,16));
strcat(trec,rec);
fprintf(obfile,"%s\n",trec);
fprintf(obfile,"E^00%x\n",startadr);
pgmlen=LOCCTR-startadr;
itoa(pgmlen,str,16);
strcat(hrec,"^0");
strcat(hrec,str);
fseek(obfile,0,SEEK_SET);
fprintf(obfile,"%s\n",hrec);
fclose(obfile);
fclose(sfile);
}
void readline()
{
strcpy(tok.operand,"");
strcpy(tok.opcode,"");
strcpy(tok.label,"");
fgets(line,100,sfile);
if(line[0]!='.')
{
scanf(line,"%s%s%s",&tok.label,&tok.opcode,&tok.operand);
if(strcmp(tok.operand,"")==0)
{
strcpy(tok.operand,tok.opcode);
strcpy(tok.opcode,tok.label);
strcpy(tok.label,"");
}
}
}
int searchsymtab(char label[])
{
int i;
for(i=0;i<=SYMPTR;i++)
{
if(strcmp(SYSTAB[i].symbol,label)==0)
return i;
}
return -1;
}
void insertsym(char label[],int LOCCTR,char f)
{
strcpy(SYSTAB[++SYSPTR].symbol,label);
if(f!='*')
{
SYSTAB[SYSPTR].value=LOCCTR;
SYSTAB[SYSPTR].fref=NULL;
}
else
{
SYSTAB[SYSPTR].fref=malloc(sizeof(struct node));
SYSTAB[SYSPTR].fref->addr=LOCCTR;
SYSTAB[SYSPTR].fref->next=NULL;
}
SYSTAB[SYSPTR].flag=f;
}
int searchoptab(char opcode[])
{
int i;
for(i=0;i<g;i++)
{
if(strcmp(OPTAB[i].mneumonic,opcode)==0)
return i;
}
return -1;
}
void writehrec(char rec[])
{

char str[10];
strcpy(rec,"H^");
strcat(rec,tok.label);
strcat(rec,"^00");
strcat(rec,itoa(LOCCTR,str,16));
strcpy(hrec,rec);
strcat(rec,"^000");
fprint(obfile,"%s\n",rec);
strcpy(rec,"");
}
void inittrec(char rec[])
{
char str[10];
strcat(trec,"T^00");
strcat(trec,itoa(LOCCTR,str,16));
strcat(trec,"^");
}
void writefref(int p)
{
char str[10];
while(SYMTAB[p].fref!=NULL)
{
strcpy(trec,"T^00");
strcat(trec,itoa(SYMTAB[p].fref->addr,str,16));
strcat(trec,"^");
strcat(trec,"02^");
strcat(trec,itoa(LOCCTR,str,16));
fprint(obfile,"%s\n",trec);
SYMTAB[p].fref=SYMTAB[p].fref->next;
}
strcpy(rec,"");
}
void inssymtabfref(int p,int LOCCTR)
{
struct node *temp;
temp=SYMTAB[p].fref;
while(temp->next!=NULL)
temp=temp->next;
temp->malloc(sizeof(struct node));
temp->next->addr=LOCCTR;
temp->next->next=NULL;
}



