#ifndef PACIENTEARCHIVO_H
#define PACIENTEARCHIVO_H

#include "Paciente.h"

// DECLARACION DE FUNCIONES

/**
 * Guarda un registro de Paciente en el archivo "pacientes.dat"
 * @param reg Objeto de tipo Paciente ya cargado
 * @return true si pudo guardar, false si no
*/
bool grabarPaciente(Paciente reg);

/**
 * Lee el archivo "pacientes.dat" completo y muestra los registros por pantalla
*/
void listarPacientes();

#endif // PACIENTEARCHIVO_H
