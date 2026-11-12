#include <GL/glut.h>
#include <cmath>

void BL(int x1, int y1, int x2, int y2) //Line
{
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);

    int xInc = (x2 > x1) ? 1 : -1;
    int yInc = (y2 > y1) ? 1 : -1;

    int x = x1;
    int y = y1;

    glBegin(GL_POINTS);

    glVertex2i(x, y);

    if (dx >= dy)
    {
        int p = 2 * dy - dx;

        for (int i = 0; i < dx; i++)
        {
            x += xInc;

            if (p < 0)
                p += 2 * dy;
            else
            {
                y += yInc;
                p += 2 * (dy - dx);
            }

            glVertex2i(x, y);
        }
    }
    else
    {
        int p = 2 * dx - dy;

        for (int i = 0; i < dy; i++)
        {
            y += yInc;

            if (p < 0)
                p += 2 * dx;
            else
            {
                x += xInc;
                p += 2 * (dx - dy);
            }

            glVertex2i(x, y);
        }
    }

    glEnd();
}

void BR(int x1, int y1, int x2, int y2) //Rectangle
{
    BL(x1, y1, x2, y1);
    BL(x2, y1, x2, y2);
    BL(x2, y2, x1, y2);
    BL(x1, y2, x1, y1);
}

void BC(int xc, int yc, int r) //Circle
{
    int x = 0;
    int y = r;
    int p = 1 - r;

    glBegin(GL_POINTS);

    while (x <= y)
    {
        glVertex2i(xc + x, yc + y);
        glVertex2i(xc + y, yc + x);

        glVertex2i(xc - x, yc + y);
        glVertex2i(xc - y, yc + x);

        glVertex2i(xc + x, yc - y);
        glVertex2i(xc + y, yc - x);

        glVertex2i(xc - x, yc - y);
        glVertex2i(xc - y, yc - x);

        x++;

        if (p < 0)
        {
            p += 2 * x + 1;
        }
        else
        {
            y--;
            p += 2 * (x - y) + 1;
        }
    }

    glEnd();
}

void DL(int x1, int y1, int x2, int y2) //DDA line
{
    int dx = x2 - x1;
    int dy = y2 - y1;

    int steps;

if (abs(dx) > abs(dy))
    steps = abs(dx);
else
    steps = abs(dy);

    float xInc = 0;
    float yInc = 0;

    if (steps != 0)
    {
        xInc = (float)dx / steps;
        yInc = (float)dy / steps;
    }

    float x = x1;
    float y = y1;

    glBegin(GL_POINTS);

    for (int i = 0; i <= steps; i++)
    {
        glVertex2i(round(x), round(y));

        x += xInc;
        y += yInc;
    }

    glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(3.0f);


    glColor3f(1.0f, 0.0f, 0.0f);
    BC(47.5,35,6); //Sun

    glColor3f(0.0f, 0.0f, 0.0f);
    BL(11,14,94,14); //lowest stairs
    BL(11,16,94,16);
    BL(11,14,11,16);
    BL(94,14,94,16);

    BL(13,18,92,18);//2nd lowest
    BL(13,18,13,16);
    BL(92,18,92,16);


    BL(15,20,90,20);//1st stair
    BL(15,20,15,18);
    BL(90,20,90,18);

    BL(45,20,45,45);// middle piller
    BL(50,20,50,45);
    BL(45,45,50,45);

    BL(44,20,44,46);
    BL(51,20,51,46);
    BL(44,46,51,46);

    BL(35,20,35,40);// Left piller
    BL(40,20,40,40);
    BL(35,40,40,40);

    BL(34,20,34,41);
    BL(41,20,41,41);
    BL(34,41,41,41);

    BL(55,20,55,40);// Right piller
    BL(60,20,60,40);
    BL(55,40,60,40);

    BL(54,20,54,41);
    BL(61,20,61,41);
    BL(54,41,61,41);

    BL(25,20,25,35);// Last left piller
    BL(30,20,30,35);
    BL(25,35,30,35);

    BL(24,20,24,36);
    BL(31,20,31,36);
    BL(24,36,31,36);

    BL(65,20,65,35);// Last Right piller
    BL(70,20,70,35);
    BL(65,35,70,35);

    BL(64,20,64,36);
    BL(71,20,71,36);
    BL(64,36,71,36);

    DL(75,20,75,47);//Flag pole
    DL(77,20,77,47);
    DL(75,47,77,47);

    glColor3f(0.0f,1.0f,0.0f);//Flag
    BL(77,35,95,35);
    BL(95,35,95,45);
    BL(95,45,77,45);
    BL(77,45,77,35);

    glColor3f(1.0f,0.0f,0.0f);//circle of flag
    BC(84.5,40,3.5);

    glColor3f(0.0f,0.0f,0.0f); //Road
    BR(0,0,105,14);
    BL(0,11,105,11);

    BL(0,2,105,2);

    BR(10,5,20,7);
    BR(30,5,40,7);
    BR(50,5,60,7);
    BR(70,5,80,7);
    BR(90,5,100,7);

    glFlush();
}

void init()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 105, 0, 60);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500,300);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Bangladesh Tribute Scene");

    init();
    glutDisplayFunc(display);

    glutMainLoop();
    return 0;
}

