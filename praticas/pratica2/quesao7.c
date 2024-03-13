#include <stdio.h>

int main (){
  float hr_tr = 150.0f;
  float hr_total = 176.9f;
  float sal_bruto = hr_tr * hr_total;

  const float IR = 0.25 * sal_bruto;
  const float INSS = 0.11 * sal_bruto;
  
  printf("-------------------------\n");
  printf("\x1b[44m       CONTRACHEQUE      \x1b[0m\n");
  printf("-------------------------\n");
  printf("Categoria        Valor   \n");
  printf("Salario Bruto: %10.2f\n", sal_bruto);
  printf("IR: \x1b[31m%20.2f\x1b[0m\n", IR);
  printf("INSS: \x1b[31m%18.2f\x1b[0m\n", INSS);
  printf("Salario Liquido: %8.2f\n", sal_bruto - IR - INSS);
  
  return 0;
}