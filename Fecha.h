#ifndef FECHA_H
#define FECHA_H

class Fecha {
private:
    int dia;
    int mes;
    int anio;

public:
    // Constructor
    Fecha(int d = 1, int m = 1, int a = 2024);

    // Setters
    void setDia(int d);
    void setMes(int m);
    void setAnio(int a);

    // Getters
    int getDia();
    int getMes();
    int getAnio();

    void cargar();
    void mostrar();
};

#endif // FECHA_H
