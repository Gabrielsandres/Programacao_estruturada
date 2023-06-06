#include <stdio.h>
#include <stdlib.h>

//Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês.

int main(void) {

  char nome[25];
  float salarioFixo, vendaMes, comissao, salario;

  printf("Digite o nome do vendedor: ");
  scanf("%s", &nome);

  printf("Digite o valor do salário fixo: ");
  scanf("%f", &salarioFixo);

  printf("Digite o valor total das vendas realizadas: ");
  scanf("%f", &vendaMes);

  comissao = vendaMes * 0.15;
  salario = salarioFixo + comissao;

  printf("\nTOTAL = R$ %.2f ", salario);
  
  return 0;
}