#include <stdio.h>
#include <math.h>

int main(){

  int base;
  int exp_pot;

  printf("Insira a base da potencia ");
  int deu = scanf("%i", &base);
  printf("Insira o expoente da potencia ");
  deu = scanf("%i", &exp_pot);

  double potencia=pow(base, exp_pot);
  printf("O resultado da potencia é %.2f\n", potencia);

  return 0;
}