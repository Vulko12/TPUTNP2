#include <iostream>
#include "ObraSocial.h"

using namespace std;

void ObraSocial::cargar() {
    cout << "CODIGO OBRA SOCIAL: ";
    cin >> codObraSocial;
    cin.ignore();
    cout << "NOMBRE: ";
    cin.getline(nombre, 50);
    cout << "DIRECCION: ";
    cin.getline(direccion, 50);
    cout << "TELEFONO: ";
    cin.getline(telefono, 15);
}

void ObraSocial::mostrar() {
    cout << "CODIGO: " << codObraSocial << endl;
    cout << "NOMBRE: " << nombre << endl;
    cout << "DIRECCION: " << direccion << endl;
    cout << "TELEFONO: " << telefono << endl;
}
