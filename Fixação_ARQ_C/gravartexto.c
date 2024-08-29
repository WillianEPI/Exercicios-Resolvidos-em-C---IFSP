#include <stdio.h>

void main()
{
    char texto[100];

    FILE *arquivo;

    arquivo = fopen("texto.txt", "a");

    if(arquivo == NULL)
    {
        arquivo = fopen("texto.txt", "w");
    }

    printf("Digite o texto que quiser.\n");
    do {

        // lendo caracteres do teclado
        fgets(texto, 100, stdin);

        if (texto[0] != '\n')
            // salvando no arquivo
            fputs(texto, arquivo);

    } while (texto[0] != '\n');

    fclose(arquivo);
}

