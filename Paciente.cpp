#include <iostream>
#include "Paciente.h"

using namespace std;

// Setters y Getters
void Paciente::setFechaNacimiento(Fecha f) { fechaNacimiento = f; }
void Paciente::setCodObraSocial(int c) { codObraSocial = c; }
Fecha Paciente::getFechaNacimiento() { return fechaNacimiento; }
int Paciente::getCodObraSocial() { return codObraSocial; }


void Paciente::cargar() {
    // Primero, llamamos al método cargar de la clase base (Persona)
    Persona::cargar();

    // Luego, pedimos los datos propios de Paciente
    cout << "FECHA DE NACIMIENTO: " << endl;
    fechaNacimiento.cargar();
    cout << "CODIGO DE OBRA SOCIAL: ";
    cin >> codObraSocial;
}

void Paciente::mostrar() {
    // Primero, llamamos al método mostrar de la clase base (Persona)
    Persona::mostrar();

    // Luego, mostramos los datos propios de Paciente
    cout << "FECHA DE NACIMIENTO: ";
    fechaNacimiento.mostrar();
    cout << endl;
    cout << "CODIGO DE OBRA SOCIAL: " << codObraSocial << endl;
}
