//6. Faça um programa em C que leia o valor de compra, o ano de fabricação e o ano de depreciação e calcule o valor depreciado de um veículo (depreciação = (ano de depreciação - ano de fabricação) x 0,01 x valor de compra).
//

#include <stdio.h>

int main(){
  float valor_carro;
  int ano_fab;
  int ano_dep;
  
  printf("Insira o valor do carro: ");
  int deu_certo = scanf("%f", &valor_carro);

  printf("Agora insira o ano de fabricação dele: ");
  deu_certo = scanf("%i", &ano_fab);

  printf("Agora insira o ano de depreciação dele: ");
  deu_certo = scanf("%i", &ano_dep);

  float dep = ano_dep-ano_fab*0.01*valor_carro;

  printf("O valor final do carro é: %f\n", dep);
  

  return 0;
}