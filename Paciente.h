#ifndef PACIENTE_H
#define PACIENTE_H

#include "Persona.h"
#include "Fecha.h"

class Paciente : public Persona { // Herencia pública de Persona
private:
    Fecha fechaNacimiento;
    int codObraSocial;

public:
    // Setters y Getters
    void setFechaNacimiento(Fecha f);
    void setCodObraSocial(int c);
    Fecha getFechaNacimiento();
    int getCodObraSocial();


    void cargar();
    void mostrar();
};

#endif // PACIENTE_H
