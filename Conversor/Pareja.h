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

#ifndef PAREJA_H_
#define PAREJA_H_

class Pareja
{
	// Atributos miembro. Son privados por defecto. Colocar private: es redundante pero mejora la legibilidad
private:
	double a, b;

public:
	// Constructor
	Pareja();

	// Constructor parametrizado. Se implementa en Pareja.cpp
	Pareja(double a, double b);

	// Prototipado de los métodos miembro. Se implementaran a continuación en Pareja.cpp
	double getA();
	double getB();
	void setA(double a);
	void setB(double b);
};

/*
 * Clase derivada de Pareja
 */
class Suma : public Pareja
{

public:

	// Constructor parametrizado
	Suma(double a, double b) : Pareja(a, b) { }

	// métodos de Suma
	double calcular();

};

#endif /* PAREJA_H_ */
