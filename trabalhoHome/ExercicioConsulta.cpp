//============================================================================
// Name        : ExercicioOrdenacao.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

bool sequetialSearch(int *lista, int index) {
	for (int n = 0; n < sizeof(lista); ++n) {
		if(lista[index] == lista[n]) {
			return true;
		}
	}
	return false;
}

bool binarySearch(int *lista, int index) {
	//primeiro criamos variaveis que representam o inicio, meio e fim do vetor
	int ini=0, midle=sizeof(lista)/2, end = sizeof(lista)-1;

	do {
		if(lista[index] == lista[midle]) {//depois verificamos se a variavel de indice "index" e igual ao meio
			return true;
		}else if(lista[index] < lista[midle]){//senao se for menor ele decrementa o indice do meio
			midle--;
		}else if(lista[index] > lista[midle]) {//senao se for maior ele incrementa o meio
			ini = midle;
			midle++;
		}
	}while(midle != ini);

	return false;
}

int main() {
	int lista[] = {1,2,3,4,5,6,7,8,9,10};

	int tempIni01, tempFim01, tempIni02, tempFim02;

	//calculando o tempo gasto pela busca sequencial
	tempIni01 = clock();
	sequetialSearch(lista, 8);//busca sequencial
	tempFim01 = clock();

	//calculando o tempo gasto pela busca binaria
	tempIni02 = clock();
	binarySearch(lista, 8);//busca binaria
	tempFim02 = clock();

	cout << "Tempo gasto com a busca sequecial: " << (tempFim01 - tempIni01) << endl;
	cout << "Tempo gasto com a busca binaria: " << (tempFim02 - tempIni02) << endl;

	return 0;
}
