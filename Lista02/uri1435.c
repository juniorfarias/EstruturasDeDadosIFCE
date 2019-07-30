#include<stdio.h>

int main() {
	
	int i, j, k, o, n;
	
	
	for(;;) {
		scanf("%d",&n);
		if(n == 0)break;
		
		int m[n][n];
		
		for(i = 0; i < n; i++) {
			for(j = 0; j < n; j++) {
				m[i][j] = 0;
			}
		}
		
		o = 0;
		
		for(k = 0; k < n; k+=2){
			for(i = 0; i < n-k; i++) {
				for(j = 0; j < n-k; j++) {
					m[i+o][j+o] += 1;
				}
			}
			o++;
		}
		
		for(i = 0; i < n; i++) {
			for(j = 0; j < n; j++) {
				if(j == 0) printf("%3d",m[i][j]);
				else printf(" %3d",m[i][j]);
			}
			printf("\n");
		}printf("\n");
	}
	
	return 0;
}
