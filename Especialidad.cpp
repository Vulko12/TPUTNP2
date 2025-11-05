#include <iostream>
#include "Especialidad.h"

using namespace std;

void Especialidad::cargar() {
    cout << "CODIGO ESPECIALIDAD: ";
    cin >> codEspecialidad;
    cin.ignore();
    cout << "NOMBRE: ";
    cin.getline(nombre, 20);
    cout << "DESCRIPCION: ";
    cin.getline(descripcion, 100);
}

void Especialidad::mostrar() {
    cout << "CODIGO: " << codEspecialidad << endl;
    cout << "NOMBRE: " << nombre << endl;
    cout << "DESCRIPCION: " << descripcion << endl;
}
