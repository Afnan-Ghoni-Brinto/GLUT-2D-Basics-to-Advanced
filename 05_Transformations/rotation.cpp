#include <GL/glut.h>
#include <cmath>
#include <cstdlib>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix(); glRotatef(35,0,0,1); glColor3f(.8f,.1f,.2f); glBegin(GL_QUADS); glVertex2f(-.5f,-.15f); glVertex2f(.5f,-.15f); glVertex2f(.5f,.15f); glVertex2f(-.5f,.15f); glEnd(); glPopMatrix();
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
    glutCreateWindow("2D Rotation");
    setup();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
