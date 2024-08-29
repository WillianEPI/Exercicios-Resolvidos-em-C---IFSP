#include <stdio.h>

#define linha 10
#define coluna 10

void entrada (float matriz[coluna][linha]){
int i,w;

        for (i = 0; i < 10; i++)
        {
            for (w = 0; w < 10; w++)
            {
                printf("----------------------------\n");
                printf("Digite os elementos da linha %d e da coluna %d:\n", i + 1, w + 1);
                scanf("%f", &matriz [i][w]);
            }
        }
}

void transposta(float matriz[coluna][linha], float Matriz_Transposta[linha][coluna] ){
int i, w;

        for (i = 0; i < 10; i++)
        {
            for (w = 0; w < 10; w++)
            {
                Matriz_Transposta[w][i] = matriz[i][w];
            }
        }
}

void matriz_original(float matriz[linha][coluna]){
int i, w;

    printf("\n\nA matriz original e:\n");

        for (i = 0; i < 10; i++)
    {
        for (w = 0; w < 10; w++)
        {
            printf("%.2f   ", matriz[i][w]);
        }
        printf("\n");
    }  
}

void saida_transposta(float Matriz_Transposta[coluna][linha]){
int i, w;

    printf("\n\nA matriz transposta e:\n");
        for (i = 0; i < 10; i++)
    {
        for (w = 0; w < 10; w++)
        {
            printf("%.2f   ", Matriz_Transposta[i][w]);
        }
        printf("\n");
    }
}

int main(){
float matriz[linha][coluna];
float Matriz_Transposta[coluna][linha];

entrada(matriz);
transposta(matriz, Matriz_Transposta);
matriz_original(matriz);
saida_transposta(Matriz_Transposta);

    return 0;
}