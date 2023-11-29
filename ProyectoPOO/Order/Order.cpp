/**
 * Autores: Pedro Luis Castañeda Pastelín, Pablo Armando Mac Beath Milián, Luis Antonio Bolaina Dominguez
 * Fecha: 25/11/2023
 * Propósito: Contiene la implementación de la clase Order y genera la lista de productos junto al cliente.
 */

#include "Order.h"
#include <iostream>
#include <string>
#include <vector>

Order::Order()
{
    client = Client();
    std::vector<Product> productList;
    date = "";
}

Order::Order(Client client, std::vector<Product> productList, std::string date) : client(client), productList(productList), date(date)
{
}

Client Order::getClient()
{
    return client;
}

std::vector<Product> Order::getProductList()
{
    return productList;
}

std::string Order::getDate()
{
    return date;
}

Product Order::getProductByIndex(int index)
{
    return productList[index];
}

void Order::addProduct(Product product)
{
    this->productList.push_back(product);
}

void Order::deleteProductByIndex(int index)
{
    this->productList.erase(productList.begin() + index);
}

void Order::updateProductStock(int productIndex, int additionalStock)
{
    this->productList[productIndex].addStock(additionalStock);
}

std::string Order::toStringOrder() {
    std::string productListString = "";
    for (int i = 0; i < productList.size(); i++)
    {
        productListString += "  " + std::to_string(i + 1) + ". " + productList[i].toString() + "\n";
    }

    return "Cliente: " + client.getName() + " (" + date + ")\n" + "Productos: \n" + productListString;
}
