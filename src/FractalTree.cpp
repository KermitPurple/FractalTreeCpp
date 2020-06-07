#include<GL/glut.h>
#include<FractalTree.h>

FractalTree::FractalTree(){
    offset_angle = 45;
}

FractalTree::FractalTree(float angle){
    offset_angle = angle;
}

void FractalTree::set_offset_angle(float angle){
    offset_angle = angle;
}

void FractalTree::add_to_offset_angle(float angle){
    offset_angle += angle;
}

void FractalTree::draw(){
}
