# include <iostream>
# include "Rectangulo.cpp"

using namespace std;

int main() {
    // Definimos nuestras variables como tipo objeto
    Rectangulo r1;
    r1.setBase(5);
    r1.setAltura(8);
    Rectangulo r2(3, 4);

    cout << r1.to_string() << endl;
    cout << r2.to_string() << endl;

    cout << "El área de r1 es: " << r1.getArea() << endl;
    cout << "El perimetro de r1 es: " << r1.getPerimetro() << endl; 

    cout << "El área de r2 es: " << r2.getArea() << endl;
    cout << "El perimetro de r2 es: " << r2.getPerimetro() << endl; 

    return 0;
    
}
