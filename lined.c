#include<GL/glut.h>
#include<stdio.h>
float x1,x2,d1,y2,m,m1,c,x,y;
void initGL()
{
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0,100.0,0.0,100.0);
glClearColor(0.0f,0.0f,0.0f,1.0f);
}
void display()
{

m=(y2-d1)/(x2-x1);
c=d1-(m*x1);
if(m<0)
{
m1=m*-1;
}
else
m1=m;
glClear(GL_COLOR_BUFFER_BIT);
if(m1<=1.0)
{
for(x=0.7;x<=x2;x+=0.001)
{
y=(x*m)+c;
glBegin(GL_POINTS);
glColor3f(0.0f,1.0f,1.0f);
glVertex2f(x,y);
}
glEnd();
glFlush();
}
else if(m1>1.0)
{
for(y=-0.6;y<=y2;y+=0.001)
{
x=(y-c)/m;
glBegin(GL_POINTS);
glColor3f(0.0f,1.0f,1.0f);
glVertex2f(x,y);
}
glEnd();
glFlush();
}
}
int main(int argc,char **argv)
{
printf("first point:");
scanf("%f%f",&x1,&d1);
printf("second point:");
scanf("%f%f",&x2,&y2);
glutInit(&argc,argv);
glutCreateWindow("Vertex,Primitive&Color");
glutInitWindowSize(320,320);
glutInitWindowPosition(50,50);
glutDisplayFunc(display);
initGL();
glutMainLoop();
return 0;
}

