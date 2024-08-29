#include <stdio.h>

void entrada(int vetor[]){
int i;

    printf("\nDigite 10 elementos para formar o vetor:\n");
    for ( i = 0; i < 10; i++){
        scanf("%d",&vetor[i]);}
}

int maior_elemento(int vetor[]){
int maior = vetor[0];
int i;

    for ( i = 0; i < 10; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }
    return maior;
}

int Posicao_Maior_Elemento(int vetor[]){
int maior = vetor[0];
int i, posicao = 0;

    for ( i = 0; i < 10; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
            posicao = i;
        }
    }
    return posicao;
}

void Saida(int maior, int posicao){

    printf("\n--------------------------------------------------\n");
    printf("O maior elemento do vetor e: %d\n", maior);
    printf("A posicao do elemento e: %d", posicao + 1);
    printf("\n--------------------------------------------------\n");
}

int main (){
int vetor[10], maior = 0, posicao = 0;

entrada(vetor);
maior = maior_elemento(vetor);
posicao = Posicao_Maior_Elemento(vetor);
Saida(maior, posicao);

return 0;
}