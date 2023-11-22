#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(-0.7, 0.0);

    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(0.7, 0.0);

    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(0.0, 0.7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(-0.6, 0.0);


    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(-0.6, -0.8);

    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(-0.5, -0.8);

    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(-0.5, 0.0);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(0.6, 0.0);


    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(0.6, -0.8);


    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(0.5, -0.8);

    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(0.5, 0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(-0.5, -0.8);


    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(-0.5, -0.7);


    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(0.5, -0.8);

    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(0.5, -0.7);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(-0.5, 0.0);

    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(-0.5, -0.7);

    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(0.5, -0.7);

    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(0.5, 0.0);

    glEnd();


   

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("My hut");
    glutInitWindowSize(1000, 1000);
    glutInitWindowPosition(200, 200);

    glutDisplayFunc(display);
    glClearColor(1.0, 1.0, 1.0, 0.0);

    glutMainLoop();

    return 0;
}
