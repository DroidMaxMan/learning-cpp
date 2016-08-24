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
 * Basics.cpp
 *
 *  Created on: 19 de ene. de 2016
 *  Author: @DroidMaxMan
 *
 *  Elementos  básicos de C++
 */
/**----- Directivas de pre-procesador #define, #include, etc... -----*/
#include <iostream>
#include "Constantes.h"
#include "Arrays.h"
#include "Estructuras.h"
#include "Punteros.h"
#include "Uniones.h"

/**----- Espacio de nombres -----*/
using namespace std;

/**
 * Espacio de nombres --> http://c.conclase.net/curso/index.php?cap=026#inicio
 *
 * namespace [<identificador>] {
 * ...
 *	<declaraciones y definiciones>
 * ...
 * }
 */

// Variables definidas dentro del espacio de nombres 'punto'
namespace espacio_2D {
	struct Punto {
		int x;
		int y;
	};
}

namespace espacio_3D {
	struct Punto {
		int x;
		int y;
		int z;
	};
}

/* Sintaxis para usar un determinado espacio de nombres
 * using namespace <identificador>;
 */

using namespace espacio_2D;

// Variable de tipo Punto del espacio_2D
Punto p1;

// Variable de tipo Punto del espacio_3D
espacio_3D::Punto p2;

/*
 * Los espacios de nombres sin identificador sirven para crear identificadores accesibles sólo en determinadas zonas del código.
 * Por ejemplo, si creamos una variable en uno de estos espacios en un fichero fuente concreto,
 * la variable sólo será accesible desde ese punto hasta el final del fichero.
 */
namespace {
	int var1; // Variable accesible desde aquí al final del fichero
}

/**----- Variables globales. -----*/
/*
 * NOTA: como norma general se definirán las variables globales imprescindibles y necesarias. La mayoría serán locales
 *
 * Las variables globales son las ÚNICAS que se INICIALIZAN automáticamente al declararlas.
 */

/*
 * Tipo básico char --> http://c.conclase.net/curso/index.php?cap=002#Ti_char
 *
 * [signed|unsigned] char <identificador>[,<identificador2>[,<identificador3>]...];
 */
char letra_A = 'a';
char letra_a_decimal = 97 ; 		// 1 Byte
char letra_a_hexadeciamal = 0x61 ;	// 1 Byte
char letra_a_octal = 0141 ; 		// 1 Byte


/*
 * Tipo básico int --> http://c.conclase.net/curso/index.php?cap=002b#Ti_int
 *
 * [signed|unsigned] [short|long] int <identificador>[,<identificador2>[,<identificador3>]...];
 * [signed|unsigned] long [int] <identificador>[,<identificador2>[,<identificador3>]...];
 * [signed|unsigned] short [int] <identificador>[,<identificador2>[,<identificador3>]...]; *
 */
short corto = 1; 		// Entero corto. La palabra int es opcional en este caso
unsigned short corto_positivo = 1U;

int entero = 1 ;
unsigned entero_positivo = 1U;

long entero_largo = 1L ; 	// Entero largo. La palabra int es opcional	en este caso
unsigned long entero_largo_positivo = 1UL ;

long long entero_extralargo = 1LL ;
unsigned long long entero_extralargo_positivo = 1ULL ;

int enteros_1, enteros_2, enteros_3 = 2; // Definimos varios enteros y sólo uno lo inicializamos


/*
 * Tipo básico long long --> http://c.conclase.net/curso/index.php?cap=002b#Ti_longlong
 *
 * [signed|unsigned] long long [int] <identificador>[,<identificador2>[,<identificador3>]...];
 */
long long tipo_long_long = 23948245LL, otro_long_long = -4928495LL;
unsigned long long tipo_long_long_sin_signo = 312424ULL;


/*
 * Tipo básico float o coma flotante --> http://c.conclase.net/curso/index.php?cap=002b#Ti_float
 *
 * float <identificador>[,<identificador2>[,<identificador3>]...];
 */
float decimal = 1.5F, otro_decimal = 1.0F;
float decimal_negativo = -2.46F;


/*
 * Tipo básico double o coma flotante doble precision --> http://c.conclase.net/curso/index.php?cap=002b#Ti_double
 *
 * [long] double <identificador>[,<identificador2>[,<identificador3>]...];
 */
