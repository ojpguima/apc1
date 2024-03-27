//6. Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).

#include <stdio.h>
#include <math.h>

int main(){
  int a1;
  int b2;
  int c3;

  printf("insira o valor de a: ");
  int d = scanf("%d", &a1);
  printf("insira o valor de b: ");
  int e = scanf("%d", &b2);
  printf("insira o valor de c: ");
  int f = scanf("%d", &c3);
  
  double delta = pow(b2, 2) - 4;

  double raiz1 = (-b2 + sqrt(delta))/2*a1;
  double raiz2 = (-b2 - sqrt(delta))/2*a1;
  printf("As raizes da equacao sao: %f e %f", raiz1, raiz2);
  
  return 0;
}