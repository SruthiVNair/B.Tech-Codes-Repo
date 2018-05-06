#include<GL/glut.h>
void initGL()
{
glClearColor(0.0f,0.0f,0.0f,1.0f);
}
void display()
{
float x1,x2,y1,y2,m,m1,c,x,y;
x1=0.7;
y1=0.6;
x2=0.4;
y2=0.1;
m=(y2-y1)/(x2-x1);
c=y1-(m*x1);
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
glutInit(&argc,argv);
glutCreateWindow("Vertex,Primitive&Color");
glutInitWindowSize(320,320);
glutInitWindowPosition(50,50);
glutDisplayFunc(display);
initGL();
glutMainLoop();
return 0;
}
