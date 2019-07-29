#include<stdio.h>

int main() {
	
	int N, i, posicao, menor;
	
	scanf("%d",&N);
	int X[N];
	
	scanf("%d",&X[0]);
	menor = X[0];
	posicao = 0;
	
	for(i = 1; i < N; i++) {
		scanf("%d", &X[i]);
		
		if(X[i]<menor) {
			menor = X[i];
			posicao = i;
		}
	}	
	
	printf("Menor valor: %d\n", X[posicao]);
	printf("Posicao: %d\n", posicao);
	
	return 0;
}
