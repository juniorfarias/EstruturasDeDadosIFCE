#include<stdio.h>

int main() {
	long long int fib[61], i;
	int T, N;
	
	fib[0] = 0;
	fib[1] = 1;
	
	scanf("%d",&T);
	
	for(i = 2; i <= 60; i++) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	
	while(T!=0) {
		scanf("%d",&N);
		printf("Fib(%d) = %llu\n", N, fib[N]);
		T = T - 1; 
	}
	
	return 0;	
}
