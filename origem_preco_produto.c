#include <stdio.h>  

int main () {
    int codigo;      
    float preco;     

    
    printf ("Digite o codigo: ");
    scanf ("%d", &codigo);   

    // Solicita o preço do produto
    printf ("Digite o preco: ");
    scanf ("%f", &preco);    

    // Utiliza switch para identificar a procedência com base no código
    switch (codigo) {

        // Se o código for 1
        case 1:
            printf ("\nProcedencia Sul - Preco: %.2f\n", preco);
            break;

        // Se o código for 2
        case 2:
            printf ("\nProcedencia Norte - Preco: %.2f\n", preco);
            break;

        // Se o código for 3
        case 3:
            printf ("\nProcedencia Leste - Preco: %.2f\n", preco);
            break;

        // Se o código for 4
        case 4:
            printf ("\nProcedencia Oeste - Preco: %.2f\n", preco);
            break;

        // Se o código for 5 ou 6 
        case 5:
        case 6:
            printf ("\nProcedencia Nordeste - Preco: %.2f\n", preco);
            break;

        // Se o código for 7, 8 ou 9
        case 7:
        case 8:
        case 9:
            printf ("\nProcedencia Sudeste - Preco: %.2f\n", preco);
            break;

        // Se o código for 10
        case 10:
            printf ("\nProcedencia Centro-Oeste - Preco: %.2f\n", preco);
            break;

        // Caso nenhum dos códigos anteriores seja correspondente
        default:
            printf ("\nCodigo nao encontrado!\n");
    }

    return 0; 
}
