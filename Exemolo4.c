#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*Vai receber duas strings, em seguida calcular o tamanho e fazer a concatenação das duas strings*/

int main(){

    char str1[80], str2[80];
    printf("Digite duas strings:\n ");
    gets(str1);
    gets(str2);
    printf("comprimentos: str1(%d) str2(%d)\n", strlen (str1), strlen(str2));

    if (!strcmp(str1,str2))
    {
        printf("String iguais\n");
    }

    strcat(str1, str2);
    printf("str1 + str2 = %s\n",str1);

    if(strrchr(str1, 't')) printf("t está em str1\n");

    if (strstr(str1,"tudo"))
    {
        printf("tudo está em str1");
    }
    
}


