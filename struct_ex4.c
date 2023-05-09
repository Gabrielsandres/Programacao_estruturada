#include<stdio.h>

struct livro
{
    char titulo[30];
    int regnum;
};

int main()
{
    struct livro livro1 = {"Helena",102};
    struct livro livro2 = {"Iracema",321};

    printf("\nLista de livros:\n");
    printf("\nTitulo: %s",livro1.titulo);
    printf("\nNumero de registro: %d\n\n",livro1.regnum);
    printf("\nTitulo: %s",livro2.titulo);
    printf("\nNumero de registro: %d\n\n",livro2.regnum);

    return 0;
}
