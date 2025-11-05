#include <iostream>
#include "MetodoPago.h"

using namespace std;

void MetodoPago::cargar() {
    cout << "ID METODO DE PAGO: ";
    cin >> idMetodoPago;
    cin.ignore();
    cout << "NOMBRE (Ej: Efectivo, Transferencia): ";
    cin.getline(nombre, 30);
}

void MetodoPago::mostrar() {
    cout << "ID: " << idMetodoPago << " - " << "Nombre: " << nombre << endl;
}
