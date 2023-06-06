#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Função que calcula a média de 5 notas

int main(void) {

  float n1, n2, n3, n4, n5, media;
  
  printf("Digite a primeira nota: ");
  scanf("%f",&n1);

  printf("Digite a segunda nota: ");
  scanf("%f",&n2);

  printf("Digite a terceira nota: ");
  scanf("%f",&n3);

  printf("Digite a quarta nota: ");
  scanf("%f",&n4);

  printf("Digite a quinta nota: ");
  scanf("%f",&n5);

  media = (n1+n2+n3+n4+n5)/5;

  printf("A sua média final é: %.2f", media);

  
  return 0;
}