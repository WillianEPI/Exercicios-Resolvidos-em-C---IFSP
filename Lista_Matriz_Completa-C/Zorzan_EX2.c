#include <stdio.h>
#define linhas 4
#define coluna 3

void Entrada(int matriz[linhas][coluna])
{
    int i, j;

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            printf("Insira os numeros: ");
            scanf("%i", &matriz[i][j]);
        }
    }
}

void Saida(int matriz[linhas][coluna])
{
    int i, j;

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            printf("%i  ", matriz[j][i]);
        }

        printf("\n");
    }
}

int main()
{
    int matriz[linhas][coluna];

    Entrada(matriz);
    Saida(matriz);

    return 0;
}