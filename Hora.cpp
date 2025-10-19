#include <iostream>
#include "Hora.h"

using namespace std;

// Constructor
Hora::Hora(int h, int m) {
    hora = h;
    minuto = m;
}

// Setters y Getters
void Hora::setMinuto(int m) { minuto = m; }
void Hora::setHora(int h) { hora = h; }
int Hora::getMinuto() { return minuto; }
int Hora::getHora() { return hora; }


void Hora::cargar() {
    cout << "  HORA (formato 24hs): ";
    cin >> hora;
    cout << "  MINUTOS: ";
    cin >> minuto;
}

void Hora::mostrar() {
    if (minuto < 10) {
        cout << hora << ":0" << minuto << " hs";
    } else {
        cout << hora << ":" << minuto << " hs";
    }
}
