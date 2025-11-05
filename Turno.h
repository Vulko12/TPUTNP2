#ifndef TURNO_H
#define TURNO_H

#include "Fecha.h"
#include "Hora.h"

class Turno {
private:
    int idTurno;
    int dniPaciente;
    int dniMedico;
    Fecha fechaAtencion;
    Hora horaAtencion;
    float importe;
    int estado; // 1: Activo, 2: Atendido, 3: Cancelado

public:
    void cargar();
    void mostrar();
};

#endif // TURNO_H
