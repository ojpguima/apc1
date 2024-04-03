// 5. Faça um programa em C que leia o peso e a altura de uma pessoa e calcule o índice de massa corporal (imc = peso / altura²).

#include <stdio.h>
#include <math.h>

int main (){
  
  int peso;
  int altura;

  printf("Qual o peso do indivíduo?(em quilos) ");
  int oi = scanf("%i", &peso);
  printf("E qual a altura do indivíduo?(em centimetros) ");
  oi = scanf("%i", &altura);

  int imc = peso/pow(altura, 2);

  printf("O IMC do elemento eh %i\n", imc);
  

  return 0;
}