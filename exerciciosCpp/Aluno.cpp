/*
 * Aluno.cpp
 *
 *  Created on: Jan 18, 2017
 *      Author: jhonatan
 */
#include <string>
#include "Aluno.h"

Aluno::Aluno(std::string n,std::string m, int i){
	Aluno::nome = n;
	Aluno::matricula = m;
	Aluno::idade =i;
}

std::string Aluno::getNome(){
	return Aluno::nome;
}

std::string Aluno::getMatricula(){
	return Aluno::matricula;
}

int Aluno::getIdade(){
	return Aluno::idade;
}

void Aluno::setNome(std::string nome){
	Aluno::nome = nome;
}

void Aluno::setMatricula(std::string matricula){
	Aluno::matricula = matricula;
}

void Aluno::setIdade(int idade){
	Aluno::idade = idade;
}
