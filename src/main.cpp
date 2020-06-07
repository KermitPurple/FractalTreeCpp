#include<iostream>
#include<GL/glut.h>
#include<FractalTree.h>

void display(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glutSwapBuffers();
}

int main(int argc, char *argv[]){
    // Initialize for glut
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(675, 675);
    glutCreateWindow("Fractal Tree");

    //functions
    glutDisplayFunc(display);
    glutIdleFunc(display);

    //loop
    glutMainLoop();
    
	return 0;
}
