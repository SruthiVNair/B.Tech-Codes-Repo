#include<GL/glut.h>
#include<stdio.h>
int xa,ya,xb,yb;
void fun(float x1,float y1,float x2,float y2);
void draw();
void setpixel(float x,float y);
int sign(int);
void init(void) 
{
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0,500,0,500,-1,1);
}
int main(int argc,char **argv)
{
 printf("enter the coordinates\n");
 scanf("%d%d%d%d",&xa,&ya,&xb,&yb);
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
 glutInitWindowPosition(250,250);
 glutInitWindowSize(700,700);
 glutCreateWindow("Bresenhams Line Alg");
 init();
 glutDisplayFunc(draw);
 glutMainLoop();
 return 0;
}
void fun(float x1,float y1,float x2,float y2)
{
int i;
float s1=1,s2=1,dx,dy,m,dpk,dpk1,x,y;

dx=abs(x2-x1);
dy=abs(y2-y1);
m=dy/dx;
x=x1;
y=y1;
s1=sign(x2-x1);
s2=sign(y2-y1);
setpixel(x1,y1);
if(m<=1)
{

dpk=(2*dy)-dx;
for(i=0;i<=dx;i++)
{
if(dpk<0)
{
x1=x1+s1;
setpixel(x1,y1);
dpk=dpk+2*dy;
}
else
{
x1=x1+s1;
y1=y1+s2;
setpixel(x1,y1);
dpk=dpk+(2*dy)-(2*dx);
}
}
}
else
{

dpk=(2*dx)-dy;
for(i=0;i<dy;i++)
{
if(dpk>0)
{
y=y+s2;

setpixel(x,y);
dpk=dpk+(2*dx);
}
else
{
x=x+s1;
y=y+s2;
setpixel(x,y);
dpk=dpk+(2*dx)-(2*dy);
}

}
}
}
void draw()
{
glClearColor(0.0f,0.0f,0.0f,1.0f);
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1.0,1.0,1.0);
fun(xa,ya,xb,yb);
glFlush();
}
void setpixel(float x,float y)
{
glPointSize(3);
glBegin(GL_POINTS);
glVertex2f(x,y);
glEnd();
}
int sign(int a)
{
int s;
if(a<0)
 s=-1;
else if(a>0)
 s=1;
else
 s=0;
return s;
}


