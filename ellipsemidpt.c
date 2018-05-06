
#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
//#define Round(a)((int)(a+0.5))
double rx,ry,xc,yc;
void init()
{
	
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0,500,0,500,-1,1);
	glClearColor(1.0f,1.0f,1.0f,1.0f);
}	
void setpixel(int x,int y)
{
		glBegin(GL_POINTS);
		glColor3f(1.0f,0.0f,0.0f);
		glVertex2f(x,y);
		glEnd();
		glFlush();
}
	
void ellipse(int xc, int yc, int x,int y)
{
	setpixel(xc+x,yc+y);
	setpixel(xc-x,yc+y);
	setpixel(xc+x,yc-y);
	setpixel(xc-x,yc-y);
	
	}
	
void ellipsemid()
{
	int x2,y2,trx2,try2,p;
	y2=pow(ry,2);
	x2=pow(rx,2);
	trx2=2*x2;
	try2=2*y2;
	int x=0;
	int y=ry;
	int px=try2*x;
	int py=trx2*y;
	p=round(y2-(x2*ry)+(0.25*y2));
	while(px<py)
	{
		x++;
		px=px+try2;
		if(p<0)
			p=p+y2+px;
		else
		{
			y--;
			py=py-trx2;
			p=p+y2+px-py;
		}
	ellipse(xc,yc,x,y);
	}
	p=round(y2*(x+0.5)*(x+0.5)+x2*(y-1)*(y-1)-x2*y2);
	while(y>0)
	{
		y--;
		py=py-trx2;
		if(p>0)
			p=p+x2-py;
		else
		{
			x++;
			px=px+try2;
			p=p+x2-py+px;
			
	}
	ellipse(xc,yc,x,y);
}
}
void draw()
{
	glClearColor(1.0f,1.0f,1.0f,1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0f,0.0f,0.0f);
	glPointSize(3);
	ellipsemid();
	glFlush();
	glutSwapBuffers();	
}
int main(int argc,char **argv)
{
	printf("Enter ellipse centre points:");
	scanf("%lf%lf",&xc,&yc);
	printf("Enter major axis:");
	scanf("%lf",&rx);
	printf("Enter minor axis:");
	scanf("%lf",&ry);
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(150,150);
	glutCreateWindow("NEW");
	init();
	glutDisplayFunc(draw);
	glutMainLoop();
	return 0;
}


