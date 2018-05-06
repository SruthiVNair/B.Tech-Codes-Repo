#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
float xa,xb,x,y,dx,dy,p,pk,k,xb,yb;
void init()
{
glclear(GL_COLOR_BUFFER_BIT);
glClearColor(1.0f,0.0f,0.0f,0.0f);
glLoadIdentity();
glortho2D(0.0,500,0,500,-1,1);
glMatrixmode(GL_PROJECTION);
}

