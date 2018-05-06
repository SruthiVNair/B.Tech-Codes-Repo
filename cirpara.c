#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
double r;
double xc;
double yc;
double x;
double y;
double t;
double step;
void setpixel(double xc,double yc)
{
glBegin(GL_POINTS);
		
glColor3f(1.0f,1.0f,0.0f);
glVertex2f(x+xc,y+yc);
glEnd();
glFlush();
}
void init()
{
glClearColor(1.0f,1.0f,1.0f,0.0f);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(50,1000,50,1000,-1,1);
}		
void display()
{
t=0;
step=1;
	
		
glClear(GL_COLOR_BUFFER_BIT);
glPointSize(4.00);
	
	while(t!=360)
	{
	t++;
	x=xc+(r*cos(t));
	y=yc+(r*sin(t));
	setpixel(x+xc,y+yc);
		
	}
	
	
	glutSwapBuffers();	
	
	
	}
	

int main(int argc,char **argv)
{
	printf("Enter points");
scanf("%lf%lf",&xc,&yc);
printf("Enter radious");
scanf("%lf",&r);
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
	
glutInitWindowSize(500,500);
glutInitWindowPosition(150,150);
glutCreateWindow("NEW");
glutDisplayFunc(display);
	
init();
glutMainLoop();
	return 0;
}


