#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{

    char time1[50];

    printf("------------------------------------------------------------");
    printf("\nDescubra o tamanho do nome de um time de futebol\n\n\n");

    printf("Digite um time de futebol: ");
    gets(time1);

    printf("\nO tamanho do time escolhido: %s(%d)\n",time1, strlen (time1));

    printf("------------------------------------------------------------");




    

   

    return 0;
}