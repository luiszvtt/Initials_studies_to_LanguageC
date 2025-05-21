#include <stdio.h>
int main() {
    int saque, saldo, res;
    printf("Digite o valor para saque: ");
    scanf("%d",&saque);//180
    res = saque / 50;//res=180/50=3 --> numero de cédulas de 50 necessárias
    saldo = saque % 50;//saldo=180%50=30
    printf("\nCédulas de 50 = %d",res);
   
    res = saldo / 20;//res = 30 / 20 = 1 --> numero de cédulas de 20 necessárias
    saldo = saldo % 20;//saldo= 30 %20 = 10
    printf("\nCédulas de 20 = %d",res);
   
    res = saldo / 10;//res = 10 /10 = 1 --> numero de cédulas de 10 necessárias
    printf("\nCédulas de 10 = %d",res);
  return 0;
}
