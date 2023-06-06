#include<stdio.h>
#include<string.h>

int main() {
    FILE *fptr;
    char nomeProduto[80];
    fptr = fopen("arqtext.txt", "w");
    fputs("Nome do produto\n", fptr);

    while (fgets(nomeProduto, sizeof(nomeProduto), stdin) != NULL) {
        nomeProduto[strcspn(nomeProduto, "\n")] = '\0'; // Remover a nova linha lida por fgets()
        fputs(nomeProduto, fptr);
        fputs("\n", fptr);
    }

    fclose(fptr);
    return 0;
}