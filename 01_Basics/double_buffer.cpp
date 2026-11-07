#include <GL/glut.h>
void display(){ glClear(GL_COLOR_BUFFER_BIT); glColor3f(.2f,.5f,.8f);
glBegin(GL_QUADS); glVertex2f(-.4f,-.4f); glVertex2f(.4f,-.4f);
glVertex2f(.4f,.4f); glVertex2f(-.4f,.4f); glEnd(); glutSwapBuffers(); }
int main(int argc,char** argv){ glutInit(&argc,argv); glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
glutInitWindowSize(700,500); glutCreateWindow("Double Buffer"); glClearColor(1,1,1,1);
gluOrtho2D(-1,1,-1,1); glutDisplayFunc(display); glutMainLoop(); }
