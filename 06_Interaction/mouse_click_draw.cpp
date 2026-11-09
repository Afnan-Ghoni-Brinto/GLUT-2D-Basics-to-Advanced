#include <GL/glut.h>
float px=0,py=0; bool visible=false;
void display(){ glClear(GL_COLOR_BUFFER_BIT); if(visible){ glPointSize(10); glColor3f(1,0,0); glBegin(GL_POINTS); glVertex2f(px,py); glEnd(); } glFlush(); }
void mouse(int b,int s,int x,int y){ if(b==GLUT_LEFT_BUTTON&&s==GLUT_DOWN){ px=2.0f*x/700-1; py=1-2.0f*y/500; visible=true; glutPostRedisplay(); } }
int main(int argc,char** argv){ glutInit(&argc,argv); glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB); glutInitWindowSize(700,500); glutCreateWindow("Click to Draw"); glClearColor(1,1,1,1); gluOrtho2D(-1,1,-1,1); glutDisplayFunc(display); glutMouseFunc(mouse); glutMainLoop(); }
