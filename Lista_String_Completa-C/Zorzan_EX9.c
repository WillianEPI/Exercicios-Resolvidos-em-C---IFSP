#include <stdio.h>
#include <string.h>


void Entrada(char nome[]){

    printf("Digite uma frase (maximo 40 letras com espaco): ");
    gets(nome);
}

void Processamento(char nome[]){

   do {
        if (strlen(nome) > 41) {
            printf("Entrada invalida!!\n");
        }
        Entrada(nome);
    } while (strlen(nome) > 41);
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

void Saida(char nome[]){
int i;
int contador = strlen(nome);

    printf("\n---------------------------------------------------------------------------\n");
    for (i = 0; i < contador; i++)
    {
        printf("%c\n", nome[i]);
    }
    printf("---------------------------------------------------------------------------\n");
}

int main(){
char nome[41];

Entrada(nome);
Processamento(nome);
Tirando_Espaco(nome);
Saida(nome);

    return 0;
}