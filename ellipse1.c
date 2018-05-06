#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
#define Round(a)((int)(a+0.5))
float xc;
float yc;
float rx;
float ry;
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
	glClearColor(0.0f,0.0f,1.0f,1.0f);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
	glOrtho(0,500,0,500,-1,1);
}		
void display()
{

		
glClear(GL_COLOR_BUFFER_BIT);
	
	float x=0;
	float y=ry;
	if(rx<ry)
{
	for(x=0;x<=rx;x+=.01)
	{
		
y=sqrt((1-((x*x)/(rx*rx)))*(ry*ry));

	setpixel(x+xc,y+yc);
	setpixel(-x+xc,y+yc);
					setpixel(-x+xc,-y+yc);
	setpixel(x+xc,-y+yc);
		}
}
else
{
for(y=0;y<=ry;y+=.1)
{
		
	x=sqrt((1-((y*y)/(ry*ry)))*(rx*rx));


					setpixel(x+xc,y+yc);
					setpixel(-x+xc,y+yc);
					setpixel(-x+xc,-y+yc);
					setpixel(x+xc,-y+yc);
	}
}
glutSwapBuffers();		
}
int main(int argc,char **argv)
{
	printf("Enter centre:");
scanf("%f%f",&xc,&yc);
	printf("Enter radius:");
scanf("%f%f",&rx,&ry);
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
	
	glutInitWindowSize(500,500);
	glutInitWindowPosition(150,150);
	glutCreateWindow("elipse");
		glutDisplayFunc(display);
	glLoadIdentity();
	glMatrixMode(GL_PROJECTION);
	glOrtho(0,500,0,500,-1,1);
init();
 glutMainLoop();
 return 0;
}


