/*Usando ponteiro à estrutura crie um programa para imprimir na tela hora, minutos e segundos.
OBS: os valores podem ser predeterminados.
Ex: 20:20:20
*/

#include<stdio.h>

int main(){

    int hora = 10;
    int minuto = 56;
    int segundo = 30;

    int *pHora = &hora;
    int *pMinuto = &minuto;
    int *pSegundo = &segundo;

    printf("\n%i:%i:%i\n",*pHora, *pMinuto, *pSegundo); 
}