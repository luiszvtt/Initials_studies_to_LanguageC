#include <stdio.h>

// Função que retorna 1 se o número for par, 0 se for ímpar
int ehPar(int numero) {
    return numero % 2 == 0;
}

int main() {
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    if (ehPar(n)) {
        printf("O número %d é par.\n", n);
    } else {
        printf("O número %d é ímpar.\n", n);
    }

    return 0;
}
