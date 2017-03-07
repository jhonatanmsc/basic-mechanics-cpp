
#include <iostream>

using namespace std;

bool sequetialSearch(int *lista, int index) {
	for (int n = 0; n < 1000000; ++n) {
		if(lista[index] == lista[n]) {
			return true;
		}
	}
	return false;
}

bool binarySearch(int *lista, int index) {
	//primeiro criamos variaveis que representam o inicio, meio e fim do vetor
	int ini=0, midle=1000000/2;

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
	int tamanho = 1000000;
	int lista[tamanho];

	for(int i=0;i<tamanho;i++) {
		lista[i] = i;
	}

	int tempIni01, tempFim01, tempIni02, tempFim02;

	//calculando o tempo gasto pela busca sequencial
	tempIni01 = clock(); //<- tempo medido em clock
	sequetialSearch(lista, 8);//busca sequencial
	tempFim01 = clock();

	//calculando o tempo gasto pela busca binaria
	tempIni02 = clock(); //<- tempo medido em clock
	binarySearch(lista, 8);//busca binaria
	tempFim02 = clock();

	cout << "Ciclos gastos com a busca sequecial: " << (tempFim01 - tempIni01) << endl;
	cout << "Ciclos gastos com a busca binaria: " << (tempFim02 - tempIni02) << endl;

	return 0;

}
