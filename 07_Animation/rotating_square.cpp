#include <GL/glut.h>
float angle=0;
void display(){ glClear(GL_COLOR_BUFFER_BIT); glPushMatrix(); glRotatef(angle,0,0,1); glColor3f(.8f,.2f,.1f); glBegin(GL_QUADS); glVertex2f(-.25f,-.25f); glVertex2f(.25f,-.25f); glVertex2f(.25f,.25f); glVertex2f(-.25f,.25f); glEnd(); glPopMatrix(); glutSwapBuffers(); }
void update(int){ angle+=1; if(angle>=360)angle-=360; glutPostRedisplay(); glutTimerFunc(16,update,0); }
int main(int argc,char** argv){ glutInit(&argc,argv); glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB); glutInitWindowSize(700,500); glutCreateWindow("Rotating Square"); glClearColor(1,1,1,1); gluOrtho2D(-1,1,-1,1); glutDisplayFunc(display); glutTimerFunc(16,update,0); glutMainLoop(); }
