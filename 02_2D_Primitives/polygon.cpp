#include <GL/glut.h>
#include <cmath>
#include <cstdlib>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(.7f,.2f,.8f); glBegin(GL_POLYGON); glVertex2f(-.5f,0); glVertex2f(-.3f,.5f); glVertex2f(.3f,.6f); glVertex2f(.6f,.1f); glVertex2f(.2f,-.5f); glVertex2f(-.4f,-.4f); glEnd();
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
    glutCreateWindow("Polygon");
    setup();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
