#include<stdio.h>
#include<conio.h>

int main() {

    int a[] = {5, 2, 4, 6, 1, 3};
    int chave, i, j;
    int len = sizeof(a) / sizeof(a[0]);
    
    for (j = 1; j < len; j++) {
        chave = a[j];
        i = j - 1;

        while(i>=0 && a[i] > chave) {
            a[i + 1] = a[i];
            i = i - 1;
            a[i + 1] = chave;
        }

    }

    for (i = 0; i < len; i++) {
        printf("%d ", a[i]);
    }
    
    
    getch();
    return 0;
}
