/*
 * Aluno.h
 *
 *  Created on: Jan 18, 2017
 *      Author: jhonatan
 */
#include <string>
#include <stdlib.h>

#ifndef ALUNO_H_
#define ALUNO_H_

class Aluno {
private:
	std::string nome;
	std::string matricula;
	int idade;

public:
	Aluno(std::string n,std::string m, int i);
	std::string getNome();
	std::string getMatricula();
	int getIdade();
	void setNome(std::string nome);
	void setMatricula(std::string matricula);
	void setIdade(int idade);
};

#endif /* ALUNO_H_ */
