#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Mostrar como definir uma string variável para receber um nome pelo teclado*/

int main(){
    setlocale(LC_ALL,"")
    char nome[80];
    printf("Digite seu nome: ");
    scanf("%s",&nome);
    printf("Saudações,%s.\n",nome);
    system("PAUSE");
    return 0;

}