#include <GL/glut.h>
#include <cmath>
#include <cstdlib>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0, .6f, .2f); glBegin(GL_QUADS); glVertex2f(-.7f,-.3f); glVertex2f(.7f,-.3f); glVertex2f(.7f,.3f); glVertex2f(-.7f,.3f); glEnd();
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
    glutCreateWindow("Draw Rectangles");
    setup();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
