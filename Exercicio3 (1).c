#include <stdio.h>

int main(void) {

  int idade;
  
  printf("Digite sua idade: ");
  scanf("%i", &idade);

  if (idade < 30){
    printf("\nVocê é muito jovem =)");
  }
  return 0;
}