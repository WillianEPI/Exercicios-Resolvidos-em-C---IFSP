/*3. Faça um programa que receba do usuário um arquivo texto e mostre na tela quantas letras
são vogais.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int Entrada()
{

    char vogais[100];
    int Total_Vogais = 0, i;

    FILE *arquivo_leitura = fopen("Lista de Arquivo.txt", "r");
    if (arquivo_leitura == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 0;
    }
    while (fgets(vogais, sizeof(vogais), arquivo_leitura) != NULL)
    {
        for (i = 0; vogais[i] != '\0'; i++)
        {
            char ch = tolower(vogais[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                Total_Vogais++;
            }
        }
    }
    fclose(arquivo_leitura);
    return Total_Vogais;
}

void Saida(int Total_Vogais)
{
    printf("No arquivo fornecido a um total de %i vogais!", Total_Vogais);
}

int main()
{

    int Total_Vogais;

    Total_Vogais = Entrada();
    Saida(Total_Vogais);
}