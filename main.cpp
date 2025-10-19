
#include <iostream>
#include <vector>
#include <limits>
#include "Paciente.h"
#include "Medico.h"

using namespace std;

void mostrarMenu() {
    cout << "------ CONSULTORIO MEDICO ------" << endl;
    cout << "1. Cargar Nuevo Paciente" << endl;
    cout << "2. Mostrar Pacientes" << endl;
    cout << "3. Cargar Nuevo Medico" << endl;
    cout << "4. Mostrar Medicos" << endl;
    cout << "--------------------------------" << endl;
    cout << "0. Salir" << endl;
    cout << "--------------------------------" << endl;
    cout << "SELECCIONE UNA OPCION: ";
}

int main() {
    vector<Paciente> listaPacientes;
    vector<Medico> listaMedicos;
    int opcion;

    do {
        mostrarMenu();

        opcion = -1;
        cin >> opcion;

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        system("cls");

        switch (opcion) {
            case 1:
                {
                    Paciente nuevoPaciente;
                    cout << "--- CARGA DE NUEVO PACIENTE ---" << endl;
                    nuevoPaciente.cargar();
                    listaPacientes.push_back(nuevoPaciente);
                    cout << "\nPaciente cargado con exito!" << endl;
                }
                break;
            case 2:
                cout << "--- LISTA DE PACIENTES ---" << endl;
                if (listaPacientes.empty()) {
                    cout << "No hay pacientes cargados." << endl;
                } else {
                    for (size_t i = 0; i < listaPacientes.size(); ++i) {
                        listaPacientes[i].mostrar();
                        cout << "----------------------------" << endl;
                    }
                }
                break;
            case 3:

                break;
            case 4:

                break;
            case 0:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
                break;
        }

        if (opcion != 0) {
            system("pause");
            system("cls");
        }

    } while (opcion != 0);

    return 0;
}
