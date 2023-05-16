#include<stdio.h>

int main(){

    int x =10;
    double y = 20.50;
    char z = 'a';

    int *pX = &x;
    double *pY = &y;
    char *pZ = &z;

    double soma = *pX + *pY;

    printf("Valor = %.2f\n",soma);

}