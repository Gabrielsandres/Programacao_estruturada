#include<stdio.h>

int main() {

    int x = 10;
    double y = 20.50;
    char z = 'a';

    int *pX = &x;
    double *pY = &y;
    char *pZ = &z;

    printf("Endereco x = %i - Valor x = %i\n",pX, *pX);
    printf("Endereco y = %i - Valor y = %.2f\n",pY, *pY);
    printf("Endereco x = %i - Valor x = %c\n",pZ, *pZ);


}