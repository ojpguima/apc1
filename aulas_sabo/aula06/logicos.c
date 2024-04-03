#include <stdio.h>

int main (){
  
  int numero1;
  int numero2;

  printf("Entre com o primeiro numero: ");
  int deu_certo = scanf("%i", &numero1);

  int maior_q_0_menor_q_10 = numero1 > 0 && numero1 < 10;
  printf("O 1o numero eh maior que 0 e menor que 10? %i\n", maior_q_0_menor_q_10);

  // x<0, X>10 -> x < 0 ou x > 10

  int menor_q_0_ou_maior_que_10=numero1 < 0 || numero1 > 10;
  printf("O numero eh menor que 0 ou maior que 10? %i\n", menor_q_0_ou_maior_que_10);

  // X nao > 0

  int n_maior_q_0 = !(numero1 > 0); //numero < 0

  printf ("O numero nao eh maior que 0? %i\n", n_maior_q_0);

  return 0;
}