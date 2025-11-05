#ifndef METODOPAGO_H
#define METODOPAGO_H

class MetodoPago {
private:
    int idMetodoPago;
    char nombre[30];

public:
    void cargar();
    void mostrar();
};

#endif // METODOPAGO_H
