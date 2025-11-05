#include <iostream>
#include <cstdio>
#include "especialidadArchivo.h"

using namespace std;

bool grabarEspecialidad(Especialidad reg) {
    FILE* pFile;
    pFile = fopen("especialidades.dat", "ab");
    if (pFile == NULL) {
        return false;
    }
    bool escribio = fwrite(&reg, sizeof(Especialidad), 1, pFile);
    fclose(pFile);
    return escribio;
}

void listarEspecialidades() {
    FILE* pFile;
    Especialidad reg;
    pFile = fopen("especialidades.dat", "rb");
    if (pFile == NULL) {
        cout << "El archivo 'especialidades.dat' aun no existe." << endl;
        return;
    }
    while (fread(&reg, sizeof(Especialidad), 1, pFile) == 1) {
        reg.mostrar();
        cout << "----------------------------" << endl;
    }
    fclose(pFile);
}
