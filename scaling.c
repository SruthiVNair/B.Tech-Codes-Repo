 


#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
#define ROUND(a)((int)(a+0.5))
double x1,x2,x3,ya,y2,y3,sx,sy;
void init()
{
glClearColor(1.0f,1.0f,1.0f,1.0f);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0,500,0,500,-1,1);
}
void setpixel(int x,int y)
{
glBegin(GL_POINTS);
glVertex2f(x,y);
glEnd();
glFlush();
}	

linedda(double a, double b, double c, double d)
{
double dx,dy,step,xinc,yinc,x,y;
int k;
dx=c-a;
x=a;
y=b;
dy=d-b;
if(abs(dx)>abs(dy))
step=abs(dx);
else
step=abs(dy);
xinc=dx/step;
yinc=dy/step;
setpixel(x,y);
for(k=0;k<step;k++)
{
x+=xinc;
y+=yinc;
setpixel(round(x),round(y));
}
}
void draw()
{
glColor3f(1.0f,0.0f,1.0f);
linedda(x1,ya,x2,y2);
linedda(x2,y2,x3,y3);
linedda(x3,y3,x1,ya);
glColor3f(0.0f,1.0f,1.0f);

linedda(x1*sx,ya*sy,x2*sx,y2*sy);
linedda(x2*sx,y2*sy,x3*sx,y3*sy);
linedda(x3*sx,y3*sy,x1*sx,ya*sy);
glFlush();
glutSwapBuffers();
}
int main(int argc,char **argv)
{
printf("Enter first coordinate:");
scanf("%lf%lf",&x1,&ya);
printf("Enter second coordinate:");
scanf("%lf%lf",&x2,&y2);
printf("Enter third coordinate:");
scanf("%lf%lf",&x3,&y3);
printf("Enter scaling pair:");
scanf("%lf%lf",&sx,&sy);
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
glutInitWindowSize(500,500);
glutInitWindowPosition(150,150);
glutCreateWindow("Scaling");
glutDisplayFunc(draw);
init();
glutMainLoop();
return 0;
}


