#include <stdio.h>
#include <math.h>

int main (){

  int numero1;
  int numero2;

  printf("Entre com o primeiro número: ");
  int deu = scanf("%i", &numero1);

  printf("Entre com o segundo número: ");
  deu = scanf("%i", &numero2);

  int soma = numero1 + numero2;
  printf("A soma dos números é: %i\n", soma);
  int sub = numero1 - numero2;
  printf("A subtração dos números é: %i\n", sub);
  int mult = numero1 * numero2;
  printf("A multiplicação dos números é: %i\n", mult);
  float div = numero1 / (numero2*1.0f);
  printf("A divisao dos números é: %.2f\n", div);

  int resto = numero1%numero2;
  printf("O resto da divisao dos números é: %.2i\n", resto);

  printf("O incremento do primeiro numero é %i\n", numero1++);
  printf("O incremento do primeiro numero é %i\n", ++numero1);

  printf("O incremento do primeiro numero é %i\n", numero1--);
  printf("O incremento do primeiro numero é %i\n", --numero1);

  double raiz=sqrt(numero1);
  printf("A raiz quadrada do bglh é %.3f\n", raiz);

  double potencia = pow(numero1,4);
  printf("A quarta potencia do bglh é %f\n", potencia);

  double logaritmo2 = log2(numero1);
  printf("ao logaritmo do primeiro número na base 2 é %.3f\n", logaritmo2);

  const double PI=3.1416;
  double seno=sin(numero1*(PI/180));
  printf("O seno do primeiro bglh é %.3f\n", seno);
  
  
  return 0;
}