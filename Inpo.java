import java.io.*;
import java.util.*;
class Stack
{
char stack=new int[40];
int top;
void push(char ch)
{
top++;
stack[top]=ch;
}
void pop()
{
char item=stack[top];
top--;
return item;
}
int preview(char ch)
{
switch(char ch)
{

			case '-':return 1;
			case '+':return 1;
			case '*':return 2;
			case '/':return 2;
		}
		return 0;
}
boolean operator(char ch)
{
if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
return true;
else
 return false;}
boolean alphabet(char ch)
{
if(ch>='a'&&ch<='z'||ch>='1'&&ch<='9')
{
return true;
else return false;
}
void post(String str)
{
char output()=new int[str.length()];
char ch;
int p,i;
for(i=0;i<str.length();i++)
{
ch=str.charpos(i);
if(ch=='('){
push(ch);}
else if (alphabet(char ch))
{
output[p++]=ch;
}
else if()
{
if(stack[top]==0||(preview(ch)>preview(stack[top]))||stack[top]=='(')
			{
				push(ch);
}
}
else if(ch==')')
{
				while((ch=pop())!='(')
				{
					output[p++]=ch;
                              
				}

    			 }
		
                   }
while(top!=-1)
{
			output[p++]=pop();
			
		}
		for(int j=0;j<str.length();j++)
		{
 			 if(output[j]=='('||output[j]==')')
			
			continue;
			else
			System.out.print(output[j]);	
		}
	}
}
class inpo
{
	public static void main(String[] args)
	{

		String s;
		Scanner sr=new Scanner(System.in);
		Stack b=new Stack();
		System.out.println("Enter input string");
		s=sr.nextLine();
		System.out.println("Input String:"+s);
		System.out.println("Output String:");
		b.postfix(s);
	}
}

