#include<stdio.h>
#include<stdlib.h>
#include "biblio.h"

int main() {
	
	int v[] = {1, 6, 3, 2, 0, 8, 9};
	int len = sizeof(v)/sizeof(int), i;
	
	insertionSortDecrescente(v, len);
	
	for(i = 0; i < len; i++) {
		printf("%d ", v[i]);
	}
	
	return 0;
}
