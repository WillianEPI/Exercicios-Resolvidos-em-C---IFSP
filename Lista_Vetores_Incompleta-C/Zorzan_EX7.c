#include <stdio.h>

void entrada(int vetor[]){
int i;

    printf("Digite os elementos do vetor (somente numeros inteiros!!!):\n");
        for (i = 0; i < 100; i++)
        {
            printf("\n----------------------------------------------------\n");
            printf("Posicao do vetor [%d]: ", i +1);
            scanf("%d", &vetor[i]);
        }
}

void procurar_vetor(int vetor[], int elemento){
int i;

    printf("\nDigite qual elemento voce deseja encontrar no vetor:");
    scanf("%d", &elemento);

        for (i = 0; i < 100; i++)
        {
            if (vetor[i] == elemento)
            {
                printf("\n----------------------------------------------------\n");
                printf("\nO elemento %d esta na posicao %d do vetor!!\n", elemento, i +1);
                printf("\n----------------------------------------------------\n");
                break;
            }
        }
        
        if (i == 3)
        {
            printf("\n----------------------------------------------------\n");
            printf("O elemento nao foi adicionado no vetor!!");
            printf("\n----------------------------------------------------\n");
        }
}

int main(){
int elemento = 0, vetor[100];

entrada(vetor);
procurar_vetor(vetor, elemento);

    return 0;
}




