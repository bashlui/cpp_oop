# include <iostream>
# include "Motor.cpp"
# include "Auto.cpp"

using namespace std;

int main() {
    Motor m1;
    Auto a1;
    m1.setNumCilindros(4);
    m1.setCapacidad(2.0);
    a1.setMarca("Porsche");
    a1.setSubmarca("911 GT3 RS");

    cout << m1.to_string() << endl;
    cout << m1.to_string() << endl;

    cout << "El número de cilindros es: " << m1.getNumCilindros() << endl;
    cout << "La capacidad del motor es: " << m1.getCapacidad() << endl;

    cout << "Marca: " << a1.getMarca() << endl;
    cout << "Submarca: " << a1.getSubmarca() << endl;

    return 0;
}
