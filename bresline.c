#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
float x,y,xa,xb,ya,yb,dx,dy;
float p,pk,k;
void initGL()
{
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0,1000.0,0.0,1000.0);
glClearColor(1.0f,0.0f,1.0f,1.0f);
}
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
dx=xb-xa;
dy=yb-ya;
p=(2*dy)-dx;

x=xa;
y=ya;
glBegin(GL_POINTS);
glColor3f(1.0f,1.0f,1.0f);
glVertex2f(x,y);
glEnd();
glFlush();
for(k=0.0;k<dx;k++)
{
if(pk<0)
{
x=x+1.0;
glBegin(GL_POINTS);
glColor3f(1.0f,1.0f,1.0f);
glVertex2f(x,y);
glEnd();
glFlush();
pk=pk+(2*dy);
}
if(pk>=0)
{x=x+1.0;
y=y+1.0;
glBegin(GL_POINTS);
glColor3f(1.0f,1.0f,1.0f);
glVertex2f(x,y);
glEnd();
glFlush();
pk=pk+(2*dy)-(2*dx);
}glutSwapBuffers();
}

}

int main(int argc,char **argv)
{
printf("enter the first point");
scanf("%f%f",&xa,&ya);
printf("enter the next point");
scanf("%f%f",&xb,&yb);
glutInit(&argc,argv);glutCreateWindow("New");
//glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);

glutInitWindowSize(320,320);
glutInitWindowPosition(50,50);
glutDisplayFunc(display);

initGL();
glutMainLoop();
return 0;
}
