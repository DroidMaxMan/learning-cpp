/*
 * Copyright (c) 2018 @alxgcrz. All rights reserved.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *        https://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License
 */

/*
 * Biblioteca.cpp
 *
 *  Created on: 19 de ene. de 2016
 *  Author: @alxgcrz
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

