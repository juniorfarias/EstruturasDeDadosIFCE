/*
Escreva uma função que decida se um vetor v[0..n-1] está em ordem crescente.  Depois, critique o código a seguir.
int verifica (int v[], int n) {
   int anterior = v[0], sim = 1;
   for (int i = 1; i < n && sim; ++i) {
      if (anterior > v[i]) sim = 0;
      anterior = v[i]; }
   return sim; }
*/
#include<stdio.h>  
#include<conio.h>

int isCrescente(int arr[], int len) {
	int anterior = arr[0];
	int sim = 1; 
	int i;
	
	for(i = 1; i < len; i++) {
		if((anterior > arr[i]) && sim){
			sim = 0;
			anterior = arr[i];
		}
	}
	return sim;
}

int main() {
	int vetor[] = {3,2,1};
	int len = sizeof(vetor)/sizeof(vetor[0]);
	
	int retorno = isCrescente(vetor, len);
	
	if(!retorno) {
		printf("Decressente");
	} else {
		printf("Crescente");
	}
	
	getch();
	return 0;
}
