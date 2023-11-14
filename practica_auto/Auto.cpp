# include "Auto.h"

Auto::Auto(){
    std::string marca = " ";
    std::string submarca = " ";
}

Auto::Auto(std::string marcaCarro, std::string submarcaCarro){
    marca = marcaCarro;
    submarca = submarcaCarro;
}

void Auto::setMarca(std::string marcaCarro) {
    marca = marcaCarro;
}

void Auto::setSubmarca(std::string submarcaCarro) {
    submarca = submarcaCarro;
}

std::string Auto::to_string() {
    return "Marca del carro: " + \
    marca + " y submarca: " + submarca;
}

std::string Auto::getMarca() {
    return marca;
}

std::string Auto::getSubmarca() {
    return submarca;
}
