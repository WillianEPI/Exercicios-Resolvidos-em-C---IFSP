#include <stdio.h>
#include <string.h>

void Entrada(char nome[]){

    printf("Digite um nome (maximo 30 letras com espaco): ");
    fgets(nome, 31, stdin);
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

int Contando_Letras(char nome[]){
int i;
int contador = 0;

    for (i = 0; nome[i] != '\0'; i++)
    {
    if ((nome[i] >= 'a' && nome[i] <= 'z') || (nome[i] >= 'A' && nome[i] <= 'Z'))
    {
        contador++;
    }
    }
    return contador;
}

void Saida(int contador, char Copia_Nome[]){
    int i;

    printf("\n--------------------------------\n");
    for (i = 0; i < contador; i++) {
        printf(" %s", Copia_Nome);
    }
    printf("--------------------------------\n");
}

int main(){
char nome[31];
char Copia_Nome[31];
int contador = 0;

Entrada(nome);
strcpy(Copia_Nome, nome);
Tirando_Espaco(nome);
contador = Contando_Letras(nome);
Saida(contador, Copia_Nome);

    return 0;
}