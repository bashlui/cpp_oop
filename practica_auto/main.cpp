# include <iostream>
# include "Motor.cpp"
# include "Auto.cpp"

using namespace std;

int main() {
    Motor m1;
    m1.setNumCilindros(4);
    m1.setCapacidad(2.0);

    cout << m1.to_string() << endl;
    cout << m1.to_string() << endl;

    cout << "El número de cilindros es: " << m1.getNumCilindros() << endl;
    cout << "La capacidad del motor es: " << m1.getCapacidad() << endl;

    return 0;
}
