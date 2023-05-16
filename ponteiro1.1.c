#include<stdio.h>

int main(){

    int x;
    x = 10;

    int *ponteiro;
    ponteiro = &x;

    printf("\n%i\n", ponteiro);
    printf("\n%i\n", *ponteiro);

}