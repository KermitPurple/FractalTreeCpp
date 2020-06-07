#include<iostream>
#include<GL/glut.h>
#include<FractalTree.h>

FractalTree tree;

void display(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    tree.draw(0, -100, 90, -1);
    glutSwapBuffers();
}

int main(int argc, char *argv[]){
    // Initialize for glut
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(675, 675);
    glutCreateWindow("Fractal Tree");
    glOrtho(-100, 100, -100, 100, -1, 1);

    //functions
    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutKeyboardFunc([](unsigned char key, int x, int y){
            tree.kbin(key, x, y);
            });
    glutSpecialFunc([](int key, int x, int y){
            tree.special_kbin(key, x, y);
            });

    //loop
    glutMainLoop();
    
	return 0;
}
