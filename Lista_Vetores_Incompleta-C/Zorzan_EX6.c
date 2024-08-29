#include <stdio.h>

void entrada (int vetor[]){
int i;

    printf("\nDigite os elemestos do vetor: ");
        for  (i = 0; i < 100; i++)
    {   
        printf("Posicao [%d] do vetor:  ", i +1);
        scanf("%d", &vetor[i]);
    }
}

int soma_vetores(int vetor[]){
int i, soma = 0;

    for (i = 0; i < 100; i++)
    {
        soma += vetor[i];
    }

return soma;
}

void Saida(int soma){

    printf("\n-----------------------------------------------------------\n");
    printf("A soma do vetor e: %d", soma);
    printf("\n-----------------------------------------------------------\n");
}

int main(){
int vetor[100], soma;

entrada(vetor);
soma = soma_vetores(vetor);
Saida(soma);

return 0;
}