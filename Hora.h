#ifndef HORA_H
#define HORA_H

class Hora {
private:
    int minuto;
    int hora;

public:
    // Constructor
    Hora(int h = 0, int m = 0);

    // Setters y Getters
    void setMinuto(int m);
    void setHora(int h);
    int getMinuto();
    int getHora();


    void cargar();
    void mostrar();
};

#endif // HORA_H
