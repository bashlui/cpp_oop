# include "Motor.h"

Motor::Motor() {
    num_cilindros = 0;
    capacidad = 0;
}

Motor::Motor(int numCilindros, double capacidadMotor) {
    num_cilindros = numCilindros;
    capacidad = capacidadMotor;
}

void Motor::setNumCilindros(int numCilindros) {
    num_cilindros = numCilindros;
}

void Motor::setCapacidad(double capacidadMotor) {
    capacidad = capacidadMotor;
}

std::string Motor::to_string() {
    return "Número de cilindros: " + std::to_string(num_cilindros) + \
    " y capacidad " + std::to_string(capacidad);
}

int Motor::getNumCilindros() {
    return num_cilindros;
}

double Motor::getCapacidad() {
    return capacidad;
}
