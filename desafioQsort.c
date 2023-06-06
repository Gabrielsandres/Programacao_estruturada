#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NOME_MAX 30
#define TAM_MAX 100

void ordena(char **p, int n) {
    char *temp;
    int i, j;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(p[i], p[j]) > 0) {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
}

int main() {
    char nomes[NOME_MAX][TAM_MAX];
    char *p[NOME_MAX]; // Matriz de ponteiros
    int n, i;

    for (n = 0;; n++) {
        printf("Digite o nome ou [ENTER] para fim: ");
        fgets(nomes[n], TAM_MAX, stdin);
        nomes[n][strcspn(nomes[n], "\n")] = '\0'; // Remove o caractere '\n' da string

        if (strlen(nomes[n]) == 0) {
            break;
        } else {
            p[n] = nomes[n];
        }
    }

    printf("\n\nLista original: \n");
    for (i = 0; i < n; i++) {
        printf("%s\n", p[i]);
    }

    ordena(p, n);

    printf("\n\nLista Ordenada: \n");
    for (i = 0; i < n; i++) {
        printf("%s\n", p[i]);
    }

    return 0;
}

