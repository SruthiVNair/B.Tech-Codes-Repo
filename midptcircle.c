#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
float xc,yc,r,x,y,p;
void initGL()
{
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-500.0,1000.0,-500.0,1000.0);
glClearColor(0.0f,0.0f,1.0f,1.0f);  
}
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
x=0;
y=r;
p=1-r;
glClear(GL_COLOR_BUFFER_BIT);
glPointSize(5);
glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POINTS);
while(x<=y)
{
if(p<0)
{
x++;
p=p+(2*x)+3;
}
else
{
x++;
y=y-1;
p=p+2*(x-y)+5;

}
glVertex2f(xc+x,yc+y);
glVertex2f(xc-x,yc+y);
glVertex2f(xc+x,yc-y);
glVertex2f(xc-x,yc-y);
glVertex2f(xc+y,yc+x);
glVertex2f(xc-y,yc+x);
glVertex2f(xc+y,yc-x);
glVertex2f(xc-y,yc-x);
}
glEnd();
glFlush();
}

int main(int argc,char **argv)
{
printf("enter the radius");
scanf("%f",&r);
printf("enter the centre point");
scanf("%f%f",&xc,&yc);
glutInit(&argc,argv);
glutCreateWindow("New");
glutInitWindowSize(320,320);
glutInitWindowPosition(50,50);
glutDisplayFunc(display);
initGL();
glutMainLoop();
return 0;
}
