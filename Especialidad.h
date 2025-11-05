#ifndef ESPECIALIDAD_H
#define ESPECIALIDAD_H

class Especialidad {
private:
    int codEspecialidad;
    char nombre[20];
    char descripcion[100];

public:
    void cargar();
    void mostrar();
};

#endif // ESPECIALIDAD_H
