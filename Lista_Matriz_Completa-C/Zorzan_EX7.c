#include <stdio.h>

void entrada (float matriz[5][3]){
int i,w;

        for (i = 0; i < 5; i++)
        {
            for (w = 0; w < 3; w++)
            {
                printf("----------------------------\n");
                printf("Digite as notas do aluno %d\n", i + 1);
                scanf("%f", &matriz [i][w]);

                if (matriz[i][w] < 0 || matriz[i][w] > 10)
                {
                    printf("\n\nNotas invalidas, tente novamente!!\n\n");
                    entrada(matriz);
                }
            }
        }
}

void media_aluno(float matriz[5][3], float vetor[]){
int i, w;
float soma; 

    for (i = 0; i < 5; i++)
    {
        soma = 0;
        for (w = 0; w < 3; w++)
        {
            soma += matriz[i][w];
        }
    vetor[i] = soma / 3;
    printf("\n");
    }
}

void exibir_media_aluno(float vetor[]){
int i;

    printf("\n\n----------------------------\n");
    printf("Medias por aluno :\n");
        for (i = 0; i < 5; i++)
        {
            printf("A media do aluno %d e: %.2f\n", i + 1, vetor[i]);
        }
    printf("----------------------------\n\n");
}

void media_sala(float vetor[]){
int i; 
float soma = 0;

    for (i = 0; i < 5; i++)
    {
        soma += vetor[i];
    }
    printf("\n\n----------------------------\n");
    printf("A media da sala e:  %.2f", soma / 5);
    printf("\n----------------------------\n\n");
}

int main(){
float matriz[5][3], vetor[5];

entrada(matriz);
media_aluno(matriz, vetor);
exibir_media_aluno(vetor);
media_sala(vetor);

    return 0; 
}   