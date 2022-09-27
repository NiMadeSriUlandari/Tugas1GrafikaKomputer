#include <GL/glut.h>
#include <math.h>
void display(void)
{
glClearColor (0.0f, 0.0f, 0.0f, 0.0f);
glClear (GL_COLOR_BUFFER_BIT);

glPushMatrix ();
glClearColor(1,1,1,0);
glColor3f(255,0,0); //
glBegin(GL_LINES);
glVertex3f(0,0,-0.8);
glVertex3f(9.9,8.9,0.1);
glEnd ();
glFlush();
}

int main(int argc, char **argv)
{
glutInit(&argc, argv);
glutCreateWindow("Tugas Grafik Komputer_Garis");
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
