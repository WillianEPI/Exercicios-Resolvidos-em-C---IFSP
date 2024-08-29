#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Defina uma estrutura para armazenar o código, nome e preço de um produto. Crie uma variável
para armazenar 25 produtos. Leia as informações dos produtos e depois faça uma função que mostre
os nomes dos produtos com preço superior a R$1000.00.*/

typedef struct Produto 
{
    int Codigo;
    float Preco;
    char Nome[30];
}Produto ;

void Entrada(struct Produto Lista[]){
int i;


    for (i = 0; i < 3; i++)
    {
        printf("Digite o nome do produto %i:\n", i + 1);
        fgets(Lista[i].Nome, 30, stdin);
        fflush(stdin);

        printf("Digite o codigo do produto %i:\n", i + 1);
        scanf("%i", &Lista[i].Codigo);
        getchar();

        printf("Digite o preco do produto %i:\n", i + 1);
        scanf("%f", &Lista[i].Preco);
        getchar();
    }
    printf("\n-----------------------------------------------------------------\n\n");
}

void Buscar_Produto(struct Produto Lista[]){
int i;

        printf("Lista dos produtos com preco acima de 1000:\n");
        printf("\n-----------------------------------------------------------------\n");
        for (i = 0; i < 3; i++)
        {
            if (Lista[i].Preco >= 1000)
            {
                printf("%s", Lista[i].Nome);
                printf("------------------\n");
            }
        }
}   


int main(){
Produto Lista[3];


Entrada(Lista);
Buscar_Produto(Lista);

}