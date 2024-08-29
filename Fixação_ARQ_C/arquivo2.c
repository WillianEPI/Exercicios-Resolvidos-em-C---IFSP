
#include <stdio.h>

void main()
{
    char texto[20];

    // serve para verificar se a função fgets conseguiu ler texto do arquivo
    char *retorno;

    FILE *arquivo;

    arquivo = fopen("exercicio1.c", "r");

    do {

        retorno = fgets(texto, 20, arquivo);
        if (retorno != NULL)
        {
            printf("%s", texto);
        }

    } while (retorno != NULL);

    fclose(arquivo);
}
