#include <stdio.h>

int main() {
    const int TAM = 3;
    int matriz[TAM][TAM];
    int transposta[TAM][TAM];
    int i, j;

    
    printf("Digite os valores da matriz 3x3:\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Construção da matriz transposta
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            transposta[i][j] = matriz[j][i];
        }
    }

    // Exibição da matriz original
    printf("\nMatriz original:\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Exibição da matriz transposta
    printf("\nMatriz transposta:\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%d\t", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
