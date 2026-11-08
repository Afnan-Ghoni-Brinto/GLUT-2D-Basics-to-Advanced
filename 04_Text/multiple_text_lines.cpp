#include <GL/glut.h>
#include <cmath>
#include <cstdlib>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0,0,0); const char* a="Computer Graphics"; const char* b="2D OpenGL with GLUT"; glRasterPos2f(-.5f,.2f); for(;*a;a++) glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,*a); glRasterPos2f(-.5f,-.1f); for(;*b;b++) glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,*b);
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
    glutCreateWindow("Multiple Text Lines");
    setup();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
