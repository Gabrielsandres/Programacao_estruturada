/*Criar um programa utilizando vetor:
O programa deverá pedir o nome da empresa, o número de funcionários, a matrícula e o salário do funcionário
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main(void) {

   float salario [2];
   int matricula[2];
   char nome[50];
   int i, nfunc;

   printf("Digite o nome da empresa: ");
   gets(nome);

   printf("Digite o numero de funcionarios: ");
   scanf("%d",&nfunc);

   for ( i = 0; i <nfunc; i++)
   {
        printf("Digite a matricula e o salario do funcionario (%d):  ", i+1);
        scanf("%d %f", %matricula[i], %salario[i]);    
   }
   
   printf("Empresa %s \n", nome);
   printf("Matricula - salario \n");

   for ( i = 0; i < nfunc; i++)
   {
    printf("%10d %10.2f\n",matricula[i],salario[i]);
   }

   getch();

   return 0;
}