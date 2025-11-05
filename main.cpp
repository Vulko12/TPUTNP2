#include <iostream>
#include <cstdio>

// Incluimos todas las CLASES
#include "Paciente.h"
#include "Medico.h"
#include "Turno.h"
#include "ObraSocial.h"
#include "Especialidad.h"
#include "HistoriaClinica.h"
#include "Facturacion.h"
#include "MetodoPago.h"

// Incluimos todos los MANEJADORES DE ARCHIVOS
#include "pacienteArchivo.h"
#include "medicoArchivo.h"
#include "turnoArchivo.h"
#include "obraSocialArchivo.h"
#include "especialidadArchivo.h"
#include "historiaClinicaArchivo.h"
#include "facturacionArchivo.h"
#include "metodoPagoArchivo.h"

using namespace std;

void mostrarMenuPrincipal() {
    cout << "------ CONSULTORIO MEDICO ------" << endl;
    cout << "1. Gestion de Pacientes" << endl;
    cout << "2. Gestion de Medicos" << endl;
    cout << "3. Gestion de Turnos" << endl;
    cout << "4. Gestion de Historias Clinicas" << endl;
    cout << "5. Administracion (Obras Sociales, Especialidades)" << endl;
    cout << "6. Facturacion (Facturas, Metodos de Pago)" << endl;
    cout << "--------------------------------" << endl;
    cout << "0. Salir" << endl;
    cout << "--------------------------------" << endl;
    cout << "SELECCIONE UNA OPCION: ";
}

// --- Declaramos funciones para los sub-menus ---

void menuGestionPacientes() {
    int op;
    do {
        system("cls");
        cout << "--- MENU GESTION DE PACIENTES ---" << endl;
        cout << "1. Cargar Nuevo Paciente" << endl;
        cout << "2. Listar Pacientes" << endl;
        cout << "--------------------------------" << endl;
        cout << "0. Volver al Menu Principal" << endl;
        cout << "--------------------------------" << endl;
        cout << "SELECCIONE UNA OPCION: ";
        cin >> op;
        system("cls");

        switch (op) {
            case 1:
                {
                    Paciente reg;
                    cout << "--- CARGA DE NUEVO PACIENTE ---" << endl;
                    reg.cargar();
                    if (grabarPaciente(reg)) {
                        cout << "\nPaciente guardado con exito!" << endl;
                    } else {
                        cout << "\nError al guardar el paciente." << endl;
                    }
                }
                break;
            case 2:
                cout << "--- LISTA DE PACIENTES ---" << endl;
                listarPacientes();
                break;
            case 0:
                break;
            default:
                cout << "Opcion no valida." << endl;
                break;
        }

        if (op != 0) {
            system("pause");
        }

    } while (op != 0);
}

void menuGestionMedicos() {
    int op;
    do {
        system("cls");
        cout << "--- MENU GESTION DE MEDICOS ---" << endl;
        cout << "1. Cargar Nuevo Medico" << endl;
        cout << "2. Listar Medicos" << endl;
        cout << "--------------------------------" << endl;
        cout << "0. Volver al Menu Principal" << endl;
        cout << "--------------------------------" << endl;
        cout << "SELECCIONE UNA OPCION: ";
        cin >> op;
        system("cls");

        switch (op) {
            case 1:
                {
                    Medico reg;
                    cout << "--- CARGA DE NUEVO MEDICO ---" << endl;
                    reg.cargar();
                    if (grabarMedico(reg)) {
                        cout << "\nMedico guardado con exito!" << endl;
                    } else {
                        cout << "\nError al guardar el medico." << endl;
                    }
                }
                break;
            case 2:
                cout << "--- LISTA DE MEDICOS ---" << endl;
                listarMedicos();
                break;
            case 0:
                break;
            default:
                cout << "Opcion no valida." << endl;
                break;
        }

        if (op != 0) {
            system("pause");
        }

    } while (op != 0);
}

void menuGestionTurnos() {
    int op;
    do {
        system("cls");
        cout << "--- MENU GESTION DE TURNOS ---" << endl;
        cout << "1. Cargar Nuevo Turno" << endl;
        cout << "2. Listar Turnos" << endl;
        cout << "--------------------------------" << endl;
        cout << "0. Volver al Menu Principal" << endl;
        cout << "--------------------------------" << endl;
        cout << "SELECCIONE UNA OPCION: ";
        cin >> op;
        system("cls");

        switch (op) {
            case 1:
                {
                    Turno reg;
                    cout << "--- CARGA DE NUEVO TURNO ---" << endl;
                    // AQUI FALTARIA LA VALIDACION DE DNI (prox. paso)
                    reg.cargar();
                    if (grabarTurno(reg)) {
                        cout << "\nTurno guardado con exito!" << endl;
                    } else {
                        cout << "\nError al guardar el turno." << endl;
                    }
                }
                break;
            case 2:
                cout << "--- LISTA DE TURNOS ---" << endl;
                listarTurnos();
                break;
            case 0:
                break;
            default:
                cout << "Opcion no valida." << endl;
                break;
        }

        if (op != 0) {
            system("pause");
        }

    } while (op != 0);
}

