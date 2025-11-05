#include <iostream>
#include <cstdio>
#include "historiaClinicaArchivo.h"

using namespace std;

bool grabarHistoria(HistoriaClinica reg) {
    FILE* pFile;
    pFile = fopen("historias.dat", "ab");
    if (pFile == NULL) {
        return false;
    }
    bool escribio = fwrite(&reg, sizeof(HistoriaClinica), 1, pFile);
    fclose(pFile);
    return escribio;
}

void listarHistorias() {
    FILE* pFile;
    HistoriaClinica reg;
    pFile = fopen("historias.dat", "rb");
    if (pFile == NULL) {
        cout << "El archivo 'historias.dat' aun no existe." << endl;
        return;
    }
    while (fread(&reg, sizeof(HistoriaClinica), 1, pFile) == 1) {
        reg.mostrar();
        cout << "----------------------------" << endl;
    }
    fclose(pFile);
}
