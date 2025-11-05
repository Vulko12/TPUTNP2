#include <iostream>
#include <cstdio>
#include "turnoArchivo.h"

using namespace std;

bool grabarTurno(Turno reg) {
    FILE* pFile;
    pFile = fopen("turnos.dat", "ab");
    if (pFile == NULL) {
        return false;
    }
    bool escribio = fwrite(&reg, sizeof(Turno), 1, pFile);
    fclose(pFile);
    return escribio;
}

void listarTurnos() {
    FILE* pFile;
    Turno reg;
    pFile = fopen("turnos.dat", "rb");
    if (pFile == NULL) {
        cout << "El archivo 'turnos.dat' aun no existe." << endl;
        return;
    }
    while (fread(&reg, sizeof(Turno), 1, pFile) == 1) {
        reg.mostrar();
        cout << "----------------------------" << endl;
    }
    fclose(pFile);
}
