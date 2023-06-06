#include <stdio.h>

//Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua esta operação à variável PROD. A seguir mostre a variável PROD com mensagem correspondente.


int main(void) {

  int A,B,PROD;
  
  printf("Digite o valor de A: ");
  scanf("%d", &A);

  printf("Digite o valor de B: ");
  scanf("%d", &B);

  PROD = A * B;

  printf("\nPROD = %d", PROD);
  
  return 0;
}