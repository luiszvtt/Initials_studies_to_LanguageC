#include <stdio.h>

int main() {
    int gols_brasil, gols_argentina;

    // Entrada de dados
    printf("Quantos gols o Brasil marcou? ");
    scanf("%d", &gols_brasil);

    printf("Quantos gols a Argentina marcou? ");
    scanf("%d", &gols_argentina);

    // Verificação do resultado da partida
    if (gols_brasil > gols_argentina) {
        printf("\nBrasil venceu por %d x %d!\n", gols_brasil, gols_argentina);
    }
    else if (gols_argentina > gols_brasil) {
        printf("\nArgentina venceu por %d x %d!\n", gols_argentina, gols_brasil);
    }
    else {
        printf("\nEmpate! Cada time marcou %d gols.\n", gols_brasil);
    }

    return 0;
}
