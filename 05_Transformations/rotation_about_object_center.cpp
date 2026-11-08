#include <GL/glut.h>
#include <cmath>
#include <cstdlib>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix(); glTranslatef(.35f,.2f,0); glRotatef(45,0,0,1); glTranslatef(-.35f,-.2f,0); glColor3f(.2f,.5f,.8f); glBegin(GL_QUADS); glVertex2f(.15f,.05f); glVertex2f(.55f,.05f); glVertex2f(.55f,.35f); glVertex2f(.15f,.35f); glEnd(); glPopMatrix();
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
    glutCreateWindow("Rotation About Object Center");
    setup();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
