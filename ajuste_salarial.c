#include <stdio.h>

int main (){
      float salario, novo_salario;
      printf ("Digite o valor do salario: ");
      scanf ("%f", &salario);
 
      if (salario < 500) {
          novo_salario = salario * 1.15;
      }
      else {
             if (salario <= 1000) {
                  novo_salario = salario * 1.10; 
             }
             else {
                  novo_salario = salario * 1.05; 
             }        
      }
 
      printf ("\n Novo salario:%.2f", novo_salario);
      return 0;
}
