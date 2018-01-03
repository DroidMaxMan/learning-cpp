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
 * Funciones.cpp
 *
 *  Created on: 19 de ene. de 2016
 *  Author: @alxgcrz
 *
 *  Funciones de C++
 */
/**----- Directivas de pre-procesador #define, #include, etc... -----*/
#include <iostream>		// Busca el fichero en los directorio include del compilador usando <>
#include "Biblioteca.hpp" // Busca el fichero de cabecera en el proyecto o directorio actual usando ""

/**-- Espacio de nombres --*/
using namespace std;

/**----- Variables globales. -----*/
struct Punto {
	int x, y;
	Punto(int a, int b) : x(a), y(b) { }
};

/**----- Prototipos de funciones -----*/
/*
 * En C++ es OBLIGATORIO definir el prototipo de las funciones que vamos a usar --> http://c.conclase.net/curso/index.php?cap=003#inicio
 *
 * [extern|static] <tipo_valor_retorno> [<modificadores>] <identificador>(<lista_parámetros>);
 */
int Mayor(int a, int b);
int Menor(int, int);

/*
 * SOBRECARGA de funciones -- > http://c.conclase.net/curso/index.php?cap=021#inicio
 *
 * La condición es que el número y/o tipo de los parámetros sea diferente
 */
double Mayor(double a, double b);
long Mayor(long a, long b);

/* extern significa que la función puede ser accedida desde cualquier fichero del proyecto
 * Es el valor POR DEFECTO */
extern void funcion_extern(float, int);

/* static significa que sólo podrá ser accedida en este fichero donde está declarada y definida */
static void funcion_static();

/*
 * Paso por REFERENCIA --> http://c.conclase.net/curso/index.php?cap=015#inicio
 * Le pasamos la variable, con lo cual todos los cambios hechos a la variable dentro de la función se mantienen
 */
double function_por_referencia(double &a);

// Pasar un PUNTERO como parámetro por VALOR y REFERENCIA a una función --> http://c.conclase.net/curso/index.php?cap=015b#inicio
void function_puntero(int *pValor, int* &pReferencia);


/*
 * ARRAYS como parámetros --> http://c.conclase.net/curso/index.php?cap=015b#FUN2_ArrayParam
 * Ya que un array se comporta como un puntero al primer elemento, las modificaciones se mantendrán incluso después de retornar de
 * la función. Pasa igual que cuando pasamos un puntero por valor. No podemos modificar el puntero pero sí el valor donde apunta
 */
void function_array(int []);


/*
 * ESTRUCTURAS como parámetros --> http://c.conclase.net/curso/index.php?cap=015b#FUN2_StructParam
 * Las estructuras se comportan como cualquier otro objeto. Puede ser pasadas como valor o referencia.
 * Cuando son demasiado complejas, en vez de pasarse por valor y tener que copiarse, se pasan por referencia aunque
 * no tengan modificarse. Se pasarían como const
 */
void function_str(Punto*, Punto&);


/*
 * Funciones con número de parámetros indeterminado --> http://c.conclase.net/curso/index.php?cap=020b#PAR_VARIABLES
 *
 * <tipo_valor_retorno> <identificador>(<lista_parámetros_conocidos>, ...);
 *
 * Al menos tiene que haber un parámetro conocido. Por ejemplo:
 *
 * void function(int a, ...);
 */

/*
 * Funciones INLINE --> http://c.conclase.net/curso/index.php?cap=020c#FUN3_INLINE
 *
 * inline <tipo> <nombre_de_funcion>(<lista_de_parámetros>);
 *
 * Cuando añadimos el modificador "inline", el compilador sustituye la llamada a la función por el código de la función. Por tanto ya
 * no 'salta' hacia el código en cada llamada. Esta característica crea programas más rápidos pero más largos, ya que duplica el codigo de la función
 * y lo inserta en todos los lugares donde se haga una llamada a la función.
 */

// Función con parámetro constante y por defecto. No puedo ser modificado dentro de la función
void third_function(const int a, const int &b, int c = 5);

/**----- Declaraciones de clases -----*/


