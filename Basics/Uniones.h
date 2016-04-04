/*
 * Uniones.h
 *
 *  Created on: 20 de ene. de 2016
 *  Author: alejandro
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
