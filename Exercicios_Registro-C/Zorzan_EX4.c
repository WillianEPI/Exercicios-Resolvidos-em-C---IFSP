#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LIMITE 3

/* Crie uma estrutura para armazenar o cadastro de estoque (código da peça, preço unitário da peça e
quantidade em estoque). Crie uma variável para armazenar 1000 peças, leia as informações das 1000
peças e depois, supondo que exista um estoque de segurança de 100 peças no estoque para cada tipo,
informe, através de uma função, quais peças precisam de reposição no estoque.*/


typedef struct Produto 
{
    int Codigo;
    float Preco;
    int Quantidade_Estoque;
}Produto ;

void Entrada(struct Produto Lista[]){
int i;

        for (i = 0; i < LIMITE; i++)
        {
            printf("Insira o codigo da peca %i:\n", i +1);
            scanf("%i", &Lista[i].Codigo);

            printf("Insira o valor da peca %i:\n", i +1);
            scanf("%f",  &Lista[i].Preco);

            printf("Insira a quantidade do produto %i no estoque:\n", i + 1);
            scanf("%i", &Lista[i].Quantidade_Estoque);
        }
        printf("\n---------------------------------------------------------\n");
}

void Estoque(struct Produto Lista[]){
int i;

        printf("As pecas com estoque inferior a 100 unidades sao:\n");
        printf("\n------------------------\n");
        for (i = 0; i < LIMITE; i++)
        {
            if (Lista[i].Quantidade_Estoque <= 100)
            {
                printf("%i", Lista[i].Codigo);
                printf("\n------------------------\n");
            }
            else
            {
                printf("Nao ha pecas que precisem de repoisicao!!");
            }
        }
}

int main(){
Produto Lista[LIMITE];

Entrada(Lista);
Estoque(Lista);

}