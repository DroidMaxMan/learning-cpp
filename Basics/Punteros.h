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
 * Punteros.h
 *
 *  Created on: 19 de ene. de 2016
 *  Author: @alxgcrz
 *
 *  Uso de punteros
 */

#ifndef PUNTEROS_H_
#define PUNTEROS_H_

#include "Estructuras.h"

/*
 * Punteros --> http://c.conclase.net/curso/index.php?cap=012#inicio
 */

// Definir un puntero
int *puntero_a_entero = 0; 				// Forma CORRECTA de definir un puntero, en este caso un puntero que apunta a int
int *puntero_a_entero_indeterminado;	// Forma INCORRECTA. Definimos un puntero a un objeto de tipo int. NO se puede usar sin haberle asignado una dirección ya que ahora mismo apunta a un valor indeterminado

struct Empleado *pEmpleado; // Puntero a una estructura en Estructuras.h llamada 'Empleado'. No se puede usar ya que no le hemos asignado ninguna dirección
float *puntero_a_float; 	// Puntero a float sin asignar.
// ... Se pueden crear punteros a todo tipo de objetos

// Formas equivalentes de crear punteros. La colocación del asterisco son equivalentes
int *puntero_A;
int* puntero_B;
int *puntero_C, *puntero_D;

// Si hacemos esto, estamos creando un puntero y un int, no dos punteros. No_soy_puntero_G sería en realidad un int.
int* puntero_F, no_soy_puntero_G;

/*
 * Uso de punteros
 */
void uso_punteros() {
	// Variable local
	int entero_A = 12;

	puntero_a_entero = &entero_A;	// Ahora el puntero "puntero_a_entero" es un puntero a int que apunta a una dirección de memoria que contiene el valor de A
	// &valor_entero_A se lee "dirección de valor_entero_A" --> http://c.conclase.net/curso/index.php?cap=013#OP2_Referencia

	// Devuelve la dirección de memoria
	cout << " Puntero devuelve la dirección de memoria " << puntero_a_entero << endl;

	// A partir de la dirección para llegar hasta el valor se usa el operador de INDIRECCIÓN (*) --> http://c.conclase.net/curso/index.php?cap=013#OP2_Referencia
	cout << " Puntero ahora devuelve el valor " << *puntero_a_entero << endl;

	// Con la siguiente expresión estamos accediendo a la zona donde se guarda el valor de entero_A y modificamos el valor
	// Es decir, modificamos el valor usando el puntero para alcanzar el int al que apunta el puntero.
	*puntero_a_entero = 6;
	cout << " Ahora el valor de entero_A es " << entero_A << endl;

	// Asignar punteros
	// Podemos asignar un puntero a otro, el cual apuntará al mismo objeto. Los punteros tienen que ser equivalentes
	int *otro_puntero_a_int = NULL;
	otro_puntero_a_int = puntero_a_entero;
	cout << " Usamos el otro puntero para recuperar el valor de entero_A: " << *otro_puntero_a_int << endl;

	/*
	 * Relación PUNTEROS y ARRAYS --> http://c.conclase.net/curso/index.php?cap=012b#inicio
	 */
	// Array de enteros
	int array_enteros[5] = {1, 2, 3, 4, 5};

	int *puntero_de_array = array_enteros;	// Ahora el puntero está apuntando al primer elemento del array

	cout << " Elemento al que apunta el puntero usado con un array --> " << *puntero_de_array << endl;

	// Si usamos el operador de post-incremento lo que sucede es que no aumentamos una unidad si no que se aumenta los bytes necesarios
	// para apuntar al siguiente elemento. También podemos aumentar o disminuir la posición de forma directa
	puntero_de_array++;

	cout << " Elemento al que apunta el puntero usado con un array después de ++ --> " << *puntero_de_array << endl;

	// Sumamos 2
	puntero_de_array += 2;

	cout << " Elemento al que apunta el puntero usado con un array después de sumar 2 --> " << *puntero_de_array << endl;

	/*
	 * PUNTEROS GENÉRICOS --> http://c.conclase.net/curso/index.php?cap=012c#inicio
	 *
	 * void *<identificador>;
	 */
	char cadena[10] = "Hola";
	char *c = NULL;
	int *n = NULL;
	void *v = NULL;

	c = cadena; // c apunta a cadena, y más concretamente al primer elemento del array, que es H
	n = (int *)cadena; // n también apunta a cadena. Hacemos un casting para que un puntero que apunta a char se asigne a un puntero que apunta a int
	v = (void *)cadena; // v también. Hacemos un casting para que un puntero a char se asigne a un puntero genérico
	cout << " carácter: " << *c << endl;
	cout << " entero:   " << *n << endl;
	cout << " float:    " << *(float *)v << endl;

	/*
	 * PUNTEROS a estructuras --> http://c.conclase.net/curso/index.php?cap=012c#PUNT_Estructuras
	 */
	// Usamos como ejemplo la estructura 'Punto' creada en Estructuras.h
	Punto punto(5,8);

	// Declaramos y definimos el puntero al objeto de tipo Punto
	Punto *puntero_a_punto = &punto;

	// Para leer los campos de la estructura, en vez del (.) se usa (->) cuando tratamos con punteros
	cout << " Acceso a Punto --> accediendo con puntero x es " << puntero_a_punto->x << " y directamente x es " << punto.x << endl;

	// Dado que los punteros son objetos como cualquier otro, también se podría declarar en el cuerpo de la estructura como otra variable
	struct Ejemplo {
		int x, y, z;
		Ejemplo() { x = 1; y = 2; z = 3; }
	} objeto_ejemplo, *puntero_a_ejemplo;

	// Antes de usar el puntero, hay que inicializarlo como hicimos anteriormente.
	puntero_a_ejemplo = &objeto_ejemplo;

	// Ahora ya podemos usar tanto el puntero como el objeto directamente para acceder a los campos
	cout << " Acceso a Ejemplo --> accediendo con puntero x es " << puntero_a_ejemplo->x << " y directamente x es " << objeto_ejemplo.x << endl;

	/*
	 * MEMORIA DINÁMICA con punteros --> http://c.conclase.net/curso/index.php?cap=012d#inicio
	 *
	 * Se crean con el operador 'new' y se eliminan con 'delete'. Sirve para hacer uso de un tipo de memoria llamada dinámica de la que hay más
	 * cantidad y no sólo de la memoria local. Por tanto sirve para que nuestro programa tenga acceso a mayor cantidad de memoria y no esté limitado.
	 *
	 * IMPORTANTE: todos los punteros creados con 'new' hay que eliminarlos con 'delete' para liberar la memoria que utilizan
	 * Operadores new y delete --> http://c.conclase.net/curso/index.php?cap=013b#inicio
	 */
	int *dA;
	char *dB;
	float *dC;
	struct stPunto {
		float x,y;
	} *dD;

	dA = new int;
	dB = new char;
	dC = new float;
	dD = new stPunto;

	*dA = 10;
	*dB = 'a';
	*dC = 10.32;
	dD->x = 12; dD->y = 15;


	cout << " dA = " << *dA << endl;
	cout << " dB = " << *dB << endl;
	cout << " dC = " << *dC << endl;
	cout << " dD = (" << dD->x << ", " << dD->y << ")" << endl;

	delete dA;
	delete dB;
	delete dC;
	delete dD;
}

#endif /* PUNTEROS_H_ */
