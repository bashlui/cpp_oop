#include "Punto2D.h"
#include <math.h>

void Punto2D::setx(int xval){
  x = xval;
}

void Punto2D::sety(int yval){
  y = yval;
}

int Punto2D::getx(){
  return x;
}

int Punto2D::gety(){
  return y;
}


Punto2D::Punto2D(){
  x=0;
  y=0;
}

Punto2D::Punto2D(int xv, int yv){
  x=xv;
  y=yv;
}

std::string Punto2D::to_string(){
  return "(" + std::to_string(x) + "," + std::to_string(y) + ")";
}

double Punto2D::distance(Punto2D otro){
  return sqrt(pow((x-otro.x),2)+pow((y-otro.y),2));
}

double Punto2D::distance0() {
    return sqrt(pow(x, 2) + pow(y, 2));
}
