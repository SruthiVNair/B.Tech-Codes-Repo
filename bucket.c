

#include<GL/glut.h>
#include<stdio.h>
#include<math.h>

int k;

void init(void)
{
glClearColor(0.0f,0.0f,0.0f,1.0f);
	glMatrixMode(GL_PROJECTION);
gluOrtho2D(0.0,200.0,0.0,200.0);
}

void setpoint(GLint x,GLint y)
{
glBegin(GL_POINTS);
glVertex2i(x,y);
glEnd();
}
void transform(int x,int y,int tx,int ty)
{
glColor3f(0.0f,1.0f,0.0f);
setpoint(x+tx,y+ty);
glColor3f(255.0f,255.0f,255.0f);
}
int round1(double number)
{
return(number>=0)?(int)(number+0.5):(int)(number-0.5);
}



void linedda(int x0,int y0,int x1,int y1)
{

int dy=y1-y0,dx=x1-x0,steps,i;
float xinc,yinc,x=x0,y=y0;
if(abs(dx)>abs(dy))
{
steps=abs(dx);
}
else
{
steps=abs(dy);
}
xinc=(float)dx/(float)steps;
yinc=(float)dy/(float)steps;
setpoint(round1(x),round1(y));
for(i=0;i<steps;i++)
{
x+=xinc;
y+=yinc;
setpoint(round1(x),round1(y));
}
glutSwapBuffers();
}

void circle(int xc,int yc)
{
int r=2,x=0,y=r,d=3/2-r,dt;
glColor3f(0,0,1);
while(x<=y)
{
setpoint(xc+x,yc+y);
setpoint(xc+y,yc+x);
setpoint(xc-x,yc+y);
setpoint(xc+y,yc-x);
setpoint(xc-x,yc-y);
setpoint(xc-y,yc-y);
setpoint(xc+x,yc-y);
setpoint(xc-y,yc+x);
if(d<0)
dt=(2*x)+3;
else
{
dt=2*(x-y)+5;
y++;
}
x++;
}
glFlush();
}

void draw()
{
glClear(GL_COLOR_BUFFER_BIT);
circle(102,163);
glColor3f(255,255,255);

linedda(86,170,99,170);
linedda(99,170,99,174);
linedda(86,170,86,174);
linedda(86,174,99,174);



linedda(90,170,90,165);
linedda(95,170,95,165);

linedda(25,160,100,160);
linedda(21,165,100,165);
linedda(25,160,25,20);
linedda(21,165,21,20);
linedda(25,20,21,20);


linedda(150,120,150,20);
linedda(150,20,50,20);
linedda(50,20,50,120);


int i=0,k;
glColor3f(0,0,255);
while(i<15)
{
k=0;
while(k<10000)
{
int j=0;
while(j<10000)
{
j++;
}
k++;
}
circle(102,163-(10*i));
i++;
}
i=0;
while(i<100)
{
k=0;
while(k<10000)
{
int j=0;
while(j<10000)
{
j++;
}
k++;
}

linedda(51,(21+i),149,(21+i));
i++;
}
}
int main(int argc,char** argv)
{

glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);	
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,250);
	glutCreateWindow("ROTATION");
	init();
	
glutDisplayFunc(draw);
	glutMainLoop();
	
}


