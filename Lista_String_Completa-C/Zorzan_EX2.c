#include <stdio.h>
#include <string.h>

void entrada(char nome[]){

    printf("Digite um nome: ");
    fgets(nome, 30, stdin);
}

void Tirando_Espaco(char nome[]){
int i, j = 0;
int Sem_Espaco = strlen(nome);

    for (i = 0; i < Sem_Espaco; i++)
    {
        if (nome[i] != ' ')
        {
            nome[j++] = nome[i];
        }
    }
    nome[j] = '\0';
}

void processamento_saida(char nome[]){
int i; 
int contador = strlen(nome);
    printf("\n-----------------------------------\n");
    printf("As letras nas posicoes impar sao: ");

        for (i = 0; i < contador; i++)
        {
            if (i % 2 != 0)
            {
                printf("%c", nome[i]);
            }
        }
    printf("\n-----------------------------------\n");
}

int main(){
char nome[30];

entrada(nome);
Tirando_Espaco(nome);
processamento_saida(nome);

    return 0;
}