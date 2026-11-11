#include <GL/glut.h>
#include <cmath>
#include <cstdlib>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(.15f,.15f,.15f); glBegin(GL_QUADS); glVertex2f(-.25f,-.7f); glVertex2f(.25f,-.7f); glVertex2f(.25f,.7f); glVertex2f(-.25f,.7f); glEnd(); for(int j=0;j<3;j++){ glColor3f(j==0?1:0.2f,j==1?1:0.2f,j==2?0:0.2f); float cy=.45f-j*.45f; glBegin(GL_TRIANGLE_FAN); glVertex2f(0,cy); for(int i=0;i<=40;i++){float a=2*3.1415926f*i/40; glVertex2f(.14f*cos(a),cy+.14f*sin(a));} glEnd(); }
    glFlush();
}

void setup() {
    glClearColor(1, 1, 1, 1);
    gluOrtho2D(-1, 1, -1, 1);

}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(700, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("2D Traffic Light");
    setup();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
