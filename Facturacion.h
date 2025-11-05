#ifndef FACTURACION_H
#define FACTURACION_H

#include "Fecha.h"

class Facturacion {
private:
    int idFactura;
    int idTurno;
    Fecha fechaEmision;
    float monto;
    bool pagado;
    int idMetodoPago;

public:
    void cargar();
    void mostrar();
};

#endif // FACTURACION_H
