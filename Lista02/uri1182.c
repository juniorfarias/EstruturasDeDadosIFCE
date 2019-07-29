#include<stdio.h>

int main() {
	
	int num, i, j;
	char op[5];
	
	double M[12][12]; 
	double soma = 0.0;
	
	scanf("%d", &num);
	
	scanf("%s", &op);
	
	for(i = 0; i < 12; i++) {
		for(j = 0; j < 12; j++) {
			scanf("%lf",&M[i][j]);
		}
	}
	
	for(i = 0; i < 12; i++) {
		soma += M[i][num];
	}
	
	if(op[0] == 'M') {
		soma = soma / 12;
	}
	printf("%.1lf\n", soma);
	
	return 0;
}
