#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
int i=0;
int round1(float b)
{
	int c;
	c=floor(b+.5);
	return c;
}
float x1,x2,x3,ya,y2,y3,theta,xc,yc,r;




void init()
{
	glClearColor(0.0f,0.0f,0.0f,0.0f);
	glClear(GL_COLOR_BUFFER_BIT);
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
void linedda(float x1,float ya,float x2,float y2)
{
float dx,dy,step,x,y,xinc,yinc;
int k;
 dx=x2-x1;
x=x1;
y=ya;
dy=y2-ya;


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
setpixel(round1(x),round1(y));
}
}

void circle(float xc,float yc,float r)
{
int x,y,p;
x=0;
y=r;
p=1-r;
while(x<=y)
{
if(p<0)
{
p=p+2*x+3;
x=x+1;
}
else
{
p=p+(2*x)-(2*y)+5;
y=y-1;
}
x++;
setpixel(xc+x,yc+y);
setpixel(xc-x,yc+y);
setpixel(xc+x,yc-y);
setpixel(xc-x,yc-y);
setpixel(xc+y,yc+x);
setpixel(xc-y,yc+x);
setpixel(xc+y,yc-x);
setpixel(xc-y,yc-x);
}

}
void draw()
{
   glPointSize(4);
	glColor3f(0.0,1.0,0.0);
linedda(150+i,150,220+i,150);
//linedda(210+i,150,250+i,150);
linedda(240+i,150,270+i,150);
//linedda(260+i,150,300+i,150);
linedda(290+i,150,360+i,150);
linedda(360+i,150,360+i,200);
linedda(360+i,200,150+i,200);
linedda(150+i,200,150+i,150);
linedda(200+i,200,230+i,270);
linedda(230+i,270,280+i,270);
linedda(280+i,270,310+i,200);
circle(230+i,150,10);
circle(280+i,150,10);
glutSwapBuffers();
glColor3f(0.0f,0.0f,0.0f);
linedda(150+i,150,220+i,150);
//linedda(210+i,150,250+i,150);
linedda(240+i,150,270+i,150);
//linedda(260+i,150,300+i,150);
linedda(290+i,150,360+i,150);
linedda(360+i,150,360+i,200);
linedda(360+i,200,150+i,200);
linedda(150+i,200,150+i,150);
linedda(200+i,200,230+i,270);
linedda(230+i,270,280+i,270);
linedda(280+i,270,310+i,200);
circle(230+i,150,10);
circle(280+i,150,10);
if(i<800)
i=i+3;
glutPostRedisplay();
	
}
int main(int argc,char**argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);

glutInitWindowSize(800,800);
glutInitWindowPosition(100,100);
glutCreateWindow("car");

glutDisplayFunc(draw);
init();
glutMainLoop();
return 0;
}
