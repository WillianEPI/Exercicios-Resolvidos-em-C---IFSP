/* Fazer um programa em linguagem C utilizando funções capaz de ler uma matriz de inteiros com tamanho máximo de 10 por 10 e seja capaz de:

Calcular a soma de cada uma das linhas;
Calcular a soma de cada uma das colunas;
Apresentar o número da linha com a maior soma dos elementos;
Determinar a linha do maior elemento;
Determinar a coluna do maior elemento;
Determinar a posição do menor elemento; */

#include <stdio.h>

void Soma_linha(int matriz[3][3])
{
    int i, j, k;
    int soma[3] = {0, 0, 0};

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            soma[i] += matriz[i][j];
        }
    }

    printf("A soma de cada linha e:\n");

    for (k = 0; k < 3; k++)
    {
        printf("linha %i a soma e: %i\n", k + 1, soma[k]);
    }
}

void Soma_Coluna(int matriz[3][3])
{
    int i, j, k;
    int soma_coluna[3] = {0, 0, 0};

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            soma_coluna[i] += matriz[j][i];
        }
    }

    printf("\n\nA soma de cada coluna e:\n");

    for (k = 0; k < 3; k++)
    {
        printf("Coluna %i a soma e: %i\n", k + 1, soma_coluna[k]);
    }
}

void Maior_Linha(int matriz[3][3])
{
    int i, j;
    int soma[3] = {0, 0, 0};
    int maior_linha = soma[0], Linha_Win = 0;

        for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            soma[i] += matriz[i][j];
        }
    }

    for (i = 0; i < 3; i++)
    {
        if (soma[i] > maior_linha)
        {
            Linha_Win = i;
        }
    }

    printf("\nA linha com a maior soma e: %i\n", i+ 1);

}

int main()
{
    int matriz[3][3] = {
        {1, 2, 3}, 
        {1, 2, 1}, 
        {1, 2, 1}};

    Soma_linha(matriz);
    Soma_Coluna(matriz);
    Maior_Linha(matriz);
}
