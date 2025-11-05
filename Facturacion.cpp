#include <iostream>
#include "Facturacion.h"

using namespace std;

void Facturacion::cargar() {
    cout << "ID FACTURA: ";
    cin >> idFactura;
    cout << "ID TURNO: ";
    cin >> idTurno;
    cout << "FECHA DE EMISION:" << endl;
    fechaEmision.cargar();
    cout << "MONTO: $";
    cin >> monto;
    cout << "PAGADO (1 para SI, 0 para NO): ";
    cin >> pagado;
    cout << "ID METODO DE PAGO: ";
    cin >> idMetodoPago;
}

void Facturacion::mostrar() {
    cout << "ID FACTURA: " << idFactura << endl;
    cout << "ID TURNO: " << idTurno << endl;
    cout << "FECHA EMISION: ";
    fechaEmision.mostrar();
    cout << endl;
    cout << "MONTO: $" << monto << endl;
    cout << "PAGADO: " << (pagado ? "SI" : "NO") << endl;
    cout << "ID METODO DE PAGO: " << idMetodoPago << endl;
}
