#include <iostream>
#include <cstdio> // Para FILE, fopen, fwrite, fread, fclose
#include "pacienteArchivo.h"

using namespace std;

/**
 * Guarda un registro de Paciente en el archivo "pacientes.dat"
*/
bool grabarPaciente(Paciente reg) {
    FILE* pFile; // Puntero al archivo

    // Abre el archivo en modo "append binary" (agregar binario)
    // "ab" significa que si el archivo existe, escribe al final.
    // Si no existe, lo crea.
    pFile = fopen("pacientes.dat", "ab");

    if (pFile == NULL) {
        cout << "Error al abrir el archivo." << endl;
        return false;
    }

    // Escribe el registro (reg) en el archivo
    bool escribio = fwrite(&reg, sizeof(Paciente), 1, pFile);

    // Cierra el archivo
    fclose(pFile);

    return escribio;
}

/**
 * Lee el archivo "pacientes.dat" completo y muestra los registros por pantalla
*/
void listarPacientes() {
    FILE* pFile;
    Paciente reg; // Variable para leer cada registro

    // Abre el archivo en modo "read binary" (leer binario)
    pFile = fopen("pacientes.dat", "rb");

    if (pFile == NULL) {
        cout << "El archivo 'pacientes.dat' aun no existe." << endl;
        return;
    }

    // Lee registros del archivo uno por uno mientras haya
    while (fread(&reg, sizeof(Paciente), 1, pFile) == 1) {
        reg.mostrar(); // Usa el método mostrar() de la clase Paciente
        cout << "----------------------------" << endl;
    }

    fclose(pFile);
}
