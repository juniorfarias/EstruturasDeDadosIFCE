//2. Elabore um algoritmo que armazene 30 valores inteiros num vetor; segundo a
//seguinte lei de forma��o: Se o �ndice do vetor for par, o valor digitado dever� ser
//multiplicado por 2, caso contr�rio por 5. A seguir efetue uma pesquisa bin�ria no vetor.
#include<stdio.h>
#include<stdlib.h>
#include "biblio.h"

int main() {
    int v[30];
	int i;
    int len = sizeof(v) / sizeof(v[0]);
	   
    populavetor(v, len);
    
	for(i = 0; i < (len - 1); i++){
		printf("%d ", v[i]);
	}printf("\n");
	
	insertionSort(v, len);
    
	for(i = 0; i < (len - 1); i++){
		printf("%d ", v[i]);
	}printf("\n");
   
    printf("%d \n", buscabinaria(len, v, 44));
    
    return 0;
}
