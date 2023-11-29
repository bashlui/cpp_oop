/**
 * Autores: Pedro Luis Castañeda Pastelín, Pablo Armando Mac Beath Milián, Luis Antonio Bolaina
 * Fecha: 25/11/2023
 * Propósito: Clase que representa una orden de la tienda.
 */

#include "../Product/Product.cpp"
#include "../Client/Client.cpp"
#include <string>
#include <vector>

class Order{
    private:
        Client client;
        std::vector<Product> productList;
        std::string date;

    public:
        Order();
        Order(Client, std::vector<Product>, std::string);

        Client getClient();
        std::vector<Product> getProductList();
        std::string getDate();
        Product getProductByIndex(int);

        void addProduct(Product);
        void deleteProductByIndex(int);

        void updateProductStock(int, int);

        std::string toStringOrder();
};
