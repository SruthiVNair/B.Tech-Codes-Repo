 #include<GL/glut.h>
#include<stdio.h>
#include<math.h>
#define Round(a)((int)(a+0.5))
double rx;
double ry;
double xc;
double yc;
double x;
double y;
double t;
double step;
void setpixel(float x,float y)
{
glBegin(GL_POINTS);
		
		glColor3f(0.0f,1.0f,1.0f);
		glVertex2f(x,y);
glEnd();
		glFlush();
}
void init()
{
	glClearColor(0.0f,0.0f,0.0f,1.0f);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
	glOrtho(0,500,0,500,-1,1);
}		
void display()
{

		
glClear(GL_COLOR_BUFFER_BIT);
	
	t=0;
	step=1;
	
		
glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(3.05);
	
	while(t!=360)
	{
		t++;
		x=xc+rx*(cos(t));
		y=yc+ry*(sin(t));
		setpixel(x+xc,y+yc);
		
	}

glutSwapBuffers();		
}
int main(int argc,char **argv)
{
	printf("Enter centre:");
scanf("%lf%lf",&xc,&yc);
	printf("Enter radius:");
scanf("%lf%lf",&rx,&ry);
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
	
	glutInitWindowSize(500,500);
	glutInitWindowPosition(150,150);
	glutCreateWindow("elipse Drawing");
		glutDisplayFunc(display);
	glLoadIdentity();
	glMatrixMode(GL_PROJECTION);
	glOrtho(0,500,0,500,-1,1);
	init();
	glutMainLoop();
	return 0;
}

