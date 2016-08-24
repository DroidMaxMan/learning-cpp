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
 * Arrays.h
 *
 *  Created on: 19 de ene. de 2016
 *  Author: @DroidMaxMan
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
