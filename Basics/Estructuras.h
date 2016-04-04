/*
 * Estructuras.h
 *
 *  Created on: 19 de ene. de 2016
 *  Author: alejandro
 */

#ifndef ESTRUCTURAS_H_
#define ESTRUCTURAS_H_

/*
 * Estructuras -- > http://c.conclase.net/curso/index.php?cap=011#inicio
 *
 * struct [<identificador>] {
 *  [<tipo> <nombre_objeto>[,<nombre_objeto>,...]];
 * } [<objeto_estructura>[,<objeto_estructura>,...];
 */

// Declaración de una estructura
struct Persona {
	int DNI;
	string Nombre;
	string Apellidos;
};

// Declaración de una estructura anónima (sin identificador). Por tanto hay que crear objetos de esa estructura en la declaración
struct {
	string Raza;
	string Nombre;
} mascota;

// Declaración de estructura y definimos objetos de este tipo de estructura.
// Uso de constructores y funciones internas
struct Empleado {
	int DNI;
	string Nombre;
	string Apellidos;
	Empleado() { DNI = 0; Nombre = ""; Apellidos = ""; }
	Empleado(int dni, string name, string lastname) {
		DNI = dni;
		Nombre = name;
		Apellidos = lastname;
	}
	int getDNI() { return DNI; }
	string getNombre() { return Nombre; }
	string getApellidos() { return Apellidos; }
} empleado_1, empleado_2, empleados[5];			// Se crea además un array de 5 empleados

// También se puede declarar dentro el constructor y definirlo fuera.
struct Punto {
	int x, y;
	Punto(int, int);
};

// Definición del constructor de Punto
Punto::Punto(int a, int b) {
	x = a;
	y = b;
}

// Estructuras anónimas y estructuras anidadas
struct stAnonima {
	int x, y, z;
	struct {
		int a, b, c;
	};
	struct stName {
		float g, f;
	};
};

// Uso de estructuras
void estructuras() {
	// Definimos un objeto de la estructura 'Persona' declarada anteriormente. Es un objeto local que se eliminará al finalizar la ejecución de la función
	Persona persona_2;

	// Inicializar la estructura si no tuviera un constructor. Se hace igual que los arrays
	Persona persona_1 = {53012323, "Luis", "Fernandez"};

	// Asignación de estructuras sólo si son del MISMO TIPO
	persona_2 = persona_1;

	cout << " Persona_1 --> Nombre: " << persona_1.Nombre << endl;
	cout << " Persona_2 --> Nombre: " << persona_2.Nombre << endl;

	// Crear un objeto de tipo Empleado usando su constructor
	Empleado empleado(12344556, "Antonio", "Ruiz");
	cout << " Empleado --> Nombre: " << empleado.getNombre() << " " << empleado.getApellidos() << endl;

	// Estructura anónima. Sólo tenemo un objeto y no podemos crear más
	mascota.Nombre = "Nemo", mascota.Raza = "Pez";
	cout << " Mascota: " << mascota.Nombre << " es un " << mascota.Raza << endl;

	// Uso del array creado en Empleados
	empleados[0] = {123423556, "Francisco", "Garcia"};
	cout << " Empleado --> Nombre: " << empleados[0].getNombre() << " " << empleados[0].getApellidos() << endl;

	// Uso de estructuras anidadas y anónimas
	stAnonima anonima;
	anonima.x = 5;
	anonima.z = 1; // Si la función anidada es anónima podemos acceder de esta forma, como si no hubiera anidamiento.

	stAnonima::stName anidada; // Para acceder a una función anidada con nombre hay que crear un objeto de la estructura interior y usar el operador de ámbito (::)
	anidada.g = 10.0;

	cout << " Estructura anónima --> x: " << anonima.x << " anidad.g: " << anidada.g << endl;
}

#endif /* ESTRUCTURAS_H_ */
