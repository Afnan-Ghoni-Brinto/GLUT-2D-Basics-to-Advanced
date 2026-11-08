#include <GL/glut.h>
#include <cmath>
#include <cstdlib>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0,0,.8f); glBegin(GL_QUADS); glVertex2f(-.2f,-.2f); glVertex2f(.2f,-.2f); glVertex2f(.2f,.2f); glVertex2f(-.2f,.2f); glEnd(); glPushMatrix(); glTranslatef(.5f,0,0); glScalef(1.5f,1.5f,1); glColor3f(.8f,.2f,.1f); glBegin(GL_QUADS); glVertex2f(-.2f,-.2f); glVertex2f(.2f,-.2f); glVertex2f(.2f,.2f); glVertex2f(-.2f,.2f); glEnd(); glPopMatrix();
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
    glutCreateWindow("2D Scaling");
    setup();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
