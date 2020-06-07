#include <iostream>
#include<math.h>
#include<GL/glut.h>
#include<FractalTree.h>

FractalTree::FractalTree(){
    offset_angle = 45;
    min_length = 0.2;
    divisor = 2;
}

FractalTree::FractalTree(float angle){
    offset_angle = angle;
    min_length = 0.2;
    divisor = 2;
}

FractalTree::FractalTree(float angle, float length){
    offset_angle = angle;
    min_length = length;
    divisor = 2;
}

FractalTree::FractalTree(float angle, float length, float d){
    offset_angle = angle;
    min_length = length;
    divisor = d;
}

void FractalTree::draw(float x, float y, float angle, float length){
    if(length < 0){
        length = starting_length;
    }
    if(length >= min_length){
        float rad = angle / 180 * M_PI;
        float new_x = x + cos(rad) * length;
        float new_y = y + sin(rad) * length;
        glBegin(GL_LINES);
            glVertex2f(x, y);
            glVertex2f(new_x, new_y);
        glEnd();
        draw(new_x, new_y, angle + offset_angle, length / divisor);
        draw(new_x, new_y, angle - offset_angle, length / divisor);
    }
}

void FractalTree::special_kbin(int key, int x, int y){
    switch(key){
        case GLUT_KEY_UP:
            divisor -= 0.05;
            break;
        case GLUT_KEY_DOWN:
            divisor += 0.05;
            break;
        case GLUT_KEY_LEFT:
            offset_angle -= 2;
            break;
        case GLUT_KEY_RIGHT:
            offset_angle += 2;
            break;
        default:
            break;
    }
}

void FractalTree::kbin(unsigned char key, int x, int y){
    switch(key){
        case '-':
            starting_length -= 1;
            break;
        case '+':
            starting_length += 1;
            break;
        default:
            break;
    }
}
