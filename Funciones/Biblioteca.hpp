/*
 * Biblioteca.hpp
 *
 *  Created on: 19 de ene. de 2016
 *  Author: alejandro
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
