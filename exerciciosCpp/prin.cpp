/*
 * prin.cpp
 *
 *  Created on: Jan 18, 2017
 *      Author: jhonatan
 */
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "Aluno.cpp"
#include "Lista.cpp"

using namespace std;
int main(){
	string nome, matricula;
	int op=0, idade, lol;
	Lista *lista = new Lista();

	do{
		string menu = "\n---     Menu     ---\n 1	- adicionar aluno\n 2	- tirar aluno\n 3	- mostrar alunos\n 4	- alterar aluno\n 0	- Sair\n Qual a opcao desejada: ";
		cout << menu;
		cin >> op;

		switch(op){
		case 1:
			fflush(stdin);
			cout << "Informe o nome: ";
			cin >> nome;
			cout <<"Informe a matricula: ";
			cin >> matricula;
			cout << "Informe a idade: ";
			cin >> idade;
			if(lista->adicionar(nome, matricula, idade)){
				printf("Aluno inserido com sucesso!\n");
			}else{
				printf("Refatore seus parametros!\n");
			}
			break;
		case 2:
			fflush(stdin);
			lista->consultar();
			cout << "Digite o indice do objeto que quer editar: ";
			cin >> lol;
			lista->remover(lol);
			break;
		case 3:
			fflush(stdin);
			lista->consultar();
			break;
		case 4:
			fflush(stdin);
			lista->consultar();
			cout << "Informe o indice do elemento que quer editar: ";
			cin >> lol;
			cout << "Informe o nome: ";
			cin >> nome;
			cout <<"Informe a matricula: ";
			cin >> matricula;
			cout << "Informe a idade: ";
			cin >> idade;
			lista->editar(new Aluno(nome, matricula, idade), lol);
			break;
		case 0:
			fflush(stdin);
			cout << "Obrigado por usar esta gambiarra : )\n";
			break;
		default:
			fflush(stdin);
			cout << "Refatore seus parametros!\n";
			break;
		}
	}while(op != 0);
}

