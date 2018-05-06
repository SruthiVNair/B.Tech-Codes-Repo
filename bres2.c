#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
float x1,ya,x2,y2,x,y;
void initGL()
{
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-500.0,1000.0,-500.0,1000.0);
glClearColor(0.0f,0.0f,1.0f,1.0f);  
}
void setpixel(int x,int y)
{
glBegin(GL_POINTS);
glVertex2f(x,y);
glEnd();
glFlush();
}
void algo()
{
float dx,dy,pk,xend,yend;
dy=abs(y2-ya);
dx=abs(x2-xa);
float m=(float)(y2-ya)/(float)(x2-x1);
pk=2*(dy-dx);
if(m>=0&&m<=1)
{
if(x2>x1)
{
x=x1;
y=ya;
xend=x2;
}
else
{
x=x2;
y=y2;
xend=x1;
}
setpixel(x,y);
while(x<xend)
{
if(pk<0)
{
x=x+1;
pk=pk+2*dy;
}
else
{
x++;
y++;
pk=pk+2*dy-2*dx;}
setpixel(x,y);
}}
else if(m>=-1)
int main(int argc,char **argv)
{
printf("enter the first point");
scanf("%f%f",&xa,&ya);
printf("enter the next point");
scanf("%f%f",&xb,&yb);
glutInit(&argc,argv);
glutCreateWindow("New");
glutInitWindowSize(320,320);
glutInitWindowPosition(50,50);
glutDisplayFunc(display);
initGL();
glutMainLoop();
return 0;
}