void menuGestionHistorias() {
    int op;
    do {
        system("cls");
        cout << "--- MENU GESTION DE HISTORIAS CLINICAS ---" << endl;
        cout << "1. Cargar Nueva Historia" << endl;
        cout << "2. Listar Historias" << endl;
        cout << "--------------------------------" << endl;
        cout << "0. Volver al Menu Principal" << endl;
        cout << "--------------------------------" << endl;
        cout << "SELECCIONE UNA OPCION: ";
        cin >> op;
        system("cls");

        switch (op) {
            case 1:
                {
                    HistoriaClinica reg;
                    cout << "--- CARGA DE NUEVA HISTORIA ---" << endl;
                    // AQUI FALTARIA LA VALIDACION DE DNI (prox. paso)
                    reg.cargar();
                    if (grabarHistoria(reg)) {
                        cout << "\nHistoria guardada con exito!" << endl;
                    } else {
                        cout << "\nError al guardar la historia." << endl;
                    }
                }
                break;
            case 2:
                cout << "--- LISTA DE HISTORIAS ---" << endl;
                listarHistorias();
                break;
            case 0:
                break;
            default:
                cout << "Opcion no valida." << endl;
                break;
        }

        if (op != 0) {
            system("pause");
        }

    } while (op != 0);
}

void menuAdministracion() {
    int op;
    do {
        system("cls");
        cout << "--- MENU ADMINISTRACION ---" << endl;
        cout << "1. Cargar Obra Social" << endl;
        cout << "2. Listar Obras Sociales" << endl;
        cout << "3. Cargar Especialidad" << endl;
        cout << "4. Listar Especialidades" << endl;
        cout << "--------------------------------" << endl;
        cout << "0. Volver al Menu Principal" << endl;
        cout << "--------------------------------" << endl;
        cout << "Opcion: ";
        cin >> op;
        system("cls");

        switch(op) {
            case 1: {
                ObraSocial reg;
                reg.cargar();
                grabarObraSocial(reg);
                cout << "\nObra Social guardada." << endl;
            } break;
            case 2:
                cout << "--- LISTA DE OBRAS SOCIALES ---" << endl;
                listarObrasSociales();
                break;
            case 3: {
                Especialidad reg;
                reg.cargar();
                grabarEspecialidad(reg);
                cout << "\nEspecialidad guardada." << endl;
            } break;
            case 4:
                cout << "--- LISTA DE ESPECIALIDADES ---" << endl;
                listarEspecialidades();
                break;
            case 0:
                break;
            default:
                cout << "Opcion no valida." << endl;
                break;
        }

        if (op != 0) {
            system("pause");
        }

    } while (op != 0);
}

void menuFacturacion() {
     int op;
     do {
        system("cls");
        cout << "--- MENU FACTURACION ---" << endl;
        cout << "1. Cargar Metodo de Pago" << endl;
        cout << "2. Listar Metodos de Pago" << endl;
        cout << "3. Cargar Factura" << endl;
        cout << "4. Listar Facturas" << endl;
        cout << "--------------------------------" << endl;
        cout << "0. Volver al Menu Principal" << endl;
        cout << "--------------------------------" << endl;
        cout << "Opcion: ";
        cin >> op;
        system("cls");

        switch(op) {
            case 1: {
                MetodoPago reg;
                reg.cargar();
                grabarMetodoPago(reg);
                cout << "\nMetodo de Pago guardado." << endl;
            } break;
            case 2:
                cout << "--- LISTA DE METODOS DE PAGO ---" << endl;
                listarMetodosPago();
                break;
            case 3: {
                Facturacion reg;
                reg.cargar();
                grabarFactura(reg);
                cout << "\nFactura guardada." << endl;
            } break;
            case 4:
                cout << "--- LISTA DE FACTURAS ---" << endl;
                listarFacturas();
                break;
            case 0:
                break;
            default:
                cout << "Opcion no valida." << endl;
                break;
        }

        if (op != 0) {
            system("pause");
        }

    } while (op != 0);
}


int main() {
    int opcion;

    do {
        mostrarMenuPrincipal();
        cin >> opcion;
        system("cls"); // En Windows. Usar system("clear") en Linux/Mac.

        switch (opcion) {
            case 1:
                menuGestionPacientes();
                break;
            case 2:
                menuGestionMedicos();
                break;
            case 3:
                menuGestionTurnos();
                break;
            case 4:
                menuGestionHistorias();
                break;
            case 5:
                menuAdministracion();
                break;
            case 6:
                menuFacturacion();
                break;
            case 0:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
                break;
        }

        if (opcion != 0) {

        }

    } while (opcion != 0);

    return 0;
}
