#include <GL/glut.h>
#include <cmath>
#include <cstdlib>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.1f, 0.3f, 0.8f); glBegin(GL_TRIANGLES); glVertex2f(0, 0.6f); glVertex2f(-0.5f, -0.4f); glVertex2f(0.5f, -0.4f); glEnd();
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
    glutCreateWindow("Hello GLUT");
    setup();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
