#include <GL/glut.h>
float x=-.8f; int direction=1;
void display(){ glClear(GL_COLOR_BUFFER_BIT); glColor3f(.9f,.2f,.2f); glBegin(GL_QUADS); glVertex2f(x-.08f,-.08f); glVertex2f(x+.08f,-.08f); glVertex2f(x+.08f,.08f); glVertex2f(x-.08f,.08f); glEnd(); glutSwapBuffers(); }
void update(int){ x+=.01f*direction; if(x>.9f||x<-.9f)direction=-direction; glutPostRedisplay(); glutTimerFunc(16,update,0); }
int main(int argc,char** argv){ glutInit(&argc,argv); glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB); glutInitWindowSize(700,500); glutCreateWindow("Timer Animation"); glClearColor(1,1,1,1); gluOrtho2D(-1,1,-1,1); glutDisplayFunc(display); glutTimerFunc(16,update,0); glutMainLoop(); }
