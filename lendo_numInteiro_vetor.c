#include <stdio.h>

int main() {
    int A[5], B[5];

    // Entrada dos valores no vetor A
    printf("Digite 5 números inteiros para o vetor A:\n");
    for (int i = 0; i < 5; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    // Construção do vetor B com os valores triplicados
    for (int i = 0; i < 5; i++) {
        B[i] = A[i] * 3;
    }

    // Saída dos valores do vetor B
    printf("\nVetor B (valores de A multiplicados por 3):\n");
    for (int i = 0; i < 5; i++) {
        printf("B[%d] = %d\n", i, B[i]);
    }

    return 0;
}
