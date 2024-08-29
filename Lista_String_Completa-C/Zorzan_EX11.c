#include <stdio.h>
#include <string.h>

void Entrada(char nome[]){

    printf("Digite um nome de no maximo 30 caracteres: ");
    fgets(nome, 31, stdin);
}

 void Primeira_Letra(char nome[]){

    printf("\n-------------------------------\n");
    printf("O primeiro caractere e:  %c", nome[0]);        
    printf("\n-------------------------------\n");
 }

void Ultima_Letra(char nome[]){
int controle = strlen(nome) - 2;

    if (controle > 0)
    {
        printf("\n-------------------------------\n");
        printf("O ultimo caracter e:  %c", nome[controle]);
        printf("\n-------------------------------\n");
    }
 }

void Quarta_Letra(char nome[]){

    printf("\n-------------------------------\n");
    printf("O 4 caractere e:  %c", nome[3]);        
    printf("\n-------------------------------\n");
}

void Primeira_a_Terceira(char nome[]){
int i;

    printf("\n-------------------------------\n");
    printf("Os 3 primeiros caracteres sao:  ");

        for (i = 0; i < 3; i++)
        {
            printf("%c", nome[i]);
        }
    printf("\n-------------------------------\n");
}

void Entrada_Inteira(char nome[]){
int i;
int contador = strlen(nome);

    printf("\n-------------------------------\n");
    printf("Todos os caracteres:");
        for (i = 0; i < contador; i++)
        {
            printf("  %c  ", nome[i]);
        }
        printf("\n-------------------------------\n");
}

void Inversa(char nome[]){
int i;
int contador = strlen(nome) - 1;

    printf("\n-------------------------------\n");
    printf("Todos os caracteres inversos(de tras pra frente):");
        for (i = contador; i >= 0; i--)
        {
            printf("%c ", nome[i]);
        }
        printf("\n-------------------------------\n");
}

int main(){
char nome[31];

Entrada(nome);
Primeira_Letra(nome);
Ultima_Letra(nome);
Quarta_Letra(nome);
Primeira_a_Terceira(nome);
Entrada_Inteira(nome);
Inversa(nome);

    return 0;
}