double decimal_doble = 2.1234, decimal_doble_negativo = -564873.827883;
long double decimal_double_long = 10292883.02938L, decimal_double_negativo = -1292383.93893282L;

/*
 * Tipo básico bool --> http://c.conclase.net/curso/index.php?cap=002b#Ti_bool
 *
 * bool <identificador>[,<identificador2>[,<identificador3>]...];
 */
bool verdadero = true;
bool falso = false;

/*
 * Tipo básico enum --> http://c.conclase.net/curso/index.php?cap=002b#Ti_enum
 *
 * enum [<identificador_de_enum>] {
 *  <nombre> [= <valor>], ...} <identificador>[,<identificador2>[,<identificador3>]...];
 * enum <identificador_de_enum> {
 *  <nombre> [= <valor>], ...} [<identificador>[,<identificador2>[,<identificador3>]...]];
 */
enum orden { primero=1, segundo, tercero }; // Primero vale 1, segundo vale 2 y tercero vale 3

// Más adelante en otras partes del programa podemos declarar variables del anterior enum
enum orden var_orden_1, var_orden_2;

// Definimos un enum y declaramos dos variables de ese enum
enum dias { lunes = 1, martes, miercoles, jueves, viernes, sabado, domingo } semana_1, semana_2;

// Definir un enum sin identificador. Sólo podremos declarar variables en la propia definición ya que no tenemos nombre para llamarlo después
// enum { boli, lapiz, goma } estuche_1, estuche_2, estuche_3;

// No se puede usar el mismo valor en otros enums. Por ejemplo el siguiente enum daría error por haber usado lunes en otro enum
// enum ex { ex_1, ex_2, lunes };

// Valores del enum
// Uno vale 1 y el resto de valores son correlativos hasta reinicio, donde le asignamos el valor 0
// y por tanto los siguientes valores son correlativos a este nuevo valor asignado. Por tanto valor_1 valdría 1 y valor_2 vale 2
enum valores { uno = 1, dos, tres, reinicio = 0, valor_1, valor_2 };


/*
 * CADENAS --> http://c.conclase.net/curso/index.php?cap=008#in
 *
 * En C++ se manejan las cadenas como arrays. También existe la libreria "string" que facilita la manipulación y tratamiento de cadenas.
 *
 * ¿Cúal usar? -- > http://stackoverflow.com/questions/1287306/difference-between-string-and-char-types-in-c
 * In short: use C++ strings in all your internal functions and methods. If you ever write a .dll or .so, use C strings in your public (dll/so-exposed) functions.
 */
char saludo[5] = "HOLA";
char despedida[4] = {'B', 'Y', 'E', '0'};
string uso_strings = "Cadena usando un string";

/*
 * Definición de NUEVOS TIPOS con typedef --> http://c.conclase.net/curso/index.php?cap=019#inicio
 *
 * typedef <tipo> <identificador>;
 *
 * <tipo> puede ser cualquier tipo C++, fundamental o derivado.
 */
typedef unsigned int UINT; // UINT será un tipo válido para la declaración de variables o parámetros, y además será equivalente a un entero sin signo.
typedef unsigned char BYTE; // BYTE será un tipo equivalente a ocho bits.
typedef unsigned short int WORD; // WORD será un tipo equivalente a dieciséis bits.


/*
 * STATIC --> http://c.conclase.net/curso/index.php?cap=025#VARV_STATIC
 * Una variable global definida con 'static' significa que no podrá ser accedida desde fuera de esta fichero
 */
static int a10 = 1; // Variable global no accesible desde el exterior

/**----- Prototipos de funciones -----*/
void conversiones(); // Ejemplos de conversiones de tipos

/**----- Declaraciones de clases -----*/


