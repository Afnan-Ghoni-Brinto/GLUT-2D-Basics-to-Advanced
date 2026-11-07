#include <GL/glut.h>
#include <cmath>
#include <cstdlib>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glPointSize(12); glBegin(GL_POINTS); glColor3f(1,0,0); glVertex2f(-.5f,.3f); glColor3f(0,1,0); glVertex2f(0,.3f); glColor3f(0,0,1); glVertex2f(.5f,.3f); glEnd();
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
    glutCreateWindow("Draw Points");
    setup();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
