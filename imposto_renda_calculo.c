#include <stdio.h>

int main() {
    float base, aliquota = 0.0, deducao = 0.0;

    // Entrada do valor da base de cálculo
    printf("Digite o valor da base de cálculo (R$): ");
    scanf("%f", &base);

    // Verifica a faixa e define alíquota e parcela a deduzir
    if (base <= 2112.00) {
        aliquota = 0.0;
        deducao = 0.0;
        printf("\nIsento de imposto.\n");
    }
    else if (base <= 2826.65) {
        aliquota = 7.5;
        deducao = 158.40;
    }
    else if (base <= 3751.05) {
        aliquota = 15.0;
        deducao = 370.40;
    }
    else if (base <= 4664.68) {
        aliquota = 22.5;
        deducao = 651.73;
    }
    else {
        aliquota = 27.5;
        deducao = 884.96;
    }

    // Exibe os resultados (se não for isento)
    if (aliquota > 0) {
        printf("\nAlíquota: %.1f%%\n", aliquota);
        printf("Parcela a deduzir: R$ %.2f\n", deducao);
    }

    return 0;
}
