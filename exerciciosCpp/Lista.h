/*
 * Lista.h
 *
 *  Created on: Jan 18, 2017
 *      Author: jhonatan
 */

#ifndef LISTA_H_
#define LISTA_H_

class Lista {
private:
	Aluno *list[10];
	int quant;
public:
	Lista();
	bool adicionar(std::string n,std::string m, int i);
	bool remover(int indice);
	void consultar();
	int getQuant();
	void editar(Aluno *aluno, int indice);
};

#endif /* LISTA_H_ */
