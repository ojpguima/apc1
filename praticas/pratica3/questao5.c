//3. Faça um programa em C que leia uma temperatura em graus Celsius e calcule o valor correspondente em graus Fahrenheit (°F = 9/5°C + 32).
//

#include <stdio.h>

int main(){

  int temperatura;

  printf("Quantos graus estao fazendo?");
  int deu_certo = scanf("%i", &temperatura);

  int graus = temperatura*1.8+32;

  printf("Fazem em fahrenheit: ""%i\n", graus);

  return 0;
}