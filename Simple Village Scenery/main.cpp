#include <GL/glut.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(5.0f);
    glBegin(GL_QUADS);//Filed
    glColor3f(0.25f, 0.85f, 0.0f);
    glVertex2d(0.0f,20.0f);
    glVertex2d(0.0f,40.0f);
    glVertex2d(105.0f,40.0f);
    glVertex2d(105.0f,20.0f);
    glEnd();

    glBegin(GL_POLYGON); //River
    glColor3f(0.0f, 0.4f, 1.0f);
    glVertex2d(0.0f,0.0f);
    glVertex2d(0.0f,20.0f);
    glVertex2d(20.0f,21.0f);
    glVertex2d(40.0f,20.0f);
    glVertex2d(55.0f,20.0f);
    glVertex2d(85.0f,21.0f);
    glVertex2d(95.0f,21.0f);
    glVertex2d(100.0f,21.0f);
    glVertex2d(105.0f,21.0f);
    glVertex2d(105.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);//sky
    glColor3f(0.0f, 0.65f, 1.0f);
    glVertex2d(0.0f,40.0f);
    glVertex2d(0.0f,70.0f);
    glVertex2d(105.0f,70.0f);
    glVertex2d(105.0f,40.0f);
    glEnd();

    glBegin(GL_TRIANGLES);//Left Mountain
    glColor3f(0.0f, 0.45f, 0.1f);
    glVertex2d(0.0f,40.0f);
    glVertex2d(35.0f,55.0f);
    glVertex2d(70.0f,40.0f);
    glEnd();

    glBegin(GL_TRIANGLES);//Right Mountain
    glColor3f(0.0f, 0.45f, 0.1f);
    glVertex2d(45.0f,40.0f);
    glVertex2d(80.0f,55.0f);
    glVertex2d(105.0f,40.0f);
    glEnd();

    glBegin(GL_QUADS);//1st home body
    glColor3f(1.0f, 0.92f, 0.75f);
    glVertex2d(20.0f,25.0f);
    glVertex2d(20.0f,35.0f);
    glVertex2d(40.0f,35.0f);
    glVertex2d(40.0f,25.0f);
    glEnd();

    glBegin(GL_TRIANGLES);//1st triangle
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2d(18.0f,35.0f);
    glVertex2d(30.0f,42.0f);
    glVertex2d(42.0f,35.0f);
    glEnd();

    glBegin(GL_QUADS);//1st home Door
    glColor3f(0.45f, 0.2f, 0.05f);
    glVertex2d(30.0f,25.0f);
    glVertex2d(35.0f,25.0f);
    glVertex2d(35.0f,30.0f);
    glVertex2d(30.0f,30.0f);
    glEnd();

    glBegin(GL_QUADS);//1st home window
    glColor3f(0.45f, 0.2f, 0.05f);
    glVertex2d(22.0f,30.0f);
    glVertex2d(25.0f,30.0f);
    glVertex2d(25.0f,33.0f);
    glVertex2d(22.0f,33.0f);
    glEnd();

    glBegin(GL_QUADS);//2nd home body
    glColor3f(1.0f, 0.92f, 0.75f);
    glVertex2d(50.0f,25.0f);
    glVertex2d(50.0f,35.0f);
    glVertex2d(70.0f,35.0f);
    glVertex2d(70.0f,25.0f);
    glEnd();

    glBegin(GL_TRIANGLES);//2nd triangle
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2d(48.0f,35.0f);
    glVertex2d(60.0f,42.0f);
    glVertex2d(72.0f,35.0f);
    glEnd();

    glBegin(GL_QUADS);//2nd home Door
    glColor3f(0.45f, 0.2f, 0.05f);
    glVertex2d(60.0f,25.0f);
    glVertex2d(65.0f,25.0f);
    glVertex2d(65.0f,30.0f);
    glVertex2d(60.0f,30.0f);
    glEnd();

    glBegin(GL_QUADS);//2nd home window
    glColor3f(0.45f, 0.2f, 0.05f);
    glVertex2d(52.0f,30.0f);
    glVertex2d(55.0f,30.0f);
    glVertex2d(55.0f,33.0f);
    glVertex2d(52.0f,33.0f);
    glEnd();

    glBegin(GL_POLYGON); //sun
    glColor3f(1.0f, 0.9f, 0.0f);
    glVertex2d(10.0f,60.0f);
    glVertex2d(12.0f,64.0f);
    glVertex2d(15.0f,65.0f);
    glVertex2d(18.0f,64.0f);
    glVertex2d(20.0f,60.0f);
    glVertex2d(18.0f,56.0f);
    glVertex2d(15.0f,55.0f);
    glVertex2d(12.0f,56.0f);
    glEnd();

    glBegin(GL_POLYGON); //Clouds 1
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(35.0f,61.0f);
    glVertex2d(35.0f,63.0f);
    glVertex2d(38.0f,64.0f);
    glVertex2d(40.0f,67.0f);
    glVertex2d(44.0f,67.0f);
    glVertex2d(47.0f,64.0f);
    glVertex2d(50.0f,65.0f);
    glVertex2d(53.0f,63.0f);
    glVertex2d(53.0f,61.0f);
    glEnd();

    glBegin(GL_POLYGON); //Clouds 2
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(75.0f,61.0f);
    glVertex2d(75.0f,63.0f);
    glVertex2d(78.0f,64.0f);
    glVertex2d(80.0f,67.0f);
    glVertex2d(84.0f,67.0f);
    glVertex2d(87.0f,64.0f);
    glVertex2d(90.0f,65.0f);
    glVertex2d(93.0f,63.0f);
    glVertex2d(93.0f,61.0f);
    glEnd();

   glBegin(GL_QUADS); //Trunk
   glColor3f(0.45f, 0.2f, 0.05f);
   glVertex2d(85.0f,25.0f);
   glVertex2d(85.0f,38.0f);
   glVertex2d(90.0f,38.0f);
   glVertex2d(90.0f,25.0f);
   glEnd();

   glBegin(GL_POLYGON);//LEAVES
   glColor3f(0.0f, 0.55f, 0.0f);
   glVertex2d(83.0f,38.0f);
   glVertex2d(80.0f,40.0f);
   glVertex2d(78.0f,42.0f);
   glVertex2d(78.0f,46.0f);
   glVertex2d(80.0f,50.0f);
   glVertex2d(83.0f,51.0f);
   glVertex2d(87.0f,51.5f);
   glVertex2d(90.0f,51.0f);
   glVertex2d(95.0f,50.0f);
   glVertex2d(97.0f,46.0f);
   glVertex2d(97.0f,42.0f);
   glVertex2d(95.0f,40.0f);
   glVertex2d(92.0f,38.0f);
   glEnd();

   glBegin(GL_QUADS);//flag pole
   glColor3f(0.0f,0.0f,0.0f);
   glVertex2d(5.0f,24.0f);
   glVertex2d(6.0f,24.0f);
   glVertex2d(6.0f,41.0f);
   glVertex2d(5.0f,41.0f);
   glEnd();

   glBegin(GL_QUADS);//flag Green
   glColor3f(0.0f,1.0f,0.0f);
   glVertex2d(6.0f,35.0f);
   glVertex2d(15.0f,35.0f);
   glVertex2d(15.0f,40.0f);
   glVertex2d(6.0f,40.0f);
   glEnd();

   glBegin(GL_POLYGON); // Red Circle
   glColor3f(1.0f, 0.0f, 0.0f);
   glVertex2d(9.0f,37.5f);
   glVertex2d(10.0f,38.5f);
   glVertex2d(11.0f,38.5f);
   glVertex2d(12.0f,37.5f);
   glVertex2d(11.0f,36.5f);
   glVertex2d(10.0f,36.5f);
   glEnd();

   glBegin(GL_POLYGON);// BOAT BODY
   glColor3f(0.55f,0.25f,0.05f);
   glVertex2d(35.0f,12.0f);
   glVertex2d(40.0f,8.0f);
   glVertex2d(55.0f,8.0f);
   glVertex2d(60.0f,12.0f);
   glEnd();

   glBegin(GL_QUADS);// BOAT SEAT
   glColor3f(0.3f, 0.15f, 0.05f);
   glVertex2d(43.0f, 12.0f);
   glVertex2d(43.0f, 14.0f);
   glVertex2d(52.0f, 14.0f);
   glVertex2d(52.0f, 12.0f);
   glEnd();
   glFlush();
}

void init()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 105, 0, 70);
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1500,800);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Simple Village Scenery");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
