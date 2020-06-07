#include<GL/glut.h>
#include<FractalTree.h>

void FractalTree::set_offset_angle(float angle){
    offset_angle = angle;
}

void FractalTree::add_to_offset_angle(float angle){
    offset_angle += angle;
}

void FractalTree::draw(){
}
