/*
 * Arrays.h
 *
 *  Created on: 19 de ene. de 2016
 *  Author: alejandro
 */

#ifndef ARRAYS_H_
#define ARRAYS_H_

/*
 * ARRAYS --> http://c.conclase.net/curso/index.php?cap=010#inicio
 *
 * <tipo> <identificador>[<núm_elemen>][[<núm_elemen>]...];
 *
 * Los arrays sólo pueden contener variables de <tipo>, ya sean int, float, etc... pero sólo del mismo tipo.
 */

// Declaramos un array de 5 enteros
int array_enteros[5];

// Declaración y definición de un array de 10 enteros
int otro_array_enteros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

// Si no le asignamos el tamaño de forma directa, C++ le asigna el tamaño para almacenar la declaración. En este caso crea un array[5]
char array_caracteres[] = {'H', 'O', 'L', 'A', '0'};

/*
 * No se puede usar una variable para definir un tamaño. La siguiente declaración no compilaría:
 *
 * int size = 5;
 * int array_enteros[size];
 */


#endif /* ARRAYS_H_ */
