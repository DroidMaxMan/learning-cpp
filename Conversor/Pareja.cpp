/*
 * Pareja.cpp
 *
 *  Ejemplo de clases.
 *
 *  Implementación de las clases
 */
#include "Pareja.h"

// Constructor parametrizado de Pareja
Pareja::Pareja(double a1, double b1) {
	a = a1;
	b = b1;
}

// Implementación de los métodos miembro de Pareja
double Pareja::getA() { return a; }
double Pareja::getB() { return b; }
void Pareja::setA(double a) { this->a = a; }
void Pareja::setB(double b) { this->b = b; }

// Implementación de los métodos miembro de la subclase Suma
double Suma::calcular() { return getA() + getB(); }
