#include "mvector.h"
#include "math.h"

MVector::MVector() :x(1),y(0)
{
}
MVector::MVector(double x,double y):x(x),y(y){

}

double MVector::getX(){
    return x;
}

double MVector::getY(){
    return y;
}

void MVector::normal(){
    double len = sqrt(x*x + y*y);
    x = x/len;
    y = y/len;
}
