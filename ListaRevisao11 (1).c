#include <stdio.h>

//Construa um algoritmo que receba como entrada três valores e os imprima em ordem crescente.

int main(void) {

  float A,B,C,maior,meio,menor;


  printf("Digite três números: \n");
  scanf("%f",&A);
  scanf("%f",&B);
  scanf("%f",&C);

  if(A>B && A>C){
    maior = A;
    if(B>C){
      meio = B;
      menor = C;
    }
    else{
      meio = C;
      menor = B;
    }
  }
  if(B>A && B>C){
    maior = B;
    if(A>C){
      meio = A;
      menor = C;
    }
    else{
      meio = C;
      menor = A;
    }
    if(C>A && C>B){
    maior = C;
    if(B>A){
      meio = B;
      menor = A;
    }
    else{
      meio = A;
      menor = B;
    }
    }
  }

  printf("%.1f %.1f %.1f",menor,meio,maior);
}
