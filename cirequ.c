#include<GL/glut.h>
#include<math.h>
#include<stdio.h>
float x,y,r,xc,yc;
float p;
void init()

{
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,300,0,300);
}
void setpixel(float xc,float yc,float x,float y)

{
glPointSize(3.0);
glBegin(GL_POINTS);
glColor3f(1.0,0.0,0.0);
glVertex2f(xc+x,yc+y);

glVertex2f(xc-x,yc+y);

glVertex2f(xc+x,yc-y);

glVertex2f(xc-x,yc-y);

glVertex2f(xc+y,yc+x);

glVertex2f(xc-y,yc+x);

glVertex2f(xc+y,yc-x);

glVertex2f(xc-y,yc-x);

glEnd();
glFlush();
}

void cir(float r,float xc,float yc)
{
for(x=0;x<=r;x++)
{
y=sqrt((r*r)-(x*x));
setpixel(xc,yc,x,y);
}

glEnd();
glFlush();
glutSwapBuffers();
}


void draw()

{

glClearColor(0.0f,0.0f,0.0f,1.0f);

glClear(GL_COLOR_BUFFER_BIT);

glColor3f(0.0,0.0,1.0);

glPointSize(3.0);

cir(r,xc,yc);

glFlush();

}

int main(int argc,char **argv)

{

  glutInit(&argc,argv);

 glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);

 glutInitWindowPosition(250,250);

 glutInitWindowSize(700,700);

 glutCreateWindow("CIR");
 init();
printf("Enter the radius\n");

scanf("%f",&r);

printf("Enter centre points\n");

scanf("%f%f",&xc,&yc);

 glutDisplayFunc(draw);

 glutMainLoop();

 return 0;

}

