#include <GL/glut.h>
#include <cmath>
float x=0,y=0,vx=.012f,vy=.009f; const float PI=3.1415926f;
void display(){ glClear(GL_COLOR_BUFFER_BIT); glColor3f(.2f,.4f,.9f); glBegin(GL_TRIANGLE_FAN); glVertex2f(x,y); for(int i=0;i<=60;i++){ float a=2*PI*i/60; glVertex2f(x+.08f*cos(a),y+.08f*sin(a)); } glEnd(); glutSwapBuffers(); }
void update(int){ x+=vx; y+=vy; if(x>.9f||x<-.9f)vx=-vx; if(y>.9f||y<-.9f)vy=-vy; glutPostRedisplay(); glutTimerFunc(16,update,0); }
int main(int argc,char** argv){ glutInit(&argc,argv); glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB); glutInitWindowSize(700,500); glutCreateWindow("Bouncing Ball"); glClearColor(1,1,1,1); gluOrtho2D(-1,1,-1,1); glutDisplayFunc(display); glutTimerFunc(16,update,0); glutMainLoop(); }
