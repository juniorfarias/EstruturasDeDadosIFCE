/*
3. Ler duas matrizes A e B, de duas dimensões, sendo a matriz A de 5X4 (5 linhas e 4 colunas)
e a matriz B de 4X3 (quatro linhas e três colunas). Apresentar a matriz C como resultado da
multiplicação das matrizes A e B. Condição para multiplicação: o número de colunas de A
tem que ser igual ao número de linhas de B.
*/
#include<stdio.h>
#include<stdlib.h>

int main() {
	int linhasA, linhasB, colunasA, colunasB, i, j, k1, k2;
	printf("Quantidade de linhas vetor A = ");
	scanf("%d", &linhasA);
	printf("Quantidade de colunas vetor A = ");
	scanf("%d", &colunasA);
	printf("Quantidade de linhas vetor B = ");
	scanf("%d", &linhasB);
	printf("Quantidade de colunas vetor B = ");
	scanf("%d", &colunasB);
	
	if(colunasA!=linhasB) {
		printf("Dimensoes das matrizes incorreta");
		return 0;
	}
	
	int A[linhasA][colunasA], B[linhasB][colunasB];
	
	printf(" Informe os valores da matriz A: \n\n");
	for(i = 0; i < linhasA; i++) {
		for(j = 0; j < colunasA; j++) {
			printf("A[%d][%d] = ", i+1, j+1);
			scanf("%d", &A[i][j]);
			printf("\n");		
		}
	}printf("\n ");
	
	printf("Informe os valores da matriz B: \n\n");
	for(i = 0; i < linhasB; i++) {
		for(j = 0; j < colunasB; j++) {
			printf("B[%d][%d] = ", i+1, j+1);
			scanf("%d", &B[i][j]);
			printf("\n");
		}
	}printf("\n");
	
	for(i = 0; i < linhasA; i++) {
		for(j = 0; j < colunasA; j++) {
			printf("%d\t", A[i][j]);
		}printf("\n");
	}
	printf("\n\n");
	
	for(i = 0; i < linhasB; i++) {
		for(j = 0; j < colunasB; j++) {
			printf("%d\t", B[i][j]);
		}printf("\n");
	}
	
	int C[linhasA][colunasB];
	
	for(k1 = 0; k1 < linhasA; k1++) {
		for(k2 = 0; k2 < colunasB; k2++) {
			int result = 0;
			for(i = 0; i<colunasB; i++){
				result = result + (A[k1][i] * B[i][k2]);
			}C[k1][k2] = result;
		}printf("\n");
	}
	
	for(i = 0; i < linhasA; i++) {
		for(j = 0; j < colunasB; j++) {
			printf("%d\t", C[i][j]);
		}printf("\n");
	}
	
	return 0;
	
}
