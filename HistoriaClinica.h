#ifndef HISTORIACLINICA_H
#define HISTORIACLINICA_H

#include "Fecha.h"

class HistoriaClinica {
private:
    int idHistoria;
    int dniPaciente;
    int dniMedico;
    int idTurno;
    Fecha fecha;
    char diagnostico[200];
    char tratamiento[200];

public:
    void cargar();
    void mostrar();
};

#endif // HISTORIACLINICA_H
