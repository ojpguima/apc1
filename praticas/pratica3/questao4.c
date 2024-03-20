#include <stdio.h>

int main (){
  int base;
  int altura;

  printf("insira a base: ");
  int deu_certo = scanf("%i", &base);

  printf("insira a altura: ");
  int deu = scanf("%i", &altura);

  int area = base*altura/2;

  printf("A area do triangulo é: " "%i\n", area);
  

  return 0;
}