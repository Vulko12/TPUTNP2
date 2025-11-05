#include <iostream>
#include <cstdio>
#include "medicoArchivo.h"

using namespace std;

bool grabarMedico(Medico reg) {
    FILE* pFile;
    pFile = fopen("medicos.dat", "ab");
    if (pFile == NULL) {
        return false;
    }
    bool escribio = fwrite(&reg, sizeof(Medico), 1, pFile);
    fclose(pFile);
    return escribio;
}

void listarMedicos() {
    FILE* pFile;
    Medico reg;
    pFile = fopen("medicos.dat", "rb");
    if (pFile == NULL) {
        cout << "El archivo 'medicos.dat' aun no existe." << endl;
        return;
    }
    while (fread(&reg, sizeof(Medico), 1, pFile) == 1) {
        reg.mostrar();
        cout << "----------------------------" << endl;
    }
    fclose(pFile);
}
