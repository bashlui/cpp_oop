#include <iostream>
#include "Punto2D.cpp"

using namespace std;

int main() {

  Punto2D p1;
  Punto2D p2(3,4);
  Punto2D p3(4,1);

  cout << p1.to_string() << endl;
  cout << p2.to_string() << endl;
  cout << p3.to_string() << endl;

  cout << p1.distance(p2) << endl;
  cout << p2.distance(p3) << endl;

  Punto2D nuevoPunto;
  nuevoPunto.setx(5);
  nuevoPunto.sety(9);
  cout << nuevoPunto.to_string() << endl;

  cout << p1.distance0() << endl;
  cout << p2.distance0() << endl;
  cout << p3.distance0() << endl;

  return 0;
}
