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
 * Pareja.hpp
 *
 *  Author: @alxgcrz
 *
 *  Ejemplo de clases. En este fichero llamada header o fichero de encabezamiento
 *  se define el interfaz.
 */
/**----- Directivas de pre-procesador #define, #include, etc... -----*/
#ifndef PAREJA_H_
#define PAREJA_H_

/*
 * CLASES --> http://c.conclase.net/curso/index.php?cap=028#inicio
 *
 * class <identificador de clase> [<:lista de clases base>] {
 *   <lista de miembros>
 * } [<lista de identificadores de objetos>];
 */

/**----- Declaraciones de clases -----*/
class Pareja
{
	// Atributos miembro. Son privados por defecto. Colocar private: es redundante pero mejora la legibilidad
	// Es necesario inicializarlos porque no se inicializan de forma automática
private:
	double a, b;

public:
	// Constructor --> http://c.conclase.net/curso/index.php?cap=029#inicio
	Pareja();

	// Constructor parametrizado. Se implementa en Pareja.cpp
	// Es recomendable usar la forma siguiente. Dejamos la otra forma para ilustrar otra forma de hacerse
	// Pareja(double a1, double b1) : a(a1), b(b1) {}
	Pareja(double a, double b);

	/* Constructor que inicializa los datos miembro. Es recomendable usar esta forma para inicializar
	 * de forma automática. --> http://c.conclase.net/curso/index.php?cap=029#P29_INICIAL
	 *
	 * Como ejemplo también se ilustra que es posible usar parámetros por defecto en los constructores
	 */
	Pareja(int a1, int b1=0) : a(a1), b(b1) {}

	/*
	 * Constructor COPIA --> cout << " p1 --> "; p1.imprime();
	 * tipo_clase::tipo_clase(const tipo_clase &obj);
	 */
	Pareja(const Pareja &p);

	/*
	 * Destructor --> http://c.conclase.net/curso/index.php?cap=030#inicio
	 */
	~Pareja();

	// Prototipado de los métodos miembro. Se implementaran a continuación en Pareja.cpp
	double getA();
	double getB();
	void setA(double a);
	void setB(double b);
	void Lee(double &, double &);
	void imprime();

	/*
	 * Uso de THIS --> http://c.conclase.net/curso/index.php?cap=031#inicio
	 */
	void increment(double a = 0) {
		// Uso this para invocar al dato miembro del objeto. This->a es el dato miembro y a es el parámetro
		this->a += a;
	}
};

/*
 * Derivación (HERENCIA) de clases --> http://c.conclase.net/curso/index.php?cap=036#038_sintaxis
 *
 * class <clase_derivada> :
 *  [public|private] <base1> [,[public|private] <base2>] {};
 *
 */
class Suma : public Pareja
{
private:
	double c;

public:
	// Constructor base
	Suma() : Pareja(0, 0), c(0) {}

	// Constructor parametrizado. Inicializamos Suma llamando al constructor de la clase base Pareja y al dato miembro propio
	Suma(double a, double b, double c) : Pareja(a, b), c(c) { }

	// Destructor
	~Suma() {}

	// métodos de Suma
	double calcular();

	// Esta función "emmascara" la función imprime de la clase base
	void imprime();

};

#endif /* PAREJA_H_ */
