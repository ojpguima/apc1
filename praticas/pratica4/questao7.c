//8. Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).

#include <stdio.h>
#include <math.h>

int main (){

  int segundos;
  int min;
  int horas;
  

  printf("Insira a quantidade de segundos: ");
  int d = scanf("%i", &segundos);

  horas = segundos/pow(60,2);
  min = (segundos%3600)/60;
  segundos = (segundos%3600)/3600;

  printf("O tempo é %i horas, %i minutos e %i segundos", horas, min, segundos);
  
  return 0;
}