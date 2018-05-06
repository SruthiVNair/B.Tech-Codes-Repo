


#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
double x1,x2,x3,ya,y2,y3,theta;
double round(double b)
{
	return floor(b+0.5);
}
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

ddaline(double a, double b, double c, double d)
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
	double x11,ya1,x21,y21,x31,y31;
	glColor3f(1.0f,0.0f,0.0f);
	ddaline(x1,ya,x2,y2);
	ddaline(x2,y2,x3,y3);
	ddaline(x3,y3,x1,ya);
	theta=(theta*3.14)/180;
	glColor3f(1.0f,0.0f,1.0f);
	x11=x1*cos(theta)-ya*sin(theta);
	ya1=x1*sin(theta)+ya*cos(theta);
	x21=x2*cos(theta)-y2*sin(theta);
	y21=x2*sin(theta)+y2*cos(theta);
	x31=x3*cos(theta)-y3*sin(theta);
	y31=x3*sin(theta)+y3*cos(theta);
	
	ddaline(x11,ya1,x21,y21);
	ddaline(x21,y21,x31,y31);
	ddaline(x31,y31,x11,ya1);
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
	printf("Enter angle:");
	scanf("%lf",&theta);
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(150,150);
	glutCreateWindow("Translation");
	glutDisplayFunc(draw);
	init();
	glutMainLoop();
	return 0;
}


