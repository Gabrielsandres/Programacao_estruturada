#include <stdio.h>

//Faça um algoritmo que leia dois números A e B e imprima o maior deles.

int main(void) {

  float A,B,C;
  
  printf("Digite um número: ");
  scanf("%f",&A);

  printf("Digite outro número: ");
  scanf("%f",&B);

  if(A>B){
    printf("\n%.2f",A);
  }else if(A<B){
    printf("\n%.2f",B);
  }else{
    printf("\n%.2f e %.2f são iguais",B,A);
  }
  
  
  return 0;
}