#include <GL/glut.h>
#include <cstdlib>
float x=0,y=0;
void display(){ glClear(GL_COLOR_BUFFER_BIT); glColor3f(.1f,.4f,.9f); glBegin(GL_QUADS); glVertex2f(x-.1f,y-.1f); glVertex2f(x+.1f,y-.1f); glVertex2f(x+.1f,y+.1f); glVertex2f(x-.1f,y+.1f); glEnd(); glutSwapBuffers(); }
void key(unsigned char k,int,int){ if(k==27) exit(0); if(k=='a')x-=.05f; if(k=='d')x+=.05f; if(k=='w')y+=.05f; if(k=='s')y-=.05f; glutPostRedisplay(); }
int main(int argc,char** argv){ glutInit(&argc,argv); glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB); glutInitWindowSize(700,500); glutCreateWindow("WASD Move - Esc Exit"); glClearColor(1,1,1,1); gluOrtho2D(-1,1,-1,1); glutDisplayFunc(display); glutKeyboardFunc(key); glutMainLoop(); }
