/*
 * Biblioteca.cpp
 *
 *  Created on: 19 de ene. de 2016
 *  Author: alejandro
 */
/**----- Directivas de pre-procesador #define, #include, etc... -----*/
#include <iostream> // Busca el fichero en los directorio include del compilador usando <>
#include "Biblioteca.hpp" // Busca el fichero de cabecera en el proyecto o directorio actual usando ""

/**----- Espacio de nombres -----*/
using namespace std;

/**----- Variables globales. -----*/
/**----- Prototipos de funciones -----*/


/**----- Definiciones de funciones ------*/
// En esta parte se codifican las funciones declaradas en los prototipos o en el fichero de cabecera
int multiplicacion_funcion_biblioteca(int a, int b) {
	return a * b;
}

int cuadrado_funcion_biblioteca(int a) {
	return a * a;
}

void funcion_sin_retorno() {
	cout << " Función sin retorno y sin parámetros " << endl;
}

// El tercer y cuarto parámetro tienen valores por defecto declarados en el prototipo
void funcion_parametros_default_prototipo(int a, int b, int c, int d) {
	cout << " Función con parámetros con valor por defecto( " << a << ", " << b << ", " << c << ", " << d << " )" << endl;
}

// El tercer parámetro tendrá valor por defecto
void funcion_parametros_defaulto(int a, int b, int c = 5) {
	cout << " Función con parámetros con valor por defecto( " << a << ", " << b << ", " << c << " )" << endl;
}