/**----- Función MAIN -----*/
int main(int argc, char **argv) {
	// Variables locales. Se eliminarán al finalizar el bloque donde están definidas, que en este caso es la funcion MAIN
	// Las variables locales HAY QUE INICIALIZARLAS ANTES de utilzarlas ya que si sólo se declaran, contienen "basura".
	int a = 1, b = 2, c = 3, d = 4;

	// Asignación del mismo valor a varias variables
	int x1, x2, x3, x4;
	x1 = x2 = x3 = x4 = 20;
	cout << " Asignar mismo valor a varias variables --> x1: " << x1 << " x2: " << x2 << " x3: " << x3 << " x4: " << x4 << endl;

	/* Operadores aritméticos --> http://c.conclase.net/curso/index.php?cap=004#Op_aritmeticos */
	cout << " Suma " << b << "+" << a << ": " << b+a << endl;
	cout << " Resta " << d << "-" << c << ": " << d-c << endl;
	cout << " Multiplicación " << c << "*" << b << ": " << c*b << endl;
	cout << " División entera " << d << "/" << b << ": " << d/b << endl;
	cout << " Módulo (o resto) " << d << "%" << c << ": " << d%3 << endl;

	/*
	 * <variable> ++ (post-incremento) // Cuando es sufijo se aplica después de evaluar la expresión
	 * ++ <variable> (pre-incremento) // Cuando es prefijo se aplica antes de evaluar la expresión
     * <variable>--  (post-decremento)
     * -- <variable> (pre-decremento)
	 */
	int f = 100, g = 10, h = 10;
	int resultado_1 = f + g++; // Primero se hace f+g = 110 y se guarda en resultado_1. Luego se incrementa el valor de g que pasa de valer 10 a 11
	cout << " f + g++ = 100 + 10++ =  " << resultado_1 << endl;

	int resultado_2 = f + ++h;		// Primero se hace ++h que es h+1 = 10+1 y se guarda en h que pasa a valer 11. Luego se hace la suma f+h = 100 + 11 y se guarda en resultado_2
	cout << " f + ++h = 100 + ++10 =  " << resultado_2 << endl;

	/* Operadores de asignación --> http://c.conclase.net/curso/index.php?cap=004b#Op_asignacion
	 *  "=", "*=", "/=", "%=", "+=", "-=", "<<=", ">>=", "&=", " ^=" y "|="
	 */
	int e = 5;
	e += 12; // Equivale a e = e + 12;
	cout << " e += 12 => e = e + 12 = " << e << endl;
	e -= 12; // Equivale a e = e - 12;
	cout << " e -= 12 => e = e - 12 = " << e << endl;

	// Operador coma --> http://c.conclase.net/curso/index.php?cap=004b#Op_coma
	// Se puede usar en sentencias de control como un for o en la definción de funciones como por ejemplo:
	// func(x, (y = 1, y + 2), 7);
	for (int i = 0, max = 5; i < max; i++) { cout << " Iteración " << i << endl; } // Vemos que definimos i y max y las separamos con una coma

	/*
	 * Operador de comparación --> http://c.conclase.net/curso/index.php?cap=004b#Op_comparacion
	 * == igualdad
	 * != desigualdad
	 * > mayor que
	 * < menor que
	 * >= mayor o igual que
	 * <= menor o igual que
	 */

	/*
	 * Operadores lógicos --> http://c.conclase.net/curso/index.php?cap=004c#Op_logicos
	 * && AND
	 * || OR
	 * ! NOT
	 */

	/*
	 * Operador sizeof --> http://c.conclase.net/curso/index.php?cap=004c#Op_sizeof
	 * En ambos casos el resultado es una constante entera que da el tamaño en bytes del espacio de memoria usada
	 * por el operando, que es determinado por su tipo.
	 *
	 * sizeof (<expresión>)
	 * sizeof (nombre_de_tipo)
	 */
	cout << " sizeof(10+12) " << sizeof(10+12) << " bytes." << endl;
	cout << " sizeof(10L+15) " << sizeof(10L+15) << " bytes." << endl;
	cout << " sizeof(10+12.5) " << sizeof(10+12.5) << " bytes." << endl;
	cout << " sizeof(long) " << sizeof(long) << " bytes" << endl;

	/* Sentencias de control */
	/*
	 * IF --> http://c.conclase.net/curso/index.php?cap=005c#Se_ifelse
	 */
	if (OK) {
		// La expresión se evalúa a verdadero
		cout << " La expresión se evalúa a verdadero " << endl;
	} else {
		// La expresión se evalúa a falso
	}

	/*
	 * WHILE --> http://c.conclase.net/curso/index.php?cap=005b#Se_mientras
	 */
	int condicion = 1 ;
	while (condicion <= 10) {
		cout << " While -- Contador: " << condicion << endl;
		condicion++;
	}

	/*
	 * DO...WHILE --> http://c.conclase.net/curso/index.php?cap=005b#Se_hacermientras
	 */
	do {
		cout << " Do While -- Contador: " << condicion << endl;
		condicion++;
	} while (condicion <= 20);

	/*
	 * FOR --> http://c.conclase.net/curso/index.php?cap=005b#Se_para
	 */
	for (int i = 0; i < 5; ++i) {
		cout << " For loop -- Contador: " << i << endl;
	}

	for (int i = 0, max = 5; i < max; i++) {
		cout << " For con dos variables declaradas -- " << i << endl;
	}

	/*
	 * SWITCH --> http://c.conclase.net/curso/index.php?cap=005c#Se_switch
	 */
	switch (CONSTANTE_ENTERA) {
	case 1:
		cout << " Switch -- Case " << CONSTANTE_ENTERA << endl;
		break;
	default:
		break;
	}

	/*
	 * BREAK --> http://c.conclase.net/curso/index.php?cap=005d#Se_break
	 *
	 * El uso de esta sentencia dentro de un bucle, una sentencia de selección o de un bloque,
	 * transfiere la ejecución del programa a la primera sentencia que haya a continuación.
	 * Se usa en switch, if..else, do...while, while y for.
	 */
	for(int i = 0; i < 10; i++) {
		// Pese a que la condición es i < 10, no se ejecutará porque se ejecutará antes el break y se transferirá el control fuera del for
		if(i==5) {
			break;
		}
		cout << " Break -- iteración " << i << endl;
	}

	/*
	 * CONTINUE --> http://c.conclase.net/curso/index.php?cap=005d#Se_continue
	 *
	 * El uso de esta sentencia dentro de un bucle ignora el resto del código de la iteración actual,
	 * y comienza con la siguiente, es decir, se transfiere la ejecución a la evaluación de la condición del bucle
	 */
	for(int i = 0; i < 10; i++) {
		// Pese a que la condición es i < 10, no se ejecutará porque se ejecutará antes el break y se transferirá el control fuera del for
		if(i==5) {
			cout << " Continue -- la iteración 5 se salta y se pasa a la siguiente " << endl;
			continue;
		}
		cout << " Continue -- iteración " << i << endl;
	}

	/*
	 * Operador de ámbito --> http://c.conclase.net/curso/index.php?cap=006#Dec_operadorambito
	 *
	 * Debido al ámbito de las variables (local y global) si dos variables tiene el mismo nombre y están definidas en ámbitos diferentes,
	 * una de ellas predomina sobre la otra (a esto se le llama emmascaramiento). Para poder acceder a la otra variable se utiliza el operador de
	 * ámbito (::).
	 */
	int entero = 5; // Tenemos una variable local llamada entero que vale 5 y otra variable global llamada igual que vale 1
	cout << " Variable 'entero' local: " << entero << " - Variable 'entero' global: " << ::entero << endl;

	// CONVERSIONES de tipos
	conversiones();

	// Uso de ESTRUCTURAS
	estructuras();

	// Uso de PUNTEROS
	uso_punteros();

	// Uso de UNIONES
	uniones();

	/*
	 * Operador TERNARIO -->  http://c.conclase.net/curso/index.php?cap=018#OP3_OPCOND
	 */
	unsigned int a1 = 10, b2 = 5;
	string resultado = (a1>b2) ? "verdadero" : "falso";
	cout << " (a1>b2) es " << resultado << endl;
}

/**----- Definiciones de funciones -----*/

/*
 * Ejemplo de conversiones de tipos --> http://c.conclase.net/curso/index.php?cap=009#inicio
 */
void conversiones() {
	/*
	 * Conversiones explícitas
	 */
	// Variables locales que debemos inicializar
	int resultado = 0;
	float a = 2.5, b = 5.0;

	// Hacemos un casting explícito de float a int, perdiendo precisión por el camini
	resultado = int(a + b);

	cout << " Casting explícito: " << resultado << endl;

	/*
	 * Conversiones booleanas
	 *
	 * Hay una relacion entre enteros y booleanos:
	 *  - 0 es igual a false
	 *  - cualquier otro número es true
	 */
	if(a){
		cout << " Dado que a != 0 se ejecuta esta parte " << endl;
	}

}

/**---- Definiciones de clases -----*/





