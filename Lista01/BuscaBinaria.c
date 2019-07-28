#include<stdio.h>
#include<stdlib.h>
#include "biblio.h"

int main() {
	int vet[] = {3,5,7,9,13};
	int tamanho = sizeof(vet)/sizeof(int); // Poderia ser também sizeof(vet)/sizeof(vet[0]);
	
	printf("%d \n", buscabinaria(tamanho, vet, 3));
	
	return 0;
}
