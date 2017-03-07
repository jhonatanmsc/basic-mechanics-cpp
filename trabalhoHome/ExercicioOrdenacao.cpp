
#include <iostream>
using namespace std;

void bubble(int* vetor){
	int troca;
	int aux;
	int tamanho = 10;
	do{
		for(int i = 0; i < tamanho-1; ++i){
			if(vetor[i] > vetor[i+1]) {
				aux = vetor[i];
				vetor[i] = vetor[i+1];
				vetor[i+1] = aux;
			}
		}
		--tamanho;
	}while(tamanho > 1);
};

void quick(int* vetor, int esq=0, int dir=0) {
	int pivo = esq, i,ch,j;         //Declaração das variavés e inicialização do pivo com o primeiro algarismo da sequencia
	for(i=esq+1;i<=dir;i++){
		j = i;
		if(vetor[j] < vetor[pivo]){     //verifica se o vetor da posição pivo é maior que de outra posição
		 ch = vetor[j];               //ch recebe o valor que é menor
		 while(j > pivo){           //repete enquanto o j que é a posição do algarismo menor que o pivo ficar na posição 0
			vetor[j] = vetor[j-1];      //reorganiza a posição de vetores
			j--;                    //decremento para a organização
		 }
		 vetor[j] = ch;               // atribuição da variavel menor que o pivo na posição inicial
		 pivo++;                    // aumenta a posição do pivo em uma unidade
		}
	}
	if(pivo-1 >= esq){              // verifica se o valor do pivo é maior que o final do vetor.
		quick(vetor,esq,pivo-1);
	}
	if(pivo+1 <= dir){              //verifica se o valor do pivo é menor, indicando que ainda estar dentro das limitações do vetor
		quick(vetor,pivo+1,dir);      //chama a função para escutar novamente
	}
};

int main() {
	int tempIni01, tempIni02, tempFim01, tempFim02;

	int numerosA[] = {5,4,3,1,2,6,8,7,10,9};
	tempIni01 = clock();
	bubble(numerosA);//      metodo de ordenacao Bolha
	tempFim01 = clock();

	int numerosB[] = {5,4,3,1,2,6,8,7,10,9};
	tempIni02 = clock();
	quick(numerosB,0,10);//  metodo de ordenacao Quick
	tempFim02 = clock();

	cout << "Tempo gasto com o metodo de ordenacao bubble: " << (tempFim01 - tempIni01) << endl;
	cout << "Tempo gasto com o metodo de ordenacao quick: " << (tempFim02 - tempIni02) << endl;

	return 0;
}

