#include <stdio.h>
#include <string.h>

void Entrada(char nome[]){

    printf("Digite um nome de no maximo 30 caracteres: ");
    fgets(nome, 31, stdin);
}

int Separando_Vogais(char nome[]){
int i;
float vogais = 0;

    for (i = 0; nome[i] != '\0'; i++)
    {
    if ((nome[i] == 'a' || nome[i] == 'A') || (nome[i] == 'e' || nome[i] == 'E') || (nome[i] == 'i' || nome[i] == 'I') || (nome[i] == 'o' || nome[i] == 'O') || (nome[i] == 'u' || nome[i] == 'U'))
    {
        vogais++;
    }
    }
    printf("\n-----------------------------------------------------------------\n");
    printf("O numero de vogais existente e: %.2f", vogais);
    printf("\n-----------------------------------------------------------------\n");
    return vogais;
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
    printf("\n-----------------------------------------------------------------\n");
    printf("O numero total de caracteres e: %i", contador);
    printf("\n-----------------------------------------------------------------\n");
    return contador;
}

void Porcentagem(int contador, float vogais){
float porcentagem_Numero = 0;

if (contador > 0) 
    {
        printf("\n-----------------------------------------------------------------\n");
        porcentagem_Numero = (float)vogais / contador * 100;
        printf("Porcentagem de vogais em relacao ao total de caracteres: %.2f%%", porcentagem_Numero);
        printf("\n-----------------------------------------------------------------\n");
    } 
}

int main(){
char nome[31];
int contador;
float vogais;

Entrada(nome);
vogais = Separando_Vogais(nome);
Tirando_Espaco(nome);
contador = Contando_Letras(nome);
Porcentagem(contador, vogais);

    return 0;
}