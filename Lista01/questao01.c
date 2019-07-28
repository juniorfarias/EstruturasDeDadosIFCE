//1. Suponha que existam 02 vetores A e B do tipo inteiro com 25 elementos 
//inteiros cada. Elabore um algoritmo que construa um vetor C a partir da 
//junção de A e B. A seguir efetue uma pesquisa sequencial no vetor no vetor C.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main() {
    int A[25];
    int B[25];

    for (int i = 0; i < 25; i++) {
        A[i] = rand() % 100;
    }
    
    for (int i = 0; i < 25; i++) {
        printf("%d, ", A[i]);
    }
    
    printf("\n");

    for (int i = 0; i < 25; i++) {
        B[i] = rand() % 100;
    }
    
    for (int i = 0; i < 25; i++) {
        printf("%d, ", B[i]);
    }
    
    printf("\n");
    
    int C[50];

    for (int i = 0; i < 25; i++) {
        C[i] = A[i];
        C[i + 25] = B[i];
    }
    
    for (int i = 0; i < 50; i++) {
        printf("%d, ", C[i]);
    }

    getch();
    return 0;
}