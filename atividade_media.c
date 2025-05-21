#include <stdio.h>

int main() {
    float nota1, nota2, media;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    media = (nota1 + nota2) / 2;

    // Expressão (media >= 6) retorna 1 se verdadeiro, 0 se falso
    printf("%d\n", media >= 6);

    return 0;
}
