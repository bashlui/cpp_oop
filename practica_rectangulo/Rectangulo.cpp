# include "Rectangulo.h"

Rectangulo::Rectangulo(){
    base = 0;
    altura = 0;
}

Rectangulo::Rectangulo(double pB, double pA){
    base = pB;
    altura = pA;
}

void Rectangulo::setBase(double pB) {
    base = pB;
}

void Rectangulo::setAltura(double pA) {
    altura = pA;
}


std::string Rectangulo::to_string() {
    return "Rectángulo con base " + std::to_string(base) + " y altura " + std::to_string(altura);
}

double Rectangulo::getPerimetro() {
    return 2*base + 2*altura;
}

double Rectangulo::getArea() {
    return base*altura;
}
