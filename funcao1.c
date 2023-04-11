#include <stdio.h>
#include <locale.h>

int soma(int a, int b)
{
        int s = a + b;
        return s;
}

int sub (int a, int b)
{
    int s = a - b;
    return s;
}

int main ()
{
    setlocale(LC_ALL, "");

    int n1, n2, op, res;
    int fim = 0;

  while (fim != 2)
  {
    printf("\nDigite um valor: ");
        scanf("%d",&n1);

        printf("Digite outro valor: ");
        scanf("%d",&n2);

        printf("\n1 - Adição\n2 - Subtração\n\nEscolha a operação: ");
        scanf("%d",&op);
        

        if(op == 1)
        {
          res = soma( n1,n2);  
        }
        if (op == 2)
        {
            res = sub( n1, n2);
        }

        printf("\nO resultado é: %d",res);

        printf("\n\n\nDeseja realizar outro calculo? (Pressione 1 para 'Sim' e 2 para 'Não'): ");
        scanf("%d", &fim);

        if(fim != 0 && fim != 1 && fim != 2 )
        {
          printf("\n\nOpção inválida!\n");
          break;
        }
        
  }
  
  printf("\nFinalizando...");
    
}