#include <GL/glut.h>
#include <cmath>
#include <cstdlib>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(.2f,.7f,.2f); glBegin(GL_QUADS); glVertex2f(-1,-1); glVertex2f(1,-1); glVertex2f(1,-.6f); glVertex2f(-1,-.6f); glEnd(); glColor3f(.9f,.7f,.4f); glBegin(GL_QUADS); glVertex2f(-.45f,-.6f); glVertex2f(.45f,-.6f); glVertex2f(.45f,.2f); glVertex2f(-.45f,.2f); glEnd(); glColor3f(.7f,.1f,.1f); glBegin(GL_TRIANGLES); glVertex2f(-.55f,.2f); glVertex2f(.55f,.2f); glVertex2f(0,.75f); glEnd();
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
    glutCreateWindow("2D House");
    setup();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
