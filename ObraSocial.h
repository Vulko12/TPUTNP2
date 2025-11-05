#ifndef OBRASOCIAL_H
#define OBRASOCIAL_H

class ObraSocial {
private:
    int codObraSocial;
    char nombre[50];
    char direccion[50];
    char telefono[15];

public:
    void cargar();
    void mostrar();
};

#endif // OBRASOCIAL_H
