#include <GL/glut.h>
#include <cmath>
#include <cstdlib>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(.9f,.1f,.1f); glBegin(GL_QUADS); glVertex2f(-.7f,-.2f); glVertex2f(.7f,-.2f); glVertex2f(.55f,.15f); glVertex2f(-.45f,.15f); glEnd(); glColor3f(.2f,.2f,.2f); for(int j=-1;j<=1;j+=2){float cx=j*.42f; glBegin(GL_TRIANGLE_FAN); glVertex2f(cx,-.22f); for(int i=0;i<=40;i++){float a=2*3.1415926f*i/40; glVertex2f(cx+.13f*cos(a),-.22f+.13f*sin(a));} glEnd();}
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
    glutCreateWindow("2D Car");
    setup();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
