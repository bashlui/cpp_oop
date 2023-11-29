/**
 * Autores: Pedro Luis Castañeda Pastelín, Pablo Armando Mac Beath Milián, Luis Antonio Bolaina Dominguez
 * Fecha: 25/11/2023
 * Propósito: Archivo principal del proyecto donde se ejecuta el programa, usando las clases Client, Order y Product.
 */

#include "Order/Order.cpp"
#include <iostream>
#include <vector>

using namespace std;

string returnLineCin();
void addOrder(vector<Order> &orders);
void deleteOrder(vector<Order> &orders);
void showOrders(vector<Order> &orders);

int main()
{
    vector<Order> orders;

    int opt;
    string temp = "";

    do {
        cout << "<-------------------- Bienvenidos a la Posty West's Shop ---------------->" << endl;
        cout << "<------------------ Por favor, seleccione una de las opciones ------------->" << endl;
        cout << "(1) -> Agregar producto  --|-- (2) -> Eliminar un producto "\
        "---|---- (3) -> Mostrar lista de productos --|-- (0) -> Salir" << endl << "Opción: ";

        getline(cin, temp);
        opt = stoi(temp);

        switch (opt)
        {
            case 0:
                cout << "Fin del programa." << endl;
                break;
            case 1:
                addOrder(orders);
                break;
            case 2:
                if (orders.empty())
                {
                    cout << "No hay órdenes registradas." << endl;
                    break;
                }
                deleteOrder(orders);
                break;
            case 3:
                if (orders.size() == 0)
                {
                    cout << "No hay órdenes registradas." << endl;
                    break;
                }
                showOrders(orders);
                break;
            default:
                cout << "Opción inválida." << endl;
                break;
        }
    } while (opt != 0);

    return 0;
}

string returnLineCin()
{
    string line;
    getline(cin, line);
    return line;
}

void addOrder(vector<Order> &orders)
{
    int productStock;
    double productPrice;
    string firstName, lastName, address, phone, date, productName, productBrand, productDescription, temp = "";

    vector<Product> productList;

    cout << "Ingresa el primer nombre del cliente: ";
    getline(cin, temp);
    firstName = temp;

    cout << "Ingresa el apellido del cliente: ";
    getline(cin, temp);
    lastName = temp;

    for (int i = 0; i < orders.size(); i++)
    {
        if (orders[i].getClient().getName() == (firstName + " " + lastName))
        {
            cout << "Ingresa el nombre del producto: ";
            getline(cin, temp);
            productName = temp;

            for (int j = 0; j < orders[i].getProductList().size(); j++)
            {
                if (orders[i].getProductList()[j].getName() == productName)
                {
                    cout << "Ingresa la cantidad de productos que deseas agregar: ";
                    getline(cin, temp);
                    productStock = stoi(temp);

                    orders[i].updateProductStock(j, productStock);

                    if (orders[i].getProductList()[j].getStock() <= 0)
                    {
                        orders[i].deleteProductByIndex(j);
                    }

                    cout << "Producto agregado exitosamente." << endl;
                    return;
                }
            }

            cout << "Ingresa la marca del producto: ";
            getline(cin, temp);
            productBrand = temp;

            cout << "Ingresa la descripción del producto: ";
            getline(cin, temp);
            productDescription = temp;

            cout << "Ingresa el precio del producto: ";
            getline(cin, temp);
            productPrice = stod(temp);

            cout << "Ingresa la cantidad de productos que deseas agregar: ";
            getline(cin, temp);
            productStock = stoi(temp);

            if (productStock <= 0)
            {
                cout << "Cantidad inválida." << endl;
                return;
            }

            orders[i].addProduct(Product(productName, productDescription, productBrand, productPrice, productStock));

            cout << "Producto agregado exitosamente." << endl;
            return;
        }
    }
    cout << "Ingresa la dirección del cliente: ";
    address = returnLineCin();

    cout << "Ingresa el teléfono del cliente: ";
    phone = returnLineCin();

    cout << "Ingresa la fecha de la orden: ";
    date = returnLineCin();

    cout << "Ingresa el nombre del producto: ";
    productName = returnLineCin();

    cout << "Ingresa la marca del producto: ";
    productBrand = returnLineCin();

    cout << "Ingresa la descripción del producto: ";
    productDescription = returnLineCin();

    cout << "Ingresa el precio del producto: ";
    productPrice = stod(returnLineCin());

    cout << "Ingresa la cantidad de productos que deseas agregar: ";
    productStock = stoi(returnLineCin());

    productList.push_back(Product(productName, productDescription, productBrand, productPrice, productStock));
    orders.push_back(Order(Client(firstName, lastName, address, phone), productList, date));
}

void deleteOrder(vector<Order> &orders)
{
    int index, opt;

    cout << "Digite el número de orden que desea eliminar: ";
    index = stoi(returnLineCin());

    if (index > orders.size())
    {
        cout << "Orden inválida." << endl;
        return;
    }

    cout << "¿Borrar cliente o producto? (1) -> Cliente | (2) -> Producto" << endl << "Opción: ";
    opt = stoi(returnLineCin());

    if (opt == 1)
    {
        orders.erase(orders.begin() + index - 1);
    }
    else if (opt == 2)
    {
        int indexProduct;

        cout << "Digite el número de producto que desea eliminar: ";
        indexProduct = stoi(returnLineCin());

        if (indexProduct > orders[index - 1].getProductList().size())
        {
            cout << "Producto inválido." << endl;
            return;
        }

        cout << "¿Cuántos productos desea eliminar? ";
        int quantity = stoi(returnLineCin());

        orders[index - 1].updateProductStock(indexProduct - 1, quantity * -1);

        if (orders[index - 1].getProductList()[indexProduct - 1].getStock() <= 0)
        {
            orders[index - 1].deleteProductByIndex(indexProduct - 1);
        }

        cout << "Producto eliminado exitosamente." << endl;

        if (orders[index - 1].getProductList().size() == 0)
        {
            orders.erase(orders.begin() + index - 1);

            cout << "Orden eliminada exitosamente." << endl;
        }
    }
    else
    {
        cout << "Opción inválida." << endl;
    }
}

void showOrders(vector<Order> &orders)
{
    if (orders.size() == 0)
    {
        cout << "No hay órdenes registradas." << endl;
        return;
    }

    for (int i = 0; i < orders.size(); i++)
    {
        cout << to_string(i + 1) << ". " << orders[i].toStringOrder() << endl;
    }
}
