#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
//#define Round(a)((int)(a+0.5))
double xc;
double yc;
double rx;
double ry;
void setpixel(int x,int y)
{
glBegin(GL_POINTS);
		
		glColor3f(0.0f,1.0f,1.0f);
		glVertex2f(x,y);
glEnd();
		glFlush();
}
void init()
{
glClearColor(0.0f,0.0f,1.0f,1.0f);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(50,1000,50,1000,-1,1);
}	
void ellipse(int xc,int yc,int x,int y)
{
setpixel(xc+x,yc+y);
setpixel(xc-x,yc+y);
setpixel(xc+x,yc-y);
setpixel(xc-x,yc-y);
}	

void ellipsemid()
{
int rx2,ry2,trx2,try2,p,x,y,px,py;
ry2=pow(ry,2);
rx2=pow(rx,2);
trx2=2*rx2;
try2=2*ry2;
 x=0;
 y=ry;
 px=try2*x;
 py=trx2*y;
p=(ry2-(rx2*ry)+(0.25*rx2));
while(px<py)
{
x++;
px=px+try2;
if(p<0)

p=px+p+ry2;

else
{
 y--;
 p=p+try2+px-py;
}
ellipse(xc,yc,x,y);
}
p=round(ry2*(x+0.5)*(x+0.5)+rx2*(y-1)*(y-1)-rx2*ry2);
	while(y>0)
	{
		y--;
		py=py-trx2;
		if(p>0)
			p=p+rx2-py;
		else
		{
			x++;
			px=px+try2;
			p=p+rx2-py+px;
			
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
	glutCreateWindow("New");
	init();
	glutDisplayFunc(draw);
	glutMainLoop();
	return 0;
}


