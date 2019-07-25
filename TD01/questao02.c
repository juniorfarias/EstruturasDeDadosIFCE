//2. Elabore um algoritmo que armazene 30 valores inteiros num vetor; segundo a
//seguinte lei de formação: Se o índice do vetor for par, o valor digitado deverá ser
//multiplicado por 2, caso contrário por 5. A seguir efetue uma pesquisa binária no vetor.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main() {
    int v[30];

    for (int i = 0; i < 30; i++) {
        if(i%2==0) {
            v[i] = i * 2;
        } else {
            v[i] = i * 5;
        }
    }
    
    for (int i = 0; i < 30; i++) {
        printf("%d ", v[i]);
    }

    getch();

    return 0;
    
}