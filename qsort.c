#include <stdio.h>
#include <stdlib.h>

// Função para comparar inteiros
int compara(const void *a, const void *b)
{
    const int *pa = (const int *)a;  // Modifica o tipo de ponteiro
    const int *pb = (const int *)b;  // Modifica o tipo de ponteiro

    // Retorna negativo se a < b e positivo se a > b
    return *pa - *pb;
}

int main(){
    unsigned int tamanho = 0, i = 0;
    int tab[100];  // Defina um tamanho adequado para o array

    while (1) {
        printf("Digite um numero (0 para encerrar): ");
        scanf("%d", &tab[i]);
        
        if (tab[i] == 0)  // Verifica se o número digitado é zero
            break;
        
        tamanho++;
        i++;
    }

    qsort(tab, tamanho, sizeof(int), compara);

    printf("\nNumeros ordenados: ");
    for (i = 0; i < tamanho; i++){
        printf("%d ", tab[i]);
    }

    return 0;
}
