#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
float x1,x2,x3,ya,y2,y3;
int i=0;
int round(float b)
{
int c;
c=floor(b+.5);
return c;
}
void init()
{
glClear(GL_COLOR_BUFFER_BIT);
glMatrixMode(GL_PROJECTION);
glOrtho(0,500,0,500,-1,1);
glClearColor(0.0f,1.0f,0.0f,0.0f);
glLoadIdentity();
}
void setpixel(int x,int y)
{
glBegin(GL_POINTS);
glVertex2f(x,y);
glEnd();
glFlush();
}
linedda(float a,float b,float c,float d)
{
float dx,dy,steps,k,xinc,yinc;
float x,y;
x=a;
y=b;
dx=c-a;
dy=d-b;
if((abs(dx))>(abs(dy)))
{
steps=abs(dx);
}
else steps=abs(dy);
xinc=dx/steps;
yinc=dy/steps;
setpixel(x,y);
for(k=0;k<steps;k++)
{
x+=xinc;
y+=yinc;
setpixel(round1(x+xinc),round1(y+yinc));
}
}
void circle(float xc,float yc,float r)
{
float x=0;
float y=r;
p=1-r;
while(x<y)
{
if(p<0)
{
p=p+2*x+3;
x++;
}
else
{
p=p+2*x-2*y+5;
y--;
}
x++;
setpixel(x+xc,y+yc);
setpixel(x-xc,y+yc);
setpixel(x+xc,y-yc);
setpixel(x-xc,y-yc);
setpixel(y+xc,x+yc);
setpixel(y-xc,x+yc);
setpixel(y-xc,x-yc);
setpixel(y+xc,x-yc);
}}
void draw()
{
glColor3f(0.0,0.0,1.0);
glPointSize(3.0);
linedda(50+i,100,100+i,100);
	linedda(300+i,50,300+i,100);
	linedda(300+i,100,50+i,100);
	linedda(50+i,100,50+i,50);
	linedda(80+i,100,125+i,150);
	linedda(225+i,150,270+i,100);
	linedda(125+i,150,225+i,150);
	circle(125+i,50,15);
	circle(225+i,50,15);
	glutSwapBuffers();
	glColor3f(0.0,0.0,0.0);
	linedda(50+i,50,300+i,50);
	linedda(300+i,50,300+i,100);
	linedda(300+i,100,50+i,100);
	linedda(50+i,100,50+i,50);
	linedda(80+i,100,125+i,150);
	linedda(225+i,150,270+i,100);
	linedda(125+i,150,225+i,150);
	circle(125+i,50,15);
	circle(225+i,50,15);
	glutSwapBuffers();
if(i<300)
	 i=i+5;
	usleep(10000);
	glutPostRedisplay();
	glFlush();
	
}	
int main(int )
