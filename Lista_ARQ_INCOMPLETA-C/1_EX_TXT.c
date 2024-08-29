/*1. Escreva um programa que:
a. Crie/abra um arquivo texto de nome “arq.txt”
b. Permita que o usuário grave diversos caracteres nesse arquivo, até e que o usuário entre
com o caractere ‘\0’
c. Feche o arquivo
Agora, abra e leia o arquivo, caractere por caractere, e escreva na tela todos os caracteres
armazenados.*/

#include <stdio.h>
#include <string.h>



void Entrada(char Texto[])
{
    int i = 0, j = 0;
    char palavra;

    printf("Digite ate 100 caracteres:\n");
    while ((palavra = getchar()) != '\n')
    {
        Texto[i] = palavra;
        i++;
    }
    Texto[i] = '\0';

    FILE *arquivo_leitura = fopen("Lista de Arquivo.txt", "w");
    if (arquivo_leitura != NULL)
    {

        for (j = 0; j < i; j++)
        {
            fprintf(arquivo_leitura, "%c", Texto[j]);
        }
        fclose(arquivo_leitura);
    }
}

void Saida(char Texto[])
{

    FILE *arquivo_leitura = fopen("Lista de Arquivo.txt", "r");
    if (arquivo_leitura != NULL)
    {
        fgets(Texto, 100, arquivo_leitura);
        fclose(arquivo_leitura);
    }

    printf("\n\n---------------------------------------------------------------------\n");
    printf("\nVoce digitou:\n%s\n", Texto);
}

int main()
{

    char Texto[100];

    Entrada(Texto);
    Saida(Texto);
}
