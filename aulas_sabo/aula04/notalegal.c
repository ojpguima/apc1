#include <stdio.h>

int main (){
  char nome[31];
  int qtd;
  float valor_produto;
  float valor = qtd*valor_produto;

  printf("digite o nome do produto; ");
  int deu_certo = scanf("%[^\n]s", nome);

  printf("digite a quantidade: ");
  deu_certo = scanf("%i", &qtd);

  printf("digite o valor: ");
  deu_certo = scanf("%f", &valor);

  printf("\x1b[34m--------------------------------------\n");
  printf("             NOTA LEGAL               \n");
  printf("--------------------------------------\x1b[0m\n");
  printf("Item                    Qtd      Valor\n");
  printf("\n");
  printf("%-23s %03i \x1b[31m%10.2f\x1b[0m\n" , nome , qtd, valor);

  return 0;
}