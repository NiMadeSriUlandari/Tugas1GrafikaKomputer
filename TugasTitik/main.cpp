#include <GL/glut.h>
#include <GL/glut.h>
void titik ();
main(int argc, char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(1280,720);
glutInitWindowPosition(0,0);
glutCreateWindow("Project 1 - Membuat Titik Berwarna RGB");
glClearColor(0.0,0.0,0.0,0.0);
glMatrixMode(GL_PROJECTION);
glOrtho(1.0,1.0,1.0,1.0,-1.0,1.0);
glutDisplayFunc(titik);
glutMainLoop();
}
void titik()
{
glClear(GL_COLOR_BUFFER_BIT);
glPointSize(6.0);
glBegin(GL_POINTS);

glColor3ub(255,0,0);
glVertex2f(-0.2,0.0);

glColor3ub(0, 255, 0);
glVertex2f(-0.1,0.0);

glColor3ub(0, 0, 255);
glVertex2f(0.0,0.0);

glColor3f(1.0, 0.0, 1.0);
glVertex2f(0.1,0.0);

glColor3f(0.5, 1.0, 0.5);
glVertex2f(0.2,0.0);

glColor3f(1.0, 0.5, 0.0);
glVertex2f(0.3,0.0);

glEnd();
glFlush();
}
