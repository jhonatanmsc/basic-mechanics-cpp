//============================================================================
// Name        : protoSorteds.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <stdio.h>
#include <iostream>
#include "Lista.h"
using namespace std;

int main() {
	int num;
	Lista *lista = new Lista();
	No *no01 = new No(0, "O");
	No *no02 = new No(1, "I");
	No *no03 = new No(2, "A");
	No *no04 = new No(3, "M");
	No *no05 = new No(4, "R");

	lista->adicionar(*no04);
	lista->adicionar(*no03);
	lista->adicionar(*no02);
	lista->adicionar(*no01);
	//insere um elemento na posicao 3
	lista->furaFila(3, *no05);
	lista->mostrar();
	cout << endl;
	//remove o elemento na posicao 3
	lista->remove(3);
	lista->mostrar();

	return 0;
}
