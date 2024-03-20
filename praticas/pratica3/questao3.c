// Faça um programa que calcule o perímetro de uma pizza (P=2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.
//
#include <stdio.h>

int main (){

  int raio;
  const float PI = 3.1416;

  printf("Digite o raio da pizza: ");
  int deu_certo = scanf("%i", &raio);

  float perimetro=2*PI*raio;

  printf("O perimetro da pizza é: %.2f\n", perimetro);
    
  return 0;
}