#include <stdio.h>
#include <string.h>

void Entrada(char nome[]){

    printf("Digite uma mensagem de no maximo 50 caracteres: ");
    fgets(nome, 51, stdin);
}

int Contando_Letras(char nome[]){
int i;
int contador = 0;

    for (i = 0; nome[i] != '\0'; i++)
    {
    if ((nome[i] == 'a' || nome[i] == 'A') || (nome[i] == 'e' || nome[i] == 'E') || (nome[i] == 'i' || nome[i] == 'I') || (nome[i] == 'o' || nome[i] == 'O') || (nome[i] == 'u' || nome[i] == 'U'))
    {
        contador++;
    }
    }
    return contador;
}

void Saida(int contador){

    printf("\n-------------------------------------\n");
    printf("O numero de vogais e: %d", contador);
    printf("\n-------------------------------------\n");

}

int main(){
char nome[51];
int contador = 0;

Entrada(nome);
contador = Contando_Letras(nome);
Saida(contador);

    return 0;
}