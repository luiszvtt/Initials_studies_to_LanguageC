#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char texto[31];  // Vetor para armazenar a string (30 + 1 para '\0')
    int i, tamanho = 0, vogais = 0, consoantes = 0;

    
    printf("Digite uma string de até 30 caracteres: ");
    fgets(texto, sizeof(texto), stdin);  // Lê a string (aceita espaços)

    // Remove o '\n' que o fgets pode capturar
    texto[strcspn(texto, "\n")] = '\0';

    
    tamanho = strlen(texto);
    for (i = 0; i < tamanho; i++) {
        char c = tolower(texto[i]);  // Converte para minúscula para facilitar a comparação

        if (isalpha(c)) {  // Verifica se é letra
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vogais++;
            } else {
                consoantes++;
            }
        }
    }

    // Resultados
    printf("\nString digitada: %s", texto);
    printf("\nQuantidade de caracteres: %d", tamanho);
    printf("\nQuantidade de vogais: %d", vogais);
    printf("\nQuantidade de consoantes: %d\n", consoantes);

    return 0;
}
