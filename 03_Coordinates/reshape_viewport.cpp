#include <GL/glut.h>
void display(){ glClear(GL_COLOR_BUFFER_BIT); glColor3f(.2f,.5f,.8f); glBegin(GL_QUADS);
glVertex2f(-.5f,-.5f); glVertex2f(.5f,-.5f); glVertex2f(.5f,.5f); glVertex2f(-.5f,.5f); glEnd(); glFlush(); }
void reshape(int w,int h){ glViewport(0,0,w,h); glMatrixMode(GL_PROJECTION); glLoadIdentity(); gluOrtho2D(-1,1,-1,1); glMatrixMode(GL_MODELVIEW); glLoadIdentity(); }
int main(int argc,char** argv){ glutInit(&argc,argv); glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB); glutInitWindowSize(600,500); glutCreateWindow("Reshape and Viewport"); glClearColor(1,1,1,1); glutDisplayFunc(display); glutReshapeFunc(reshape); glutMainLoop(); }
