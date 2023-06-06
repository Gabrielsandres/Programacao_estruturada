#include <stdio.h>

//Faça um algoritmo que leia um número N e imprima “F1”, “F2” ou “F3”, conforme a condição: 
//“F1”, se N <= 10
//“F2”, se N > 10 e N <= 100
//“F3”se n > 100

int main(void) {

  float N;
  
  printf("Digite um número: ");
  scanf("%f",&N);

  if (N <= 10){
    printf("\nF1");
  }else if(N > 10 && N <= 100){
    printf("\nF2");
  }else if(N > 100){
    printf("\nF3");
  }
  return 0;
}