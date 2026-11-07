#include <GL/glut.h>
#include <cmath>
#include <cstdlib>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(.2f,.5f,.8f); glBegin(GL_TRIANGLE_FAN); glVertex2f(0,0); for(int i=0;i<=120;i++){ float a=2*3.1415926f*i/120; glVertex2f(.7f*cos(a),.35f*sin(a)); } glEnd();
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
    glutCreateWindow("Filled Ellipse");
    setup();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
