#include <iostream>
#include <cstdio>
#include "metodoPagoArchivo.h"

using namespace std;

bool grabarMetodoPago(MetodoPago reg) {
    FILE* pFile;
    pFile = fopen("metodosPago.dat", "ab");
    if (pFile == NULL) {
        return false;
    }
    bool escribio = fwrite(&reg, sizeof(MetodoPago), 1, pFile);
    fclose(pFile);
    return escribio;
}

void listarMetodosPago() {
    FILE* pFile;
    MetodoPago reg;
    pFile = fopen("metodosPago.dat", "rb");
    if (pFile == NULL) {
        cout << "El archivo 'metodosPago.dat' aun no existe." << endl;
        return;
    }
    while (fread(&reg, sizeof(MetodoPago), 1, pFile) == 1) {
        reg.mostrar();
        cout << "----------------------------" << endl;
    }
    fclose(pFile);
}
