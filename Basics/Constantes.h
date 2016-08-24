/*
 * Copyright (c) 2016 @DroidMaxMan. All rights reserved.
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
 * Constantes.hpp
 *
 *  Created on: 19 de ene. de 2016
 *  Author: @DroidMaxMan
 *
 *  Definir y declarar constantes de C++
 */
/**----- Directivas de pre-procesador #define, #include, etc... -----*/
#include <iostream>

/**---- Espacio de nombres -----*/
using namespace std;

/**----- Constantes globales. -----*/
// Como norma el nombre de la constante va en MAYÚSCULAS

// BOOLEANAS
const bool OK = true, CANCEL = false ;

// CARÁCTER
const char CARACTER = 'a' ;

// CADENAS
const char* CADENA = "Hello World" ;
const string CADENA_STRING = "Hello World" ;

// ENTERAS --> http://c.conclase.net/curso/index.php?cap=007#Not_int
const int CONSTANTE_ENTERA_DECIMAL = 5 ; 			// Decimal
const int CONSTANTE_ENTERA_HEXADECIMAL = 0x10B3F ; 	// Hexadecimal
const int CONSTANTE_ENTERA_OCTAL = 0751 ; 			// Octal

const short CONSTANTE_CORTA = 1 ;
const unsigned short CONSTANTE_CORTA_POSITIVA = 1U ;

const int CONSTANTE_ENTERA = 1 ;
const unsigned CONSTANTE_ENTERA_POSITIVA = 1U ;

// LONG --> http://c.conclase.net/curso/index.php?cap=007#Not_long
const long CONSTANTE_ENTERA_LARGA = 1L ;
const unsigned long CONSTATE_ENTERA_LARGA_POSITIVA= 1UL ;

// LONG LONG --> http://c.conclase.net/curso/index.php?cap=007#Not_longlong
const long long CONSTANTE_ENTERA_EXTRALARGA = 1LL ;
const unsigned long long CONSTANTE_ENTERA_EXTRALARGA_POSITIVA = 1ULL ;

// REALES --> http://c.conclase.net/curso/index.php?cap=007b#inicio
const float CONSTANTE_REAL_FLOAT = 1.5F ;
const double CONSTANTE_REAL_DOUBLE = 1.5 ;
const long double CONSTANTE_REAL_DOUBLE_LARGA = 1.5L;
