#include <GL/glut.h>
void display(){ glClear(GL_COLOR_BUFFER_BIT); glColor3f(0,0,1);
glBegin(GL_QUADS); glVertex2i(100,100); glVertex2i(300,100); glVertex2i(300,250); glVertex2i(100,250); glEnd(); glFlush(); }
void reshape(int w,int h){ glViewport(0,0,w,h); glMatrixMode(GL_PROJECTION); glLoadIdentity(); gluOrtho2D(0,600,0,500); glMatrixMode(GL_MODELVIEW); glLoadIdentity(); }
int main(int argc,char** argv){ glutInit(&argc,argv); glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB); glutInitWindowSize(600,500); glutCreateWindow("Pixel Coordinates"); glClearColor(1,1,1,1); glutDisplayFunc(display); glutReshapeFunc(reshape); glutMainLoop(); }
