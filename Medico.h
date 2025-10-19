#ifndef MEDICO_H
#define MEDICO_H

#include "Persona.h"
#include "Fecha.h"

class Medico : public Persona { // Herencia pública de Persona
private:
    int codEspecialidad;
    Fecha fechaInicioActividad;

public:
    // Setters y Getters
    void setCodEspecialidad(int c);
    void setFechaInicioActividad(Fecha f);
    int getCodEspecialidad();
    Fecha getFechaInicioActividad();


    void cargar();
    void mostrar();
};

#endif // MEDICO_H
