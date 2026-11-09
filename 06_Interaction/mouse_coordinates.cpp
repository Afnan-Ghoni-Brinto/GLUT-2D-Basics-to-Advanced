#include <GL/glut.h>
#include <cstdio>
void display(){ glClear(GL_COLOR_BUFFER_BIT); glColor3f(0,0,0); glRasterPos2f(-.8f,0); const char* t="Click in the window; coordinates print in terminal."; while(*t) glutBitmapCharacter(GLUT_BITMAP_8_BY_13,*t++); glFlush(); }
void mouse(int b,int s,int x,int y){ if(b==GLUT_LEFT_BUTTON&&s==GLUT_DOWN) printf("Mouse pixel: x=%d, y=%d\\n",x,y); }
int main(int argc,char** argv){ glutInit(&argc,argv); glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB); glutInitWindowSize(700,500); glutCreateWindow("Mouse Coordinates"); glClearColor(1,1,1,1); gluOrtho2D(-1,1,-1,1); glutDisplayFunc(display); glutMouseFunc(mouse); glutMainLoop(); }
