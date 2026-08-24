

#include <GL/glut.h>
void display(){

    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(5);
    float x = 0.5,y1=0.9,y2=0;
    glBegin(GL_POINTS);
    glColor3f(1,0,0);
    for(float y=y1; y<=y2; y+=0.01)
    {
        glVertex2f(x,y);
    }
    glEnd();
    glFlush();





}




int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE | GLUT_DEPTH);

    glutCreateWindow("GLUT Shapes");

    glutDisplayFunc(display);
    glutMainLoop();


    return EXIT_SUCCESS;
}
