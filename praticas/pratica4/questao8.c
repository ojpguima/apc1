//9. Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.

#include <stdio.h>
#include <math.h>

int main (){
  int anos;
  int meses;
  int dias;

  printf("Quantos anos tem Cleiton? ");
  int oi = scanf("%i", &anos);

  printf("Quantos meses tem Cleiton? ");
  oi = scanf("%i", &meses);
  printf("Quantos dias tem Cleiton? ");
  oi = scanf("%i", &dias);

  int idade_em_dias = anos*365 + meses*30 + dias;
  

  printf("Cleiton tem %i\n", idade_em_dias);
  
  return 0;
}