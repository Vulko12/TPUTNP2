#include <iostream>
#include <cstring> // Necesario para strcpy
#include "Persona.h"

using namespace std;

// Setters
void Persona::setDni(int d) { dni = d; }
void Persona::setNombre(const char* n) { strcpy(nombre, n); }
void Persona::setApellido(const char* a) { strcpy(apellido, a); }
void Persona::setTelefono(const char* t) { strcpy(telefono, t); }
void Persona::setDireccion(const char* d) { strcpy(direccion, d); }
void Persona::setEmail(const char* e) { strcpy(email, e); }

// Getters
int Persona::getDni() { return dni; }
const char* Persona::getNombre() { return nombre; }
const char* Persona::getApellido() { return apellido; }
const char* Persona::getTelefono() { return telefono; }
const char* Persona::getDireccion() { return direccion; }
const char* Persona::getEmail() { return email; }

void Persona::cargar() {
    cout << "DNI: ";
    cin >> dni;
    cin.ignore();
    cout << "NOMBRE: ";
    cin.getline(nombre, 30);
    cout << "APELLIDO: ";
    cin.getline(apellido, 30);
    cout << "TELEFONO: ";
    cin.getline(telefono, 15);
    cout << "DIRECCION: ";
    cin.getline(direccion, 40);
    cout << "EMAIL: ";
    cin.getline(email, 40);
}

void Persona::mostrar() {
    cout << "DNI: " << dni << endl;
    cout << "NOMBRE COMPLETO: " << nombre << " " << apellido << endl;
    cout << "TELEFONO: " << telefono << endl;
    cout << "DIRECCION: " << direccion << endl;
    cout << "EMAIL: " << email << endl;
}
