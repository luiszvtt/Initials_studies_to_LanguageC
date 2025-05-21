//automóvel faz 12km/l
//tempo gasto em horas na viagem = 10
//velocidade média durante a viagem = 85km/h

#include <stdio.h>

int main(){
    int litos_por_km = 12;
    int tempo = 10;
    int velocidade_media = 85;
    float litros_necessarios;

    litros_necessarios = (float)(velocidade_media * tempo) / litos_por_km;

    printf("Litros necessários: %.3f\n", litros_necessarios);

    return 0;
}
