#include <stdio.h>

void entrada (int matriz[10][10]){
int i,w;

        for (i = 0; i < 10; i++)
        {
            for (w = 0; w < 10; w++)
            {
                printf("----------------------------\n");
                printf("Digite os elementos da linha %d e da coluna %d:\n", i + 1, w + 1);
                scanf("%d", &matriz [i][w]);
            }
        }
}

int maior_elemento(int matriz[10][10], int *linha, int *coluna){
int i, w, maior = matriz [0][0]; 

        for (i = 0; i < 10; i++)
        {
            for (w = 0; w < 10; w++)
            {
                if (matriz[i][w] > maior)
                {
                    maior = matriz[i][w];
                    *linha = i;
                    *coluna = w;
                }
            }
        }
    return maior;
}

void Saida(int maior_numero, int linha, int coluna){

    printf("\n\n--------------------------------------------------------\n");
    printf("O maior elemento da matriz e %d que esta na linha %d da coluna %d \n", maior_numero, linha + 1, coluna + 1);
    printf("--------------------------------------------------------\n");
}

int main(){
int matriz [10][10], maior_numero, linha = 0, coluna = 0;

entrada(matriz);
maior_numero = maior_elemento(matriz, &linha, &coluna);
Saida(maior_numero, linha, coluna);

    return 0;
}