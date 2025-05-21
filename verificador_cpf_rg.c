#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função para verificar se a string tem apenas dígitos
int apenas_digitos(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i]))
            return 0; // falso
    }
    return 1; // verdadeiro
}

int main() {
    char cpf[20], rg[20];

    // Entrada do CPF
    printf("Digite o CPF (somente números): ");
    scanf("%s", cpf);

    // Validação do CPF
    if (strlen(cpf) == 11 && apenas_digitos(cpf)) {
        printf("CPF válido!\n");
    } else {
        printf("CPF inválido! Deve conter exatamente 11 dígitos numéricos.\n");
    }

    // Entrada do RG
    printf("Digite o RG (somente números): ");
    scanf("%s", rg);

    // Validação do RG
    if (strlen(rg) == 9 && apenas_digitos(rg)) {
        printf("RG válido!\n");
    } else {
        printf("RG inválido! Deve conter exatamente 9 dígitos numéricos.\n");
    }

    return 0;
}
