#include <stdio.h>
#include <string.h>

/*Fazer um programa em linguagem C utilizando funções, capaz de:
a) Excluir um caracter de uma determinada posição de uma string;
b) Incluir um caracter em uma determinada posição de uma string;
c) Copiar   uma   parte   de   uma   string   para   dentro   de   outra,   para   isso   deve-se
conhecer a posição inicial e o final a ser copiada;
d) Copiar a última palavra de uma string para outra string;
e) Copiar a primeira palavra de uma string para outra;
f) Retirar os espaços em branco repetidos de uma string;
g) Retirar os espaços em branco do final de uma string;
h) Retirar os espaços em branco do início de uma string;
i) Copiar o conteúdo de uma string para outra;
j) Apagar o conteúdo de uma string.*/

void Entrada(char string[])
{

    printf("Digite uma frase de ate 100 caracteres: ");
    fgets(string, 100, stdin);
    fflush(stdin);
}

void Excluir_Caracter(char string[])
{
    int i;
    char escolhido, controle = strlen(string);

    printf("Digite o caracter que deseja incluir na string:");
    scanf("%c", &escolhido);
    fflush(stdin);
    escolhido = toupper(escolhido);

    for (i = 0; i < controle; i++)
    {
        if (toupper(string[i]) == escolhido)
        {
            string[i] = NULL;
        }
    }

    /*for (i = 0; i < controle; i++)
    {
        printf("%c", string[i]);
    }*/
}

void Incluir_Caracter(char string[])
{
    int i, j, posicao = 0;
    char escolhido, controle = strlen(string);

    printf("Digite em qual posicao deseja adiconar o caracter: ");
    scanf("%i", &posicao);
    fflush(stdin);

    if (posicao < 1 || posicao > controle)

    {
        printf("\n\nPosicao invalida!! Vamos recomecar\n\n");
        Incluir_Caracter(string);
    }

    printf("\nDigite o caracter que deseja incluir: ");
    scanf("%c", &escolhido);
    fflush(stdin);
    escolhido = toupper(escolhido);

    for (j = 0; j < controle; j++)
    {
        if (j + 1 == posicao)
        {
            string[j] = escolhido;
        }
    }

    /*for (i = 0; i < controle; i++)
    {
        printf("%c", string[i]);
    }*/
}

void Copiar_string(char string[])
{
    int posicao = 0, posicao2 = 0;
    int i;
    char copia_string[100], controle = strlen(string); 

    printf("Digite em qual posicao que deseja comecar a copia: ");
    scanf("%i", &posicao);
    fflush(stdin);

    printf("Digite ate qual posicao deve ser copiado: ");
    scanf("%i", &posicao2);
    fflush(stdin);

    if (posicao < 1 || posicao2 > controle || posicao > posicao2)
    {
        printf("\n\nPosicao invalida!! Vamos recomecar\n\n");
        Incluir_Caracter(string);
    }

    for (i = posicao - 1; i < posicao2; i++)
    {

        copia_string[i] = string[i];
    }

    /*char controle2 = strlen(copia_string);
    for (i = 0; i < controle2; i++)
    {
        printf("%c", copia_string[i]);
    }*/
}


int main()
{

    char string[100];

    Entrada(string);
    // Excluir_Caracter(string);
    // Incluir_Caracter(string);
    // Copiar_string(string);

}
