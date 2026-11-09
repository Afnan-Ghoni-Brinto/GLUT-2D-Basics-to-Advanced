#include <GL/glut.h>
float x=0,y=0;
void display(){ glClear(GL_COLOR_BUFFER_BIT); glColor3f(.8f,.2f,.1f); glBegin(GL_QUADS); glVertex2f(x-.1f,y-.1f); glVertex2f(x+.1f,y-.1f); glVertex2f(x+.1f,y+.1f); glVertex2f(x-.1f,y+.1f); glEnd(); glutSwapBuffers(); }
void special(int k,int,int){ if(k==GLUT_KEY_LEFT)x-=.05f; if(k==GLUT_KEY_RIGHT)x+=.05f; if(k==GLUT_KEY_UP)y+=.05f; if(k==GLUT_KEY_DOWN)y-=.05f; glutPostRedisplay(); }
int main(int argc,char** argv){ glutInit(&argc,argv); glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB); glutInitWindowSize(700,500); glutCreateWindow("Arrow Keys"); glClearColor(1,1,1,1); gluOrtho2D(-1,1,-1,1); glutDisplayFunc(display); glutSpecialFunc(special); glutMainLoop(); }
