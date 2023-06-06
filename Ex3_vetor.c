#include <stdio.h>

/*Pedir ao usuário para digitar 5 notas e armazenar no vetor, calcular a média e mostrar o resultado*/

int main(void) {

  float notas[5] = {0};
  float total = 0;
  float media = 0;
  
  printf("Digite suas 5 notas:\n");

  for (int i = 0; i < 5; i++)
    scanf("%f",&notas[i]);
  

  //somas os valores e jogar na variável total
  for (int i = 0; i < 5; i++)
    total += notas[i];
  

  media = total/5;

  printf("\n\nA media é: %.2f", media);
  return 0;
}
