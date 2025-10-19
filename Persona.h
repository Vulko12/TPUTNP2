#ifndef PERSONA_H
#define PERSONA_H

class Persona {
protected:
    int dni;
    char nombre[30];
    char apellido[30];
    char telefono[15];
    char direccion[40];
    char email[40];

public:
    // Setters
    void setDni(int d);
    void setNombre(const char* n);
    void setApellido(const char* a);
    void setTelefono(const char* t);
    void setDireccion(const char* d);
    void setEmail(const char* e);

    // Getters
    int getDni();
    const char* getNombre();
    const char* getApellido();
    const char* getTelefono();
    const char* getDireccion();
    const char* getEmail();

    // Acciones
    void cargar();
    void mostrar();
};

#endif // PERSONA_H
