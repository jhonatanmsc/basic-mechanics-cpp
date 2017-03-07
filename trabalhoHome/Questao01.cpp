#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <string>

using namespace std;

class Vector{
	private:
		vector<int> vx;
		int quant;
	public:

	Vector(){
		quant = 0;
	}

	void adiciona(int quantidade){
	for(int i = 0; i<quantidade; i++){
			vx.push_back(rand() % 10001);
			quant++;
		}}

	void ordenar(){
		sort(vx.begin(), vx.end());
		}
};

class Deque{
	private:
		deque<int> dx;
		int quant;
	public:

	Deque(){
		quant = 0;
	}

	void adiciona(int quantidade){
	for(int i = 0; i<quantidade; i++){
			dx.push_back(rand() % 100001);
			quant++;
		}}

	void ordenar(){
		sort(dx.begin(), dx.end());
		}
};

class Lista{
	private:
		list<int> lx;
		int quant;
	public:

	Lista(){
		quant = 0;
	}

	void adiciona(int quantidade){
	for(int i = 0; i<quantidade; i++){
			lx.push_back(rand() % 10000001);
			quant++;
		}}

	void ordenar(){
		lx.sort();
	}
};

int main(){
	Vector v;
	Deque d;
	Lista l;
	int tempo, inicio;
	v.adiciona(100);
	d.adiciona(100);
	l.adiciona(100);
	inicio = clock();
	v.ordenar();
	tempo = clock() - inicio;
	cout<<"Vector: "<<tempo<<" Clocks."<<endl;
	inicio = clock();
	d.ordenar();
	tempo = clock() - inicio;
	cout<<"Deque: "<<tempo<<" Clocks."<<endl;
	inicio = clock();
	l.ordenar();
	tempo = clock() - inicio;
	cout<<"Lista: "<<tempo<<" Clocks."<<endl;
}
