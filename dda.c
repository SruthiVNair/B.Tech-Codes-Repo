#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
#define ROUND(a)(int)(a+0.5)
float xIncrement,yIncrement;
float xa,xb,ya,yb;
float dx,dy,steps,k;
float x,y;
void initGL()
{
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0,1000.0,0.0,1000.0);
glClearColor(0.0f,0.0f,0.0f,1.0f);
}
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
x=xa;
y=ya;

dx=xb-xa;
dy=yb-ya;
if(abs(dx)>abs(dy))
steps=abs(dx);
else steps=abs(dy);
xIncrement=dx/(float)steps;
yIncrement=dy/(float)steps;
//setPixel(ROUND(x),ROUND(y));
glBegin(GL_POINTS);
glColor3f(0.0f,1.0f,1.0f);
glVertex2f(ROUND(x),ROUND(y));
glEnd();
glBegin(GL_POINTS);
glColor3f(0.0f,1.0f,1.0f);
for(k=0;k<steps;k++)
{
x+=xIncrement;
y+=yIncrement;
//setPixel(ROUND(x),ROUND(y));

glVertex2f(ROUND(x),ROUND(y));

}
glEnd();
glFlush();
}
int main(int argc,char **argv)
{printf("first point:");
scanf("%f%f",&xa,&ya);
printf("second point:");
scanf("%f%f",&xb,&yb);
glutInit(&argc,argv);
glutCreateWindow("Vertex,Primitive&Color");
glutInitWindowSize(320,320);
glutInitWindowPosition(50,50);
glutDisplayFunc(display);
initGL();
glutMainLoop();
return 0;
}
