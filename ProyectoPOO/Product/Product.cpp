/**
 * Autores: Pedro Luis Castañeda Pastelín, Pablo Armando Mac Beath Milián, Luis Antonio Bolaina
 * Fecha: 25/11/2023
 * Propósito: Contiene la implementación de la clase Product.
 */

#include "Product.h"
#include <cmath>
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>

Product::Product()
{
    name = "";
    brand = "";
    description = "";
    price = 0.00;
    stock = 0;
}

Product::Product(std::string name, std::string description, std::string brand, double price, int stock) : name(name), brand(brand), description(description), price(price), stock(stock)
{
}

void Product::setName(std::string name)
{
    this->name = name;
}

void Product::setBrand(std::string brand)
{
    this->brand = brand;
}

void Product::setDescription(std::string description) {
    this->description = description;
}

void Product::setPrice(double price)
{
    this->price = round(price * 100) / 100;
}

void Product::setStock(int stock)
{
    this->stock = stock;
}

std::string Product::getName()
{
    return name;
}

std::string Product::getBrand()
{
    return brand;
}

std::string Product::getDescription()
{
    return description;
}

double Product::getPrice()
{
    return round(price * 100) / 100;
}

int Product::getStock()
{
    return stock;
}

void Product::addStock(int stock)
{
    this->stock += stock;
}

std::string Product::toString()
{
    std::stringstream stream;

    stream << std::fixed << std::setprecision(2) << price;
    std::string numberAsString = stream.str();

    return "\tNombre: " + name + "\n\tMarca: " + brand + "\n\tDescripción: " + description + "\n\tPrecio: $" + numberAsString + "\n\tStock: " + std::to_string(stock);
}
