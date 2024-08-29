#include <stdio.h>

void entrada (float matriz[3][3]){
int i,w;

        for (i = 0; i < 3; i++)
        {
            for (w = 0; w < 3; w++)
            {
                printf("----------------------------\n");
                printf("Digite os elementos da linha %d e da coluna %d:\n", i + 1, w + 1);
                scanf("%f", &matriz [i][w]);
            }
        }
}

void soma(float matriz[3][3], float vetor[]){
int i, w;
float soma; 

    for (i = 0; i < 3; i++)
    {
        soma = 0;
        for (w = 0; w < 3; w++)
        {
            soma += matriz[i][w];
        }
    vetor[i] = soma;
    printf("\n");
    }
}

void exibir_soma(float vetor[]){
int i;

    printf("\n\n----------------------------\n");
    printf("A soma de cada linha e:\n");
        for (i = 0; i < 3; i++)
        {
            printf("Linha %d a soma e: %.2f\n", i + 1, vetor[i]);
        }
    printf("----------------------------\n\n");
}

int main(){
float matriz [3][3];
float vetor[3];

entrada(matriz);
soma(matriz, vetor);
exibir_soma(vetor);

    return 0;
}