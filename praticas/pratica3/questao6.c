//5. Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).
//

#include <stdio.h>

int main (){
  int giga;
  
  printf("Insira a quantidade em gigabytes: ");
  int deu_certo = scanf("%i", &giga);

  int bytes=giga*1024*1024*1024;

  printf("Em bytes sao: %i\n", bytes);

  return 0;
}