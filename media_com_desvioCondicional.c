#include <stdio.h>    
#include <stdlib.h>   // Lib para funções como system()

int main() {
    float n1, n2, media;  

    
    printf("Digite sua primeira nota: ");
    scanf("%f", &n1);     
    system("clear");      // Limpa a tela 

    // Solicita a segunda nota ao usuário
    printf("Digite sua segunda nota: ");
    scanf("%f", &n2);     
    system("clear");      // Limpa a tela novamente

    
    media = (n1 + n2) / 2;

    // Verifica se a média é maior ou igual a 6 = Aprovado
    if (media >= 6) {
        printf("\n***Você tirou %.1f, parabéns, você foi APROVADO :)***", media);
    }

    // Se não foi aprovado, verifica se está entre 4.5 e menor que 6 = Recuperação
    else if (media >= 4.5 && media < 6) {
        printf("\n***Você tirou %.1f, foi quase, você está de RECUPERAÇÃO***", media);
    }

    // Se não foi aprovado nem em recuperação = Reprovado
    else {
        printf("\n***Você tirou %.1f, infelizmente você REPROVOU***", media);
    }

    return 0;
}
