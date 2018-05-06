
Conversation opened. 1 unread message.

Skip to content
Using Gmail with screen readers
This version of Firefox is no longer supported. Please upgrade to asupported browser. Dismiss
Click here to enable desktop notifications for Gmail.   Learn more  Hide
 
 
More
 
1 of 417
 
abc
Inbox
	x
THEERTHA ASHOK <theerthachuzhali@gmail.com>
	
Attachments12:59 PM (3 minutes ago)
		
to me, sherinshifana1.
Attachments area
	
Click here to Reply, Reply to all, or Forward
0.69 GB (4%) of 15 GB used
Manage
Terms - Privacy
Last account activity: 14 hours ago
Details
	
	
People (2)
	THEERTHA ASHOK
Show details

#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
float x1,x2,y3,y2;
void initGL()
{
glMatrixMode(GL_PROJECTION);
glOrtho(0,500,0,500,1,-1);
glClearColor(0.0f,0.0f,0.0f,0.0f);
}
void bresens()
{
int dx,dy,x,y,m,xend,yend,pk;
printf("enter the starting points");
scanf("%f%f",&x1,&y3);
printf("enter the ending  points");
scanf("%f%f",&x2,&y2);
dx=x2-x1;
dy=y2-y3;
m=dy/dx;
pk=2*dy-dx;
glClear(GL_COLOR_BUFFER_BIT);
glPointSize(2);
glColor3f(0.0f,1.0f,0.0f);
glBegin(GL_POINTS);
if((m>=0) && m<=1)
{
if(x1>x2)
{
x=x2;
y=y2;
xend=x1;
}
else
{
x=x1;
y=y3;
xend=x2;
}
glVertex2f(x,y);
while(x<xend)
{
x++;
if(pk<0)
{
glVertex2f(x,y);
pk=pk+(2*dy);
}
else
{
y++;
glVertex2f(x,y);
pk=pk+(2*dy)-(2*dx);
}}}
else if((m>=-1) && (m>=0))
{
if(x1>x2)
{
x=x2;
y=y2;
xend=x1;
}
else
{
x=x1;
y=y3;
xend=x2;
}
glVertex2f(x,y);
while(x<xend)
{
x++;
if(pk<0)
{
glVertex2f(x,y);
pk=pk+(2*dy);
}
else
{
y--;
pk=pk+(2*dy)-(2*dx);
}
glVertex2f(x,y);
}}
else if(m>1)
{
if(y3>y2)
{
x=x2;
y=y2;
yend=y3;
}
else
{
x=x1;
y=y3;
yend=y2;
}
while(y<yend)
{
y++;
if(pk<0)
{
glVertex2f(x,y);
pk=pk+(2*dy);
}
else
{
x++;
glVertex2f(x,y);
pk=pk+(2*dy)-(2*dx);
}}}
else if(m<-1)
{
if(y3<y2)
{
x=x2;
y=y2;
yend=y3;
}
else
{
x=x1;
y=y3;
yend=y2;
}
while(y>yend)
{
y--;
if(pk<0)
{
glVertex2f(x,y);
pk=pk+(2*dy);
}
else
{
x++;
glVertex2f(x,y);
pk=pk+(2*dy)-(2*dx);
}}}
glEnd();
glFlush();
}
int main(int argc,char** argv)
{
glutInit(&argc,argv);
glutInitWindowSize(350,350);
glutInitWindowPosition(50,50);
glutCreateWindow("vertex,primitive & color");
initGL();
glutDisplayFunc(bresens);
glutMainLoop();
return (0);
}



























bresens.c

