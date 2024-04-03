// 4. Faça um programa em C que leia a largura e o comprimento de um terreno em metros e calcule a sua área em hectares (1 hectare = 10.000 m²).

#include <stdio.h>
#include <math.h>

int main(){
  float largura;
  float comprim;

  printf("Insira a largura ");
  int oi = scanf("%f", &largura);
  printf("Insira o comprimento ");
  oi = scanf("%f", &comprim);

  float perim = largura * comprim;
  float hectare = perim/pow(10000, 2);

  printf("A área do terreno é %.2f hectare m2 \n", hectare);
  

  return 0;
}