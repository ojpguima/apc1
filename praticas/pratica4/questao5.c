//5. Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).

#include <stdio.h>
#include <math.h>

int main (){

  float giga;
  printf("Insira a quantidade de gigas ");
  int d = scanf("%f", &giga);

  double bytes = giga*pow(1024, 3);
  printf("Em bytes sao: %f\n", bytes);

  return 0;
}