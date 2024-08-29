#include <stdio.h>

void entrada (float matriz[4][4]){
int i,w;

        for (i = 0; i < 4; i++)
        {
            for (w = 0; w < 4; w++)
            {
                printf("----------------------------\n");
                printf("Digite os elementos da linha %d e da coluna %d:\n", i + 1, w + 1);
                scanf("%f", &matriz [i][w]);
            }
        }
}

float calculo(float matriz[4][4]){
int i;
float soma = 0;

        for (i = 0; i < 4; i++)
        {
            soma += matriz[i][i];
        }
    return soma;
}

int main(){
float matriz[4][4], soma;

entrada(matriz);
soma = calculo(matriz);

        printf("\n\n--------------------------------------------------------------------\n\n");
        printf("O total da soma dos elementos da diagonal principal e: %.1f\n", soma);
        printf("\n--------------------------------------------------------------------\n");


    return 0;
}