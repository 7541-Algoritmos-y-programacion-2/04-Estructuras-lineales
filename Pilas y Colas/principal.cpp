/*
 * principal.cpp
 *
 *  Created on: 09/09/2021
 *      Author: algo2
 */


#include <iostream>

#include "Cola.h"
#include "Pila.h"

int main(int &argc, char **argv) {
	Cola<int> * cola = new Cola<int>();
	cola->acolar(1);
	cola->acolar(2);
	cola->acolar(3);

	while (!cola->estaVacia()) {
		cola->desacolar();
	}
	delete cola;

	Pila<int> * pila = new Pila<int>();
	pila->apilar(1);
	pila->apilar(2);
	pila->apilar(3);

	while (!pila->estaVacia()) {
		pila->desapilar();
	}
	delete pila;
}
