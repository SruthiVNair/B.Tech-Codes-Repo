
#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
void init()
{
glClear(GL_COLOR_BUFFER_BIT);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0,500,0,500,-1,1);
glClearColor(1.0f,0.0f,0.0f,1.0f);
glFlush();



}
void draw()
{}


int main(int argc,char **argv)
{
printf("enter the coordinates ");
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);

glutInitWindowSize(350,350);
glutInitWindowPosition(50,50);
glutCreateWindow("new");
init();
glutDisplayFunc(draw);

glutMainLoop();































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































return 0;
}

