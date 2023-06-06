#include <stdio.h>

//Uma empresa de vendas tem três corretores. A empresa paga ao corretor uma
//comissão calculada de acordo com o valor de suas vendas. Se o valor da venda de
//um corretor for maior que R$ 50.000.00 a comissão será de 12% do valor vendido. Se
//o valor da venda do corretor estiver entre R$ 30.000.00 e R$ 50.000.00 (incluindo
//extremos) a comissão será de 9.5%. Em qualquer outro caso, a comissão será de 7%.
//Escreva um algoritmo que gere um relatório contendo nome, valor da venda e
//comissão de cada um dos corretores. O relatório deve mostrar também o total de
//vendas da empresa.

int main(void) {

  char nome1[50],nome2[50],nome3[50];
  float valor1, valor2, valor3,comissao1,comissao2,comissao3,salario1,salario2,salario3;
  
  printf("\nDigite o nome do Corretor 1: ");
  scanf("%s",&nome1);
  printf("\nDigite quanto o(a) corretor(a) %s vendeu: ",nome1);
  scanf("%f",&valor1);

  if(valor1 > 50000){
    comissao1 = 0.12;
  }else if ( 50000 >= valor1 && valor1 >= 30000){
    comissao1 = 0.095;
  }else{
    comissao1 = 0.07;
  }
  salario1 = valor1 * comissao1;

  printf("\nDigite o nome do Corretor 2: ");
  scanf("%s",&nome2);
  printf("\nDigite quanto o(a) corretor(a) %s vendeu: ",nome2);
  scanf("%f",&valor2);

  if(valor2 > 50000){
    comissao2 = 0.12;
  }else if ( 50000 >= valor2 && valor2 >= 30000){
    comissao2 = 0.095;
  }else{
    comissao2 = 0.07;
  }
salario2 = valor2 * comissao2;
  
    printf("\nDigite o nome do Corretor 3: ");
  scanf("%s",&nome3);
  printf("\nDigite quanto o(a) corretor(a) %s vendeu: ",nome3);
  scanf("%f",&valor3);

  if(valor3 > 50000){
    comissao3= 0.12;
  }else if ( 50000 >= valor3 && valor3 >= 30000){
    comissao3 = 0.095;
  }else{
    comissao3= 0.07;
  }

salario3 = valor3 * comissao3;
  
  printf("\n\nO vendedor %s vendeu no total %.2f R$ e recebeu uma comissão de %.2f R$",nome1,valor1,salario1);

  printf("\n\nO vendedor %s vendeu no total %.2f R$ e recebeu uma comissão de %.2f R$",nome2,valor2,salario2);

  printf("\n\nO vendedor %s vendeu no total %.2f R$ e recebeu uma comissão de %.2f R$",nome3,valor3,salario3);



    
  return 0;
}