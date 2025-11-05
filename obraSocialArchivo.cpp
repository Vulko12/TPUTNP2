#include <iostream>
#include <cstdio>
#include "obraSocialArchivo.h"

using namespace std;

bool grabarObraSocial(ObraSocial reg) {
    FILE* pFile;
    pFile = fopen("obrasSociales.dat", "ab");
    if (pFile == NULL) {
        return false;
    }
    bool escribio = fwrite(&reg, sizeof(ObraSocial), 1, pFile);
    fclose(pFile);
    return escribio;
}

void listarObrasSociales() {
    FILE* pFile;
    ObraSocial reg;
    pFile = fopen("obrasSociales.dat", "rb");
    if (pFile == NULL) {
        cout << "El archivo 'obrasSociales.dat' aun no existe." << endl;
        return;
    }
    while (fread(&reg, sizeof(ObraSocial), 1, pFile) == 1) {
        reg.mostrar();
        cout << "----------------------------" << endl;
    }
    fclose(pFile);
}
