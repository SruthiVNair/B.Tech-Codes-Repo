#include<GL/glut.h>
void initGL()
{
glClearColor(0.0f,0.0f,0.0f,1.0f);
}
void display()
{
float x,y,m1,m,c;
glClear(GL_COLOR_BUFFER_BIT);

 x=1.0;
 y=-1.0;

m1=y/x;
 c=y-m*x;
if(m1<0)
{
m=m1*-1;
}
else
m1=m;
if(m<1.0)
{
for(x=1.0;x<4.0;x++)
{
y=m*x+c;
glBegin(GL_POINTS);
glColor3f(1.0f,1.0f,1.0f);
glVertex2f(x,y);
glEnd();
glFlush();
}
}
else if(m>1.0)
{
for(y=1.0;y<4.0;y++)
{
x=(y-c)/x;
glBegin(GL_POINTS);
glColor3f(1.0f,1.0f,1.0f);
glVertex2f(x,y);
glEnd();
glFlush();
}
}
else
x=x+1;
y=y+1;
glBegin(GL_POINTS);
glColor3f(1.0f,1.0f,1.0f);
glVertex2f(x,y);
glEnd();
glFlush();
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
