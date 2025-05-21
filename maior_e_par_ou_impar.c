#include <stdio.h>

int main() {
    int num1, num2, num3, maior;

    // Entrada dos 3 números
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    // Descobrindo o maior número usando operador ternário
    maior = (num1 > num2) ? num1 : num2;
    maior = (maior > num3) ? maior : num3;

    // Mostrando o maior número
    printf("\nO maior número é: %d\n", maior);

    // Verificando se é par ou ímpar
    printf("Ele é %s.\n", (maior % 2 == 0) ? "PAR" : "ÍMPAR");

    return 0;
}
