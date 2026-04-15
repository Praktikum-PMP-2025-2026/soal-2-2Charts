#include <stdio.h>
#include <stdlib.h>

/**
 * NAMA: ARVIN FAUZAN BADRI
 * NIM:  13224072
 * SOAL 2
 */

int batu(int n) {
    if(n == 1) { // base case
        return 0;
    } 
    
    if (n % 2 == 0) { // genap
        n /= 2;
    }
    else { // ganjil
        n = 3*n + 1;
    }

    return 1 + batu(n);
}

int main(void) {
    int T, *n;
    scanf("%d", &T);

    n = malloc(sizeof(*n) * T);

    for(int i = 0; i < T; ++i) {
        scanf("%d", &n[i]);
    }

    for(int i = 0; i < T; ++i) {
        printf("LANGKAH %d\n", batu(n[i]));
    }

    return 0;
}
