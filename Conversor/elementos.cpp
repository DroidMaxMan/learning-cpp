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
 * elementos.cpp
 *
 *  Created on: 18 de ene. de 2016
 *  Author: @alxgcrz
 */

//- fichero: elementos.cpp --------------------------------------------
#include <iostream> 	// inclusión de la biblioteca de entrada/salida
#include <string.h>		// inclusión de la biblioteca para el manejo de strings
#include "Pareja.h"

using namespace std ; 	// utilización del espacio de nombres de la biblioteca

// Declaración de variables de Tipo Simple
// NOTA: como norma, las variables se definiran de forma local, no global como estamos haciendo aquí

// Biblioteca STRINGS
string cadena_caracteres = "Hello World" ;




// CONSTANTES
// Como norma el nombre de la constante va en MAYÚSCULAS

// BOOLEANAS
const bool OK = true, CANCEL = false ;

// CADENAS
const char CARACTER = 'a' ;
const char* CADENA = "Hello World" ;
const string CADENA_STRING = "Hello World" ;

// ENTERAS
const int CONSTANTE_ENTERA_DECIMAL = 5 ; 			// Decimal
const int CONSTANTE_ENTERA_HEXADECIMAL = 0x10B3F ; 	// Hexadecimal
const int CONSTANTE_ENTERA_OCTAL = 0751 ; 			// Octal

const short CONSTANTE_CORTA = 1 ;
const unsigned short CONSTANTE_CORTA_POSITIVA = 1U ;

const int CONSTANTE_ENTERA = 1 ;
const unsigned CONSTANTE_ENTERA_POSITIVA = 1U ;

const long CONSTANTE_ENTERA_LARGA = 1L ;
const unsigned long CONSTATE_ENTERA_LARGA_POSITIVA= 1UL ;

const long long CONSTANTE_ENTERA_EXTRALARGA = 1LL ;
const unsigned long long CONSTANTE_ENTERA_EXTRALARGA_POSITIVA = 1ULL ;

// REALES
const float CONSTANTE_REAL_FLOAT = 1.5F ;
const double CONSTANTE_REAL_DOUBLE = 1.5 ;
const long double CONSTANTE_REAL_DOUBLE_LARGA = 1.5L;





// FUNCIONES








int main(int argc, char **argv) {





	// Uso de una clase mediante su constructor parametrizado
	Pareja p(50, 100);
	cout << " Pareja a: " << p.getA() << " b: " << p.getB() << endl;








}







//- fin: elementos.cpp ------------------------------------------------




