#include <stdio.h>

void Entrada(int vetor1[], int vetor2[]){
int i;

    printf("Digite os 10 elementos do 1 vetor:\n");
        for (i = 0; i < 10; i++)
        {
            scanf("%d", &vetor1[i]);
        }
    
    printf("\n---------------------------------------------------------------\n");
    printf("\nDigite os 10 elementos do 2 vetor:\n");
        for (i = 0; i < 10; i++)
        {
            scanf("%d", &vetor2[i]);
        }
}

int soma_vetor(int vetor1[],int vetor2[], int resultado[]){
int i;

    for ( i = 0; i < 10; i++)
    {
        resultado[i] = vetor1[i] + vetor2[i];
    }
    return resultado[i];
}

void Saida(int resultado[]){
int i;
    
    printf("\n---------------------------------------------------------------\n");
    printf("O resultado da soma e:\n");
    for (i = 0; i < 10; i++)
    {
    printf("%d  ", resultado[i]);
    }
     printf("\n---------------------------------------------------------------\n");
}

int main(){
int vetor1[10];
int vetor2[10];
int resultado[10];

Entrada(vetor1, vetor2);
soma_vetor(vetor1, vetor2, resultado);
Saida(resultado);

    return 0;
}