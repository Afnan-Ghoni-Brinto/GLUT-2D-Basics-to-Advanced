#include <GL/glut.h>
#include <cmath>
#include <cstdlib>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(3); glEnable(GL_LINE_STIPPLE); glLineStipple(1,0x00FF); glColor3f(0,0,0); glBegin(GL_LINES); glVertex2f(-.8f,.3f); glVertex2f(.8f,.3f); glEnd(); glDisable(GL_LINE_STIPPLE); glBegin(GL_LINES); glVertex2f(-.8f,-.3f); glVertex2f(.8f,-.3f); glEnd();
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
    glutCreateWindow("Line Styles");
    setup();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
