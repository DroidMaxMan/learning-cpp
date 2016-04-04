/*
 * Pareja.cpp
 *
 *  Ejemplo de clases.
 *
 *  Implementación de las clases
 */
/**----- Directivas de pre-procesador #define, #include, etc... -----*/
#include <iostream>
#include "Pareja.h"

// Constructor
Pareja::Pareja() {
	a = 0;
	b = 0;
}

// Constructor parametrizado de Pareja
Pareja::Pareja(double a1, double b1) {
	a = a1;
	b = b1;
}

// Constructor copia
Pareja::Pareja(const Pareja &p) : a(p.a), b(p.b) {}

// Destructor
Pareja::~Pareja() { }

// Implementación de los métodos miembro de Pareja
double Pareja::getA() { return a; }
double Pareja::getB() { return b; }
void Pareja::setA(double a) { this->a = a; }
void Pareja::setB(double b) { this->b = b; }
void Pareja::Lee(double &a1, double &b1) { a1 = a; b1 = b; }
void Pareja::imprime() { std::cout << " Pareja --> a: " << a << " - b: " << b << std::endl; }


// Implementación de los métodos miembro de la subclase Suma
double Suma::calcular() { return getA() + getB(); }
void Suma::imprime() { std::cout << " Suma --> a: " << Pareja::getA() << " + b: " << Pareja::getB() << std::endl; }
