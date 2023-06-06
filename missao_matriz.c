#include <stdio.h>

/*Crie um programa que execute uma matriz 3x3, em que os valores são adicionados de acordo com a linha e coluna, e a mesma é montada no formato da matriz*/

int main(void) {

  int matriz[3][3];
  
  printf("Monte sua matriz com valores inteiros:\n");

  for (int l = 0; l < 3; ++l){
    for (int c = 0; c < 3; ++c){
      scanf("%d", &matriz[l][c]);
    }
  }
printf("\n\n");
printf("Sua matriz ficou dessa maneira:\n\n");
  for(int m = 0; m < 3; ++m){
    for(int n = 0; n < 3; ++n){
      printf("%i ", matriz[m][n]);
    }
    printf("\n");
  }
  return 0;
}
