#include <iostream>
#include <cstdio>
#include "facturacionArchivo.h"

using namespace std;

bool grabarFactura(Facturacion reg) {
    FILE* pFile;
    pFile = fopen("facturas.dat", "ab");
    if (pFile == NULL) {
        return false;
    }
    bool escribio = fwrite(&reg, sizeof(Facturacion), 1, pFile);
    fclose(pFile);
    return escribio;
}

void listarFacturas() {
    FILE* pFile;
    Facturacion reg;
    pFile = fopen("facturas.dat", "rb");
    if (pFile == NULL) {
        cout << "El archivo 'facturas.dat' aun no existe." << endl;
        return;
    }
    while (fread(&reg, sizeof(Facturacion), 1, pFile) == 1) {
        reg.mostrar();
        cout << "----------------------------" << endl;
    }
    fclose(pFile);
}
