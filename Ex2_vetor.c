/*Array Bubblesort*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

int main() 
{
    setlocale(LC_ALL,"");

    int numeros [TAM];
    int i, aux, contador;

    printf("Entre com os 10 números para preencher o Array: \n");

    for (i=0; i<TAM; i++)
    {
        scanf("%d", &numeros[i]);
    }
    printf("\n\nOrdem atual dos itens do array:\n");

    for ( i = 0; i < TAM; i++)
    {
        printf("%4d",numeros[i]);
    }
    for ( contador = 1; contador < TAM; contador++)
    {
        for ( i = 0; i < TAM; i++);
        {
            if (numeros[1] > numeros[i+1])
            {
                aux = numeros[i];
                numeros[i] = numeros[i+1];
                numeros[i+1] = aux;
            }
            
        }
        
    }
    printf("\n\nElementos do array em ordem crescente:\n");

    for ( i = 0; i < TAM; i++)
    {
        printf("%4d",numeros[i]);
    }
    printf("\n");
    
    
    

}

