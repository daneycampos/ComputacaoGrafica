#include <stdlib.h>
#include <GL/glut.h>
//alguma coisa
//teste02
void Desenha(void){

    glClearColor(1,1,1,0);
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1,1,0);

    glBegin(GL_POLYGON);
        glVertex3f(-0.5,-0.5,0);
        glVertex3f(0.5,-0.5,0);
        glVertex3f(0.5,0.5,0);
        glVertex3f(-0.5,0.5,0);
    glEnd();

    glFlush();
}

void Inicializa(void){
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-1.0,1.0,-1.0,1.0);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char *argv[] ){
    glutInit( & argc, argv );
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500 ,500);

    glutCreateWindow("ieoa");
    glutDisplayFunc(Desenha);

    Inicializa();
    glutMainLoop();
    return 0;
}
