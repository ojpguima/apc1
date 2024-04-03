//1. Faça um programa em C que leia três números reais e imprima a média aritmética desses números.

#include <stdio.h>

int main (){
  float n1;
  float n2;
  float n3;

  printf ("Insira o 1o numero para fazer a média ");
  int oi = scanf("%f", &n1);
  printf ("Insira o 2o numero para fazer a média ");
  oi = scanf("%f", &n2);
  printf ("Insira o 3o numero para fazer a média ");
  oi = scanf("%f", &n3);

  double media = (n1+n2+n3)/3;

  printf ("A média dos 3 numeros é %.1f\n", media);
  

  return 0;
}