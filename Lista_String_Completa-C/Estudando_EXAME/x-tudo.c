/* Fazer   um   programa   em   linguagem   C   utilizando   funções,   capaz   de   inverter   uma
string dada pelo usuário, faça uma copia dela e compare com outra string */

#include <stdio.h>
#include <string.h>

void Entrada(char string[], char string2[])
{

    printf("Digite uma frase de ate 100 caracters:\n");
    fgets(string, 100, stdin);
    fflush(stdin);

    printf("Digite outra frase para verificar se elas tem o mesmo tamanho:\n");
    fgets(string2, 100, stdin);
    fflush(stdin);
}

void Inverter_Frase(char string[])
{
    int controle = strlen(string), i;

    printf("A frase invertida fica:\n");

    for (i = controle; i >= 0; i--)
    {
        printf("%c", string[i]);
    }
}

void Copia(char string[])
{
    char copia[100];
    int controle = strlen(copia), i;

    strncpy(copia, string, sizeof(copia) - 1);

    printf("A copia da string 1 e:\n\n");
    for (i = 0; i < controle; i++)
    {
        printf("%c", copia[i]);
    }
}

void Comparacao(char string[], char string2[])
{
    int comparando = 0;

    comparando = strcmp(string, string2);

    if (comparando == 0)
    {
        printf("\n\nAs duas strings sao iguais!!!\n");
    }
    else
    {
        printf("\n\nAs strings nao sao iguais!!!\n");
    }
}

int main()
{
    char string[100], string2[100];

    Entrada(string, string2);
    Inverter_Frase(string);
    Copia(string);
    Comparacao(string, string2);
}
