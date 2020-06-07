#include<math.h>
#include<GL/glut.h>
#include<FractalTree.h>

FractalTree::FractalTree(){
    offset_angle = 45;
    min_length = 0.01;
    divisor = 2;
}

FractalTree::FractalTree(float angle){
    offset_angle = angle;
    min_length = 0.01;
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

void FractalTree::set_offset_angle(float angle){
    offset_angle = angle;
}

void FractalTree::add_to_offset_angle(float angle){
    offset_angle += angle;
}

void FractalTree::set_min_length(float length){
    min_length = length;
}

void FractalTree::add_to_min_length(float length){
    min_length += length;
}

void FractalTree::set_divisor(float d){
    divisor = d;
}

void FractalTree::add_to_divisor(float d){
    divisor += d;
}

void FractalTree::draw(float x, float y, float angle, float length){
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
