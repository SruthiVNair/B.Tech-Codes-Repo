


#include<GL/glut.h>
#include<math.h>
#include<stdio.h>
int x,y,r,xc,yc;

float p;

void init(void)

{

glMatrixMode(GL_PROJECTION);

glLoadIdentity();

gluOrtho2D(-500,300,-500,300);

}

void cir(int r,int xc,int yc)

{

x=0;

y=r;

p=3-2*r;

void cirplotpoints(int,int,int,int);

while(x<y)

{

if(p<0)

{

x=x+1;

p=p+(4*x)+6;

}

else

{

x=x+1;

y=y-1;

p=p+4*(x-y)+10;

}

cirplotpoints(xc,yc,x,y);

}
glutSwapBuffers();
}

void cirplotpoints(int xc,int yc,int x,int y)

{
glPointSize(3);
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

void draw()

{

glClearColor(0.0f,0.0f,0.0f,1.0f);

glClear(GL_COLOR_BUFFER_BIT);

glColor3f(0.0,0.0,1.0);

glPointSize(3);



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

scanf("%d",&r);

printf("Enter centre points\n");

scanf("%d%d",&xc,&yc);

 glutDisplayFunc(draw);

 glutMainLoop();

 return 0;

}





