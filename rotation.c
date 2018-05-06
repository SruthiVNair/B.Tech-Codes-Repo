
Conversation opened. 1 unread message.

Skip to content
Using Gmail with screen readers
This version of Firefox is no longer supported. Please upgrade to asupported browser. Dismiss
Click here to enable desktop notifications for Gmail.   Learn more  Hide
 
 
More
 
2 of 604
 
Fwd:
Inbox
	x
bhavana.s sudhakaran
	
Attachments1:03 PM (5 minutes ago)
		
to me
---------- Forwarded message ----------
From: bhavana.s sudhakaran <bhavanachanthavila@gmail.com>
Date: Tue, Sep 20, 2016 at 1:03 PM
Subject: Fwd:
To: SHERIN SHIFANA (Google+)



---------- Forwarded message ----------
From: bhavana.s sudhakaran <bhavanachanthavila@gmail.com>
Date: Tue, Sep 20, 2016 at 1:03 PM
Subject: Fwd:
To: avani krishna <avanikrishnasreemoolam@gmail.com>



---------- Forwarded message ----------
From: bhavana.s sudhakaran <bhavanachanthavila@gmail.com>
Date: Tue, Sep 20, 2016 at 1:02 PM
Subject:
To: SM.MELBA RAJ (Google+)
4 Attachments
	
Click here to Reply or Forward
0.72 GB (4%) of 15 GB used
Manage
Terms - Privacy
Last account activity: 2 days ago
Details
	
	
bhavana.s sudhakaran's profile photo
	bhavana.s sudhakaran
Show details

#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
double x1,x2,x3,ya,y2,y3,theta,xr,yr;
double round(double b)
{
return floor(b+0.5);
}
void init()
{
glClearColor(1.0f,1.0f,1.0f,1.0f);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0,500,0,500,-1,1);
}
void setpixel(int x,int y)
{
glBegin(GL_POINTS);
glVertex2f(x,y);
glEnd();
glFlush();
}	

linedda(double a, double b, double c, double d)
{
double dx,dy,step,xinc,yinc,x,y;
int k;
dx=c-a;
x=a;
y=b;
dy=d-b;
if(abs(dx)>abs(dy))
step=abs(dx);
else
step=abs(dy);
xinc=dx/step;
yinc=dy/step;
setpixel(x,y);
for(k=0;k<step;k++)
{
		
x+=xinc;
y+=yinc;
setpixel(round(x),round(y));
}
}
void draw()
{
double x11,ya1,x21,y21,x31,y31;
glColor3f(1.0f,0.0f,0.0f);
linedda(x1,ya,x2,y2);
linedda(x2,y2,x3,y3);
linedda(x3,y3,x1,ya);
theta=(theta*3.14)/180;
glColor3f(0.0f,1.0f,0.0f);
x11=xr+(x1-xr)*cos(theta)-(ya-yr)*sin(theta);
ya1=yr+(x1-xr)*sin(theta)+(ya-yr)*cos(theta);
x21=xr+(x2-xr)*cos(theta)-(y2-yr)*sin(theta);
y21=yr+(x2-xr)*sin(theta)+(y2-yr)*cos(theta);
x31=xr+(x3-xr)*cos(theta)-(y3-yr)*sin(theta);
y31=yr+(x3-xr)*sin(theta)+(y3-yr)*cos(theta);
linedda(x11,ya1,x21,y21);
linedda(x21,y21,x31,y31);
linedda(x31,y31,x11,ya1);
glFlush();
glutSwapBuffers();
}
int main(int argc,char **argv)
{
printf("Enter first coordinate:");
scanf("%lf%lf",&x1,&ya);
printf("Enter second coordinate:");
scanf("%lf%lf",&x2,&y2);
printf("Enter third coordinate:");
scanf("%lf%lf",&x3,&y3);
printf("Enter theta value");
scanf("%lf",&theta);
printf("Enter rotate value");
scanf("%lf%lf",&xr,&yr);
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
glutInitWindowSize(500,500);
glutInitWindowPosition(150,150);
glutCreateWindow("TRANSLATION Drawing");
glutDisplayFunc(draw);
init();
glutMainLoop();
return 0;
}

rotation.c
Displaying rotation.c.
