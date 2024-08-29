#include <stdio.h>


void Entrada (int matriz[10][10]){
int i,j;

        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 10; j++)
            {
                printf("----------------------------\n");
                printf("Digite os elementos da linha %d e da coluna %d:\n", i + 1, j + 1);
                scanf("%d", &matriz [i][j]);
            }
        }
}

int Soma_Linha(int matriz[10][10], int vetor_linha[]){
int i, w;
int soma; 

    for (i = 0; i < 10; i++)
    {
        soma = 0;
        for (w = 0; w < 10; w++)
        {
            soma += matriz[i][w];
        }
    vetor_linha[i] = soma;
    printf("\n");
    }
   
    printf("\n-------------------------SOMA DAS LINHAS-------------------------\n\n");
    for (i = 0; i < 10; i++)
    {
         printf("Soma da linha [%i] e : %i\n", i + 1,vetor_linha[i]);
    }
    printf("-----------------------------------------------------------------------------\n\n");
    return vetor_linha[9];
}

void Soma_Coluna(int matriz[10][10], int vetor_coluna[]){
int i, w;
int soma_coluna; 

    for (w = 0; w < 10; w++)
    {
        soma_coluna = 0;
        for (i = 0; i < 10; i++)
        {
            soma_coluna += matriz[i][w]; 
        }
    vetor_coluna[w] = soma_coluna;
    printf("\n");
    }
    
    printf("\n-------------------------SOMA DAS COLUNAS-------------------------\n\n");
    for (i = 0; i < 10; i++)
    {
         printf("A soma da coluna [%i] e : %i\n", i +1, vetor_coluna[i]);
    }
    printf("-----------------------------------------------------------------------------\n\n");
}

void Maior_Linha(int vetor_linha[]){
int numero_linha = vetor_linha[0], i;
int maior_linha = 0;

    for (i = 0; i < 10; i++)
    {
        if (vetor_linha[i] > numero_linha)
        {
            numero_linha = vetor_linha[i];
            maior_linha = i;
        }
    }

    printf("\n-------------------------LINHA COM A MAIOR SOMA-------------------------\n\n");
    printf("  %i  ", maior_linha + 1);
    printf("\n\n--------------------------------------------------\n\n");
}

void Maior_Elemento(int matriz[10][10]){
int i, w, maior = matriz [0][0]; 
int linha_Maior_Elemento = 0;
int Coluna_Maior_Elemento = 0;

        for (i = 0; i < 10; i++)
        {
            for (w = 0; w < 10; w++)
            {
                if (matriz[i][w] > maior)
                {
                    maior = matriz[i][w];
                    linha_Maior_Elemento = i;
                    Coluna_Maior_Elemento = w;
                }
            }
        }

    printf("\n-------------------------POSICAO DO MAIOR ELEMENTO-------------------------\n\n");
    printf("O maior elemento da matriz e %d que esta na linha %d da coluna %d \n", maior, linha_Maior_Elemento + 1, Coluna_Maior_Elemento + 1);
    printf("--------------------------------------------------------\n\n");
}

void Menor_Elemento(int matriz[10][10]){
int i, w, menor = matriz [0][0]; 
int linha_Menor_Elemento = 0;
int Coluna_Menor_Elemento = 0;

        for (i = 0; i < 10; i++)
        {
            for (w = 0; w < 10; w++)
            {
                if (matriz[i][w] < menor)
                {
                    menor = matriz[i][w];
                    linha_Menor_Elemento = i;
                    Coluna_Menor_Elemento = w;
                }
            }
        }

    printf("\n-------------------------POSICAO DO MENOR ELEMENTO-------------------------\n\n");
    printf("O menor elemento da matriz e %d que esta na linha %d da coluna %d \n", menor, linha_Menor_Elemento + 1, Coluna_Menor_Elemento + 1);
    printf("--------------------------------------------------------\n\n");
}

int main(){
int matriz[10][10];
int vetor_linha[10];
int vetor_coluna[10];

Entrada(matriz);
vetor_linha[10] = Soma_Linha(matriz, vetor_linha);
Soma_Coluna(matriz, vetor_coluna);
Maior_Linha(vetor_linha);
Maior_Elemento(matriz);
Menor_Elemento(matriz);

    return 0;
}