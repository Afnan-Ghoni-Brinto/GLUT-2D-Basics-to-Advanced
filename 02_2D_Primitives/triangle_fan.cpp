#include <GL/glut.h>
#include <cmath>
#include <cstdlib>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(.8f,.4f,.1f); glBegin(GL_TRIANGLE_FAN); glVertex2f(0,0); glVertex2f(0,.7f); glVertex2f(.6f,.3f); glVertex2f(.5f,-.4f); glVertex2f(-.5f,-.4f); glVertex2f(-.6f,.3f); glVertex2f(0,.7f); glEnd();
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
    glutCreateWindow("Triangle Fan");
    setup();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
