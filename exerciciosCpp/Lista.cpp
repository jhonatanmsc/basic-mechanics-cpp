/*
 * Lista.cpp
 *
 *  Created on: Jan 18, 2017
 *      Author: jhonatan
 */

#include "Lista.h"
#include <iostream>
Lista::Lista() {
	quant = 0;
}

int Lista::getQuant(){
	return Lista::quant;
}

bool Lista::adicionar(std::string n,std::string m, int i){
	if(Lista::getQuant()<10){
		Lista::list[Lista::getQuant()] = new Aluno(n,m, i);
		Lista::quant++;
		return true;
	}
	return false;
}

bool Lista::remover(int indice){
	if(indice < 10){
		int init = indice;
		int fim = 9;
		while(init < 10){
			if(Lista::list[init] != NULL){
				Lista::list[init] = Lista::list[init+1];
				Lista::list[init+1] = NULL;
				init++;
				Lista::quant--;
			}
			break;
		}
		return true;
	}
	return false;
}

void Lista::consultar(){
	std::cout << "---     lista     ---";
	for(int i=0;i<10;i++){
		if(Lista::list[i] != NULL){
			std::cout << "\nindice:  " << i << "\nNome: " << Lista::list[i]->getNome() << "\nMatricula: "<< Lista::list[i]->getMatricula() <<"\nIdade: "<< Lista::list[i]->getIdade() << "\n";
		}
	}

}

void Lista::editar(Aluno *aluno, int indice){
	Lista::list[indice] = aluno;
}

