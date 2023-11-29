/**
 * Autores: Pedro Luis Castañeda Pastelín, Pablo Armando Mac Beath Milián, Luis Antonio Bolaina
 * Fecha: 25/11/2023
 * Propósito: Clase que representa un producto de la tienda.
 */

#include <string>

class Product {
    private:
        std::string name;
        std::string brand;
        std::string description;
        double price;
        int stock;

    public:
        Product();
        Product(std::string, std::string, std::string, double, int);

        ~Product()
        {
        }

        void setName(std::string);
        void setBrand(std::string);
        void setDescription(std::string);
        void setPrice(double);
        void setStock(int);
        void addStock(int);

        std::string getName();
        std::string getBrand();
        std::string getDescription();
        double getPrice();
        int getStock();

        std::string toString();
};
