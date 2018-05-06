

#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
double xa,x2,x3,ya,y2,y3,tx,ty;
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
linedda(double a, double b, double c, double d)
{
	double dx,dy,steps,xinc,yinc,x,y;
	int k;
	dx=c-a;
	dy=d-b;
	x=a;
	y=b;
     if(abs(dx)>abs(dy))
      { steps=abs(dx);}
     else
      steps=abs(dy);
      xinc=dx/steps;
      yinc=dy/steps;
      setpixel(x,y);
  for(k=0;k<steps;k=k++)
  { x+=xinc;
   y+=yinc;
  setpixel(round(x),round(y));
 }
	}
void draw()
{
	glColor3f(1.0f,0.0f,0.0f);
	linedda(xa,ya,x2,y2);
	linedda(x2,y2,x3,y3);
	linedda(x3,y3,xa,ya);
        glColor3f(0.0f,1.0f,0.0f);
	linedda(xa+tx,ya+ty,x2+tx,y2+ty);
	linedda(x2+tx,y2+ty,x3+tx,y3+ty);
	linedda(x3+tx,y3+ty,xa+tx,ya+ty);
	glFlush();
        glutSwapBuffers();
        }
int main(int argc,char **argv)
{
	printf("Enter first coordinate:");
	scanf("%lf%lf",&xa,&ya);
	printf("Enter second coordinate:");
	scanf("%lf%lf",&x2,&y2);
	printf("Enter third coordinate:");
	scanf("%lf%lf",&x3,&y3);
	printf("Enter translation pair:");
	scanf("%lf%lf",&tx,&ty);
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(150,150);
	glutCreateWindow("translation Drawing");
	glutDisplayFunc(draw);
	init();
	glutMainLoop();
	return 0;
}

