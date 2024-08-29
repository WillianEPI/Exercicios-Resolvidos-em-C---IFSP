#include <stdio.h>
#include <string.h>

void Entrada(char nome[]){

    printf("Digite um nome (maximo 30 letras com espaco): ");
    fgets(nome, 30, stdin);
}

void Achando_Letra(char nome[]){

    if ((nome[0] == 'a'|| nome[0] == 'A'))
    {
        printf("\n--------------------------------------------------------\n");
        printf("O nome %s\nComeca com a letra 'A'. ", nome);
        printf("\n--------------------------------------------------------\n");
    }
    else
    {
        printf("\n--------------------------------------------------------\n");
        printf("O nome nao comeca com a letra 'A'.");
        printf("\n--------------------------------------------------------\n");
    }   
}

int main(){
char nome[30];

Entrada(nome);
Achando_Letra(nome);

    return 0;
}