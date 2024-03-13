#include <stdio.h>

int main () {
  printf("\x1b[34m--------------------------------------\n");
  printf("             NOTA LEGAL               \n");
  printf("--------------------------------------\x1b[0m\n");
  printf("Item                    Qtd      Valor\n");
  printf("\n");
  printf("%-23s %03i \x1b[31m%10.2f\x1b[0m\n" , "bananaa" , 2, 20.00);
  printf("%-23s %03i \x1b[31m%10.2f\x1b[0m\n" , "hamburguer" , 1, 15.00);
  
//  printf("bananaaa                 2       20.00\n");
//  printf("hamburguer               1       15.00\n");
  printf("--------------------------------------\n");
  printf("TOTAL                    3       %5.2f\n", 35.00);
  
  return 0;
}