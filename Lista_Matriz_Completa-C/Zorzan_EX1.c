#include <stdio.h>

void entrada (int matriz[2][5]){
int i,j;

        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 5; j++)
            {
                printf("----------------------------\n");
                printf("Digite os elementos da linha %d e da coluna %d:\n", i + 1, j + 1);
                scanf("%d", &matriz [i][j]);
            }
            
        }
}

void exibir(int matriz[2][5]){
int i, j;

    printf("\nSegue abaixo elementos separados por linhas:");
    printf("\n----------------------------\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 5; j++)
            {
                printf("%d  ", matriz[i][j]);
            }
            printf("\n");
        }
    printf("----------------------------\n");
}

int main(){
int matriz[2][5];

entrada(matriz);
exibir(matriz);

    return 0;
}