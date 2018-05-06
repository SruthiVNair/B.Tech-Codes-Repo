#include<GL/glut.h>
void initGL()
{
glClearColor(0.0f,0.0f,0.0f,1.0f);
}
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_POINT);
glColor3f(0.0f,0.0f,1.0f);

glEnd();
glFlush();

}
int main(int argc,char **argv)
{
glutInit(&argc,argv);
glutCreateWindow("new");
glutInitWindowSize(320,320);
glutInitWindowPosition(50,50);
glutDisplayFunc(display);
initGL();
glutMainLoop();
return 0;
}
