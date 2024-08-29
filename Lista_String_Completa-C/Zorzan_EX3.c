#include <stdio.h>
#include <string.h>

void Entrada(char nome[], int *idade, char *sexo){

    printf("Digite um nome (maximo 30 letras com espaco): ");
    fgets(nome, 30, stdin);

    printf("Digite F para sexo feminino e M para sexo masculino:");
    scanf("%c", sexo);

    printf("Digite a idade: ");
    scanf("%d", idade);
}   

void Processamento_Saida(char nome[], char sexo, int idade) {
    if ((sexo == 'f' || sexo == 'F') &&idade <= 25) {
        printf("\n-----------------------------------------------\n");
        printf("\n%s \nACEITA\n", nome);
        printf("\n-----------------------------------------------\n");

    } else {
        printf("\n-----------------------------------------------\n");
        printf("NAO ACEITA");
        printf("\n-----------------------------------------------\n");
    }
}

int main(){
int idade = 0;
char sexo, nome[30];

Entrada(nome, &idade, &sexo);
Processamento_Saida(nome, sexo, idade);

    return 0;
}