#include <stdio.h>

void Entrada(int vetor[]){
int i;

    printf("\nDigite 10 numeros para construir o vetor!\n\n");
        for (i = 0; i < 10; i++)
        {
            scanf("%d", &vetor[i]);
        }
}

int soma_elementos_vetor(int vetor[]){
int i, soma = 0;

    for (i = 0; i < 10; i++)
    {
        soma += vetor[i];
    }
    return soma;
}

void Saida(int soma){

    printf("\n--------------------------------------\n");
    printf("A soma do vetor e: %i", soma);
    printf("\n--------------------------------------\n");
}

int main(){
int vetor[10];
int soma = 0;

Entrada(vetor);
soma = soma_elementos_vetor(vetor);
Saida(soma);

    return 0;
}