/**----- Función MAIN -----*/
int main(int argc, char **argv) {
	/*
	 * Parámetros pasados a la función MAIN --> http://c.conclase.net/curso/index.php?cap=020c#ARG_MAIN
	 *
	 * argc es el número de parámetros pasado en la línea de comandos
	 * argv es un array que contiene los parámetros. (el nombre del ejecutable se considera parámetro. Por tanto mínimo habrá siempre 1 parámetro)
	 */
	for(int i = 0; i < argc; i++)
		cout << argv[i] << " ";
	cout << endl;


	// Usar las funciones declaradas y definidas en este fichero
	cout << " Mayor(5,3): " << Mayor(5,3) << endl;
	cout << " Menor(12,20): " << Menor(12,20) << endl;

	// Usar funciones de otros ficheros
	funcion_sin_retorno();

	// Valores por defecto
	funcion_parametros_default_prototipo(1,2,3,4);
	funcion_parametros_default_prototipo(1,2,3);
	funcion_parametros_default_prototipo(1,2);

	// Función static
	funcion_static();

	/* Crear ALIAS -> http://c.conclase.net/curso/index.php?cap=015#FUN2_Refer
	 * El ampersand (&) también se utiliza para la creación de alias, es decir un objeto que apunta a otro.
	 * Su utilidad en las funciones es la de pasar parámetros por referencia a las funciones
	 * Cuando se crea un alias hay que asignar un valor obligatoriamente
	 */
	int a = 10;
	int &alias_variable = a;
	cout << " Alias: " << alias_variable << " Variable: " << a <<endl;

	// Paso por referencia --> http://c.conclase.net/curso/index.php?cap=015#inicio
	double dA = 2.5;
	cout << " Paso por referencia: dA pasa de 2.5 a " << function_por_referencia(dA) << endl;

	// Paso de puntero por valor
	int b = 10;
	int *pValor, *pReferencia;
	pValor = pReferencia = &b;

	cout << " Puntero por referencia antes --> b: " << b << " - pValor " << pValor << " - pReferencia: " << pReferencia << endl;
	function_puntero(pValor, pReferencia);
	cout << " Puntero por referencia después --> b: " << b << " - pValor " << pValor << " - pReferencia: " << pReferencia << endl;

	/*
	 * PUNTEROS a FUNCIONES --> http://c.conclase.net/curso/index.php?cap=020d#FUN3_puntfunc
	 *
	 * <tipo> (*<identificador>)(<lista_de_parámetros>);
	 *
	 * Con esta sintaxis se crea un puntero que apunta a una función que devuelve un valor de <tipo> y acepta esa <lista de parámetros>
	 */
	int (*pFunction)(int a, int b); // Declarado un puntero a función que devuelve un int y acepta dos parámetros de tipo int

	// Una vez creado el puntero, usaremos la función int Mayor(int, int) creada anteriormente para este ejemplo
	pFunction = Mayor;

	// Ahora ya podemos usar el puntero para invocar a la función Mayor(int, int)
	cout << " Llamada función Mayor(int, int) usando el puntero --> El mayor de 10 y 15 es: " << pFunction(10,15) << endl;

	// Parámetros constantes y variables estáticas interiores
	int a3 = 1, b3 = 1;
	for (int var = 0; var < 5; ++var) {
		// Valor por defecto del tercer parámetro
		third_function(a3, b3);
	}
	cout << " Third function: a3: " << a3 << " b3: " << b3 << endl;
	// Le damos valor al parámetro por default
	third_function(a3, b3, 10);
}

/**----- Definiciones de funciones -----*/
/**
 * En esta parte se codifican las funciones declaradas en los prototipos
 *
 * [extern|static] <tipo_valor_retorno> [modificadores] <identificador>(<lista_parámetros>)
 * {
 *   [sentencias]
 * }
 */
int Mayor(int a, int b){
	if(a>b) {
		return a;
	} else {
		return b;
	}
}

int Menor(int a, int b) {
	if(b>a) {
		return a;
	} else {
		return b;
	}
}

// Sobrecarga
double Mayor(double a, double b) {
	if(a>b){
		return a;
	} else {
		return b;
	}
}

long Mayor(long a, long b) {
	if(a>b){
		return a;
	} else {
		return b;
	}
}

// Función usando extern
extern void funcion_extern(float, int) { cout << " Función con extern " << endl; }

// Función usando static
static void funcion_static() { cout << " Función con static " << endl; }

// Implementación de una función. Paso por referencia
double function_por_referencia(double &a) {
	// Primero se suma 1 y luego se hace return. Si ponemos a++ devolverá el resultado y luego le sumará 1
	return ++a;
}

/*
 * Función que recibe un puntero como parámetro.
 * Si se pasa por valor, recibimos una copia del puntero y no se modifica.
 * Pero si es posible modificar el objeto al que apunta ese puntero
 */
void function_puntero(int *pValor, int* &pReferencia) {
	// Modificamos el valor del objeto donde apunto el puntero
	*pValor += 50;
	// Modificamos los punteros
	pValor++;
	pReferencia++;
}

void function_array(int []) {}

void function_str(Punto*, Punto&) {}

// Función con uso de parámetros constantes y parámetros por defecto
// Además dentro se hace uso de variables estáticas que mantienen el valor
// después de cada llamada a la función
void third_function(const int a, const int &b, int c) {
	// Se produce un error en tiempo de compilación
	// si intentamos aumentar el valor de las variables
	// a++, b++;
	static int x = 1;
	cout << " Inside third function: x: " << x << " c: " << c << endl;
	x++;
}

/**----- Definiciones de clases -----*/





