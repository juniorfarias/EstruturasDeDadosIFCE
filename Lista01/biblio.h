int buscabinaria(int tamanho, int* v, int numerobuscado) {
	int inicio = 0;
	int final = tamanho - 1;
	int meio;
	
	while(inicio <= final){
		
		meio = (inicio + final)/2;
		
		if(numerobuscado < v[meio]){
			final = meio - 1;	
		} else if(numerobuscado > v[meio]){
			inicio = meio + 1;
		} else {
			return meio;
		}
		
	}return -1;
}

void insertionSort(int* v, int tamanho) {
	int chave, i, j;
    
    for (j = 1; j < tamanho; j++) {
        chave = v[j];
        i = j - 1;

        while(i>=0 && v[i] > chave) {
            v[i + 1] = v[i];
            i = i - 1;
        }
        v[i + 1] = chave;
    }
}

void populavetor(int* v, int tamanho) {
	int i;
	for(i = 0; i < tamanho; i++) {
        if(i%2==0) {
            v[i] = i * 2;
        } else {
            v[i] = i * 5;
        }
	}
}
