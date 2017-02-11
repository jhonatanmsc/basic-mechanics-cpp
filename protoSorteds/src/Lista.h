#include <vector>
#include <iostream>
#include <string>
class No {
private:
	int codigo;
	std::string letra;

public:
	No(int c, std::string l){
		codigo = c;
		letra  = l;
	}
	int getCod();
	std::string getLetra();
};

int No::getCod(){
	return No::codigo;
}

std::string No::getLetra(){
	return No::letra;
}

class Lista {
private:
	std::vector<No> *l;
public:
	Lista(){
		l = new std::vector<No>();
	}
	std::vector<No> *getVector();
	void adicionar(No element);
	bool remove(int pos);
	void furaFila(int pos, No element);
	void mostrar();
};

std::vector<No> *Lista::getVector(){
	return Lista::l;
}

void Lista::adicionar(No element){
	Lista::l->push_back(element);
}

bool Lista::remove(int pos){
	if(pos > 0 && pos < Lista::l->size()){
		Lista::l->erase(Lista::l->begin()+(pos-1));
		return true;
	}
	return false;
}

void Lista::furaFila(int pos, No element){
	int cont = 0;
	for(std::vector<No>::iterator it = Lista::l->begin(); it<Lista::l->end();it++){
		if(cont == pos-1){
			Lista::l->insert(it, element);
			break;
		}
		cont++;
	}
}

void Lista::mostrar(){
	for(int i=0;i<Lista::l->size();i++){
		std::cout << Lista::l->at(i).getLetra() << " " << std::endl;
	}
}
