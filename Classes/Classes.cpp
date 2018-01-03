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
 * Ejemplo.cpp
 *
 *  Created on: 18 de ene. de 2016
 *  Author: @alxgcrz
 */
/**----- Directivas de pre-procesador #define, #include, etc... -----*/
#include <iostream>
#include <stdio.h>
#include <string.h>
#include "Pareja.h"

/**----- Espacio de nombres -----*/
using namespace std;

/**----- Variables globales. -----*/

/**----- Prototipos de funciones -----*/

/**----- Declaraciones de clases -----*/
class clase {
	private:
		int a;
		static int b;
		char *cad;       // Puntero a char: cadena de caracteres
	public:
		// Constructor que inicializa los datos miembro
	   clase() : a(0), cad(0) {}
	   void EresTu(clase &c) {
		  if(&c == this) cout << "Sí, soy yo." << endl;
		  else cout << "No, no soy yo." << endl;
	   }

	   // Funciones miembro constantes --> http://c.conclase.net/curso/index.php?cap=033#MOD_CONST
	   // Se evita que la función modifique datos miembro
	   void lee() const {
		   // Si intentamos modificar la variable el compilador lanza un error
		   //a++;
	   }

	   /*
	    * MIEMBROS ESTÁTICOS --> http://c.conclase.net/curso/index.php?cap=033#MOD_STATIC
	    * Sólo existirá una copia que compartirán todos los objetos
	    */
	   static void Reset() { b = 0; }

	   /*
	    * Valores de retorno constantes --> http://c.conclase.net/curso/index.php?cap=033#MOD_CONST
	    */
	   const char *Leer(char *c) {
		   strcpy(c, cad);
		   return c;
	   }
};

// Definición e inicialización de miembros estáticos
int clase::b = 0;

int main() {

	// Creación de objetos de tipo 'clase'
   clase c1, c2;

   c1.EresTu(c2);
   c1.EresTu(c1);

   // Para usar una función static hay que usar el operador de ámbito
   clase::Reset();

   // Se pueden asignar objetos --> http://c.conclase.net/curso/index.php?cap=029#P29_ASIGNACION
   Pareja p1, p2(5,10);

   cout << " p1 --> "; p1.imprime();
   cout << " p2 --> "; p2.imprime();

   p1 = p2; // Asignamos p2 a p1

   cout << " p1 --> "; p1.imprime();

   // Uso del constructor copia
   Pareja p4(20,30);

   // Copia. Pasamos el original al constructor copia del receptor
   Pareja p3(p4);

   p3.imprime();

   // Usar funciones miembro que emmascaran la función miembro de la clase base
   Suma suma;

   suma.imprime();
   suma.Pareja::imprime();

   return 0;
}



