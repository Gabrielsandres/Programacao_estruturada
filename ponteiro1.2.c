#include<stdio.h>

int main(){

    int x = 10;
    int *ponteiro;
    ponteiro = &x;

    int y=20;
    *ponteiro = y;

    printf("\n%i\n%i\n",x, y);
    printf("\n%i\n%i\n",&x, &y);


}