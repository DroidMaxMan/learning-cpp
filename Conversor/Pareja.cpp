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
 * Pareja.cpp
 *
 *  Author: @DroidMaxMan
 *
 *  Ejemplo de clases. Implementación de las clases
 */
#include "Pareja.h"

// Constructor parametrizado de Pareja
Pareja::Pareja(double a1, double b1) {
	a = a1;
	b = b1;
}

// Implementación de los métodos miembro de Pareja
double Pareja::getA() { return a; }
double Pareja::getB() { return b; }
void Pareja::setA(double a) { this->a = a; }
void Pareja::setB(double b) { this->b = b; }

// Implementación de los métodos miembro de la subclase Suma
double Suma::calcular() { return getA() + getB(); }
