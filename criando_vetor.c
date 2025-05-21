#include <stdio.h>

int main() {
    int A[11] = {1, 3, 4, 2, 5, 8, 7, 6, 9, 12, 15};
    int B[11];

    // Construção do vetor B conforme a regra
    for (int i = 0; i < 11; i++) {
        if (A[i] % 2 != 0) { // número ímpar
            B[i] = A[i] * 2;
        } else {
            B[i] = A[i];
        }
    }

    // Impressão dos vetores A e B
    printf("Vetor A: ");
    for (int i = 0; i < 11; i++) {
        printf("%d ", A[i]);
    }

    printf("\nVetor B: ");
    for (int i = 0; i < 11; i++) {
        printf("%d ", B[i]);
    }

    printf("\n");

    return 0;
}
