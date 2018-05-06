#include<GL/glut.h>
void initGL()
{
glClearColor(0.0f,0.0f,0.0f,1.0f);
}
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_POLYGON);
glColor3f(0.0f,0.0f,1.0f);
glVertex2f(0.1f,-0.3f);
glVertex2f(0.4f,-0.1f);
glVertex2f(0.7f,-0.3f);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.0f,01.0f,1.0f);
glVertex2f(0.1f,-0.3f);
glVertex2f(0.7f,-0.3f);
glVertex2f(0.7f,-0.7f);
glVertex2f(0.1f,-0.7f);
glEnd();
glBegin(GL_POLYGON);
glColor3f(2.0f,01.0f,1.0f);
glVertex2f(0.3f,-0.7f);
glVertex2f(0.3f,-0.4f);
glVertex2f(0.5f,-0.4f);
glVertex2f(0.5f,-0.7f);
glEnd();
glFlush();
}
int main(int argc,char **argv)
{
glutInit(&argc,argv);
glutCreateWindow("Vertex,Primitive&Color");
glutInitWindowSize(320,320);
glutInitWindowPosition(50,50);
glutDisplayFunc(display);
initGL();
glutMainLoop();
return 0;
}
