#include <iostream>
#include "Turno.h"

using namespace std;

void Turno::cargar() {
    cout << "ID TURNO: ";
    cin >> idTurno;
    cout << "DNI PACIENTE: ";
    cin >> dniPaciente;
    cout << "DNI MEDICO: ";
    cin >> dniMedico;
    cout << "FECHA DE ATENCION:" << endl;
    fechaAtencion.cargar();
    cout << "HORA DE ATENCION:" << endl;
    horaAtencion.cargar();
    cout << "IMPORTE: ";
    cin >> importe;
    cout << "ESTADO (1: Activo, 2: Atendido, 3: Cancelado): ";
    cin >> estado;
}

void Turno::mostrar() {
    cout << "ID TURNO: " << idTurno << endl;
    cout << "DNI PACIENTE: " << dniPaciente << endl;
    cout << "DNI MEDICO: " << dniMedico << endl;
    cout << "FECHA ATENCION: ";
    fechaAtencion.mostrar();
    cout << endl;
    cout << "HORA ATENCION: ";
    horaAtencion.mostrar();
    cout << endl;
    cout << "IMPORTE: $" << importe << endl;
    cout << "ESTADO: ";
    switch (estado) {
        case 1: cout << "Activo" << endl; break;
        case 2: cout << "Atendido" << endl; break;
        case 3: cout << "Cancelado" << endl; break;
        default: cout << "Desconocido" << endl; break;
    }
}
// resto de setters y getters
