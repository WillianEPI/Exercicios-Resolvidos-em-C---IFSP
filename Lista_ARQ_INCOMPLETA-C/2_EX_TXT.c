/*2. Faça um programa que receba do usuário um arquivo texto e mostre na tela quantas linhas
esse arquivo possui.*/

#include <stdio.h>
#include <string.h>

int Entrada()
{
    int contador_linhas = 0;
    char linha[100];

    FILE *arquivo_leitura = fopen("Lista de Arquivo.txt", "r");
    if (arquivo_leitura != NULL)
    {
        while (fgets(linha, sizeof(linha), arquivo_leitura) != NULL)
        {
            contador_linhas++;
        }
        fclose(arquivo_leitura);
    }
    return contador_linhas;
}

void Saida(int contador_linhas)
{
    printf("O arquivo possui %d linhas no total", contador_linhas);
}

int main()
{
    int contador_linhas;

    contador_linhas = Entrada();
    Saida(contador_linhas);
}