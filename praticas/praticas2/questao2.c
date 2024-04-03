// 2. Faça um programa em C que leia dois números inteiros e imprima o quociente e o resto da divisão entre eles.

#include <stdio.h>

int main (){
  int n1;
  int n2;

  printf("Insira o 1o numero ");
  int oi = scanf("%i", &n1);
  printf("Insira o 2o numero ");
  oi = scanf("%i", &n2);

  int quo = n1/n2;
  int resto = n1%n2;

  printf("O quociente da operação eh %.1i\n", quo);
  printf("O resto da operação eh %.1i\n", resto);

  
  return 0;
}