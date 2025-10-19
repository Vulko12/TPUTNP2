#include <iostream>
#include "Medico.h"

using namespace std;

// Setters y Getters
void Medico::setCodEspecialidad(int c) { codEspecialidad = c; }
void Medico::setFechaInicioActividad(Fecha f) { fechaInicioActividad = f; }
int Medico::getCodEspecialidad() { return codEspecialidad; }
Fecha Medico::getFechaInicioActividad() { return fechaInicioActividad; }


void Medico::cargar() {
    Persona::cargar();
    cout << "CODIGO DE ESPECIALIDAD: ";
    cin >> codEspecialidad;
    cout << "FECHA DE INICIO DE ACTIVIDAD: " << endl;
    fechaInicioActividad.cargar();
}

void Medico::mostrar() {
    Persona::mostrar();
    cout << "CODIGO DE ESPECIALIDAD: " << codEspecialidad << endl;
    cout << "INICIO DE ACTIVIDAD: ";
    fechaInicioActividad.mostrar();
    cout << endl;
}
