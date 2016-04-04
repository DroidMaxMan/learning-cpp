/*
 * Pareja.hpp
 *
 *  Ejemplo de clases. En este fichero llamada header o fichero de encabezamiento
 *  se define el interfaz.
 */

#ifndef PAREJA_H_
#define PAREJA_H_

class Pareja
{
	// Atributos miembro. Son privados por defecto. Colocar private: es redundante pero mejora la legibilidad
private:
	double a, b;

public:
	// Constructor
	Pareja();

	// Constructor parametrizado. Se implementa en Pareja.cpp
	Pareja(double a, double b);

	// Prototipado de los métodos miembro. Se implementaran a continuación en Pareja.cpp
	double getA();
	double getB();
	void setA(double a);
	void setB(double b);
};

/*
 * Clase derivada de Pareja
 */
class Suma : public Pareja
{

public:

	// Constructor parametrizado
	Suma(double a, double b) : Pareja(a, b) { }

	// métodos de Suma
	double calcular();

};

#endif /* PAREJA_H_ */
