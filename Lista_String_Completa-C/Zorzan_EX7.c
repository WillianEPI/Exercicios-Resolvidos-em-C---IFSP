#include <stdio.h>
#include <string.h>

void Entrada(char nome[], char *letra){

    printf("Digite um nome de no maximo 30 caracteres: ");
    fgets(nome, 31, stdin);

    printf("Digite qual letra deseja verificar no nome:");
    scanf(" %c", letra);
}

int Contando_Letras(char nome[], char letra){
int i;
int contador = 0;

    for (i = 0; nome[i] != '\0'; i++)
    {
 
    if ((nome[i] == letra))
    {
        contador++;
    }
    }
    return contador;
}

void Saida(int contador, char letra){

    printf("\n-------------------------------------\n");
    printf("A letra %c aparece %d vezes.",letra, contador);
    printf("\n-------------------------------------\n");
}

int main(){
char nome[31], letra;
int contador = 0;

Entrada(nome, &letra);
contador = Contando_Letras(nome, letra);
Saida(contador, letra);

    return 0;
}