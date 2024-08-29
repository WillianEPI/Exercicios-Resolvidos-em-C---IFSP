#include <stdio.h>
#include <string.h>

void entrada(char nome[]){

    printf("Digite um nome (maximo 30 caracter): ");
    fgets(nome, 31, stdin);
}

void saida(char nome[]){
int i;

    printf("\n-------------------------------\n");
    printf("Os 4 primeiros caracteres sao:\n");

        for (i = 0; i < 4; i++)
        {
            printf("%c", nome[i]);
        }
    printf("\n-------------------------------\n");
}

int main(){
char nome[31]; 

entrada(nome);
saida(nome);

    return 0;
}