#include <iostream>
#include "HistoriaClinica.h"

using namespace std;

void HistoriaClinica::cargar() {
    cout << "ID HISTORIA: ";
    cin >> idHistoria;
    cout << "DNI PACIENTE: ";
    cin >> dniPaciente;
    cout << "DNI MEDICO: ";
    cin >> dniMedico;
    cout << "ID TURNO ASOCIADO: ";
    cin >> idTurno;
    cout << "FECHA:" << endl;
    fecha.cargar();
    cin.ignore();
    cout << "DIAGNOSTICO: ";
    cin.getline(diagnostico, 200);
    cout << "TRATAMIENTO: ";
    cin.getline(tratamiento, 200);
}

void HistoriaClinica::mostrar() {
    cout << "ID HISTORIA: " << idHistoria << endl;
    cout << "PACIENTE (DNI): " << dniPaciente << endl;
    cout << "MEDICO (DNI): " << dniMedico << endl;
    cout << "TURNO (ID): " << idTurno << endl;
    cout << "FECHA: ";
    fecha.mostrar();
    cout << endl;
    cout << "DIAGNOSTICO: " << diagnostico << endl;
    cout << "TRATAMIENTO: " << tratamiento << endl;
}
