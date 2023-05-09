#include<stdio.h>
#include<stdlib.h>

/*puts() - Complemente a função gets(). O proposito do puts() é imprimir uma única string por vez.

Ezemplo: mostra impressão de string com puts().
*/

int main (){
    char nome[80];
    printf("Digite o seu nome: ");
    gets(nome);
    puts("Saudacoes, ");//Imprime o texto no video
    puts(nome);
    puts("puts() pula de linha sozinha");
    puts(&nome[2]);
    system("PAUSE");
    return 0;

}