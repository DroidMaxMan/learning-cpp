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
 * Uniones.h
 *
 *  Created on: 20 de ene. de 2016
 *  Author: @alxgcrz
 */

#ifndef UNIONES_H_
#define UNIONES_H_

/*
 * UNIONES --> http://c.conclase.net/curso/index.php?cap=016#inicio
 *
 * union [<identificador>] {
 *  [<tipo> <nombre_variable>[,<nombre_variable>,...]];
 * } [<variable_union>[,<variable_union>,...];
 *
 * Las uniones son un tipo especial de estructuras que permiten almacenar elementos
 * de diferentes tipos en las mismas posiciones de memoria, aunque evidentemente no simultáneamente.
 */

union unEjemplo {
	int A;
	char B;
	double C;
	struct {
		int X, Y, Z;
	};
} UnionEjemplo;

// Uso de uniones
void uniones() {

	// Inicializar uniones --> http://c.conclase.net/curso/index.php?cap=016#UNI_INIT
	// Las uniones solo pueden ser inicializadas en su declaración mediante su primer miembro.
	// Se inicializan igual que los arrays y dado que sólo se inicializa el primer miembro sólo contendrá un elemento.
	unEjemplo uEj = {5};

	cout << " unEjemplo --> A: " << uEj.A << endl;
}

#endif /* UNIONES_H_ */
