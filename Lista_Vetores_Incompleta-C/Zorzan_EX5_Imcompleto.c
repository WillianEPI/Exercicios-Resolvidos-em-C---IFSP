#include <stdio.h>

void entrada(int vetor1[], int vetor2[], char vetor4[]){
int i;

    printf("Digite os elementos do 1 vetor de inteiros:\n");
        for (i = 0; i < 4; i++)
        {
            printf("\n-------------------\n");
            printf("Posicao de vetor 1 [%d]: ", i + 1);
            scanf("%d", &vetor1[i]);
        }
    printf("\n-------------------");
    printf("\nDigite os elementos do 2 vetor de interios:\n");
    printf("-------------------\n");
        for (i = 0; i < 4; i++)
        {
            printf("\n-------------------\n");
            printf("Posicao do vetor 2 [%d]: ", i + 1);
            scanf("%d", &vetor2[i]);
        }
        
    printf("\n-------------------");
    printf("\nDigite quais operacoes serao feitas para cada posicao do vetor:\n");
    printf("\n-------------------");
    printf("\nA) Divisao (/)!!\n");
    printf("\nB) Multiplicacao (*)!!\n");
    printf("\nC) Subtracao (-)!!\n");
    printf("\nD) Adicao (+)!!\n");
    printf("-------------------\n");
        for (i = 0; i < 4; i++)
        {
            printf("\n-------------------\n");
            printf("Posicoes do vetor de operacoes [%d]: ", i + 1);
            scanf(" %c", &vetor4[i]);
        }
        
}
int soma_vetor(){}

int main(){
int vetor1[4], vetor2[4],resultado[3];
char vetor4[4];


entrada(vetor1,vetor2, vetor4);



    return 0;
}