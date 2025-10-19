#include <iostream>
#include "Fecha.h"

using namespace std;

// Constructor
Fecha::Fecha(int d, int m, int a) {
    dia = d;
    mes = m;
    anio = a;
}

// Setters
void Fecha::setDia(int d) { dia = d; }
void Fecha::setMes(int m) { mes = m; }
void Fecha::setAnio(int a) { anio = a; }

// Getters
int Fecha::getDia() { return dia; }
int Fecha::getMes() { return mes; }
int Fecha::getAnio() { return anio; }

void Fecha::cargar() {
    cout << "  DIA: ";
    cin >> dia;
    cout << "  MES: ";
    cin >> mes;
    cout << "  ANIO: ";
    cin >> anio;
}

void Fecha::mostrar() {
    cout << dia << "/" << mes << "/" << anio;
}
