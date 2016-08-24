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
 * Biblioteca.hpp
 *
 *  Created on: 19 de ene. de 2016
 *  Author: @DroidMaxMan
 *
 *  Ejemplo de fichero de encabezamiento o fichero de cabecera.
 *
 *  En este fichero se pueden definir funciones, clases, etc.. y que luego serán implementadas
 *  (codificadas) en el fichero source
 */

#ifndef BIBLIOTECA_HPP_
#define BIBLIOTECA_HPP_

/**-- Prototipos de funciones --*/
int multiplicacion_funcion_biblioteca(int, int); // En los prototipos podemos obviar el nombre de los parámetros

int cuadrado_funcion_biblioteca(int);

void funcion_sin_retorno(); 	// Función que no retorna nada. Sería lo que se llama procedimiento en C

/* Los parámetros con valor por default se pueden declarar en el prototipo o en la definición de la función
 * pero NO en ambos sitios a la vez
 * Además, se declaran en al FINAL de la lista de parámetros*/
void funcion_parametros_default_prototipo(int, int, int=3, int x=4); // Definimos 2 parámetros con valor por default
void funcion_parametros_default(int, int, int);	// El tercer parámetro lo declararemos en la definición

#endif /* BIBLIOTECA_HPP_ */
