#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Mostra como comparar strings utilizando diferentes funções da biblioteca string.h

// As comparações são baseadas na tabela ASCII e são feitas realizando operações de subtração entre os caracteres das strings
// Quando a subtração resulta em 0, os caracteres são iguais. Quando a subtração resulta em um número positivo, o primeiro caractere é maior que o segundo.
// Quando a subtração resulta em um número negativo, o primeiro caractere é menor que o segundo.
// A ordem dos caracteres nas operações é a ordem que eles foram passados como parâmetro para a função. 
// Exemplo: 
// strcmp(str1, str2) compara str1 com str2
// strcmo(str2, str1) compara str2 com str1

// Funções:
// strcmp() - Compara duas strings e retorna 0 se forem iguais
// strncmp() - Compara duas strings até um determinado número de caracteres e retorna 0 se forem iguais
// strcasecmp() - Compara duas strings ignorando maiúsculas e minúsculas e retorna 0 se forem iguais
// strncasecmp() - Compara duas strings até um determinado número de caracteres ignorando maiúsculas e minúsculas e retorna 0 se forem iguais

// Compara duas strings e armazenar o resultado em uma variável predefinida
int CompararStrings(char *str1, char *str2)
{
    int result;

    result = strcmp(str1, str2); // Compara as strings str1 e str2 e armazena o resultado em result
    // Possiveis resultados:
    // - Se str1 for maior que str2, result > 0
    // - Se str1 for menor que str2, result < 0
    // - Se str1 for igual a str2, result = 0


    return result; // Retorna o resultado da comparação
}

// Compara parte de duas strings e armazenar o resultado em uma variável predefinida
int CompararParteStrings(char *str1, char *str2, int n)
{
    int result;

    result = strncmp(str1, str2, n); // Compara as strings str1 e str2 até o n-ésimo caractere e armazena o resultado em result
    // Possiveis resultados:
    // - Se str1 for maior que str2, result > 0
    // - Se str1 for menor que str2, result < 0
    // - Se str1 for igual a str2, result = 0

    return result; // Retorna o resultado da comparação
}

int main()
{
    // Declara duas strings para serem comparadas
    char str1[15] = "ABCGHI";
    char str2[15] = "ABCDEF";
    
    // Variaveis para armazenar o resultado da comparação
    int result; 
    int result2, n = 3; 

    result = CompararStrings(str1, str2); // Chama a função CompararStrings e passa str1 e str2 como parâmetros
    result2 = CompararParteStrings(str1, str2, n); // Chama a função CompararParteStrings e passa str1, str2 e n como parâmetros

    printf("Resultado 1: %d\n", result); // Mostra o resultado da comparação
    printf("Resultado 2: %d\n", result2); // Mostra o resultado da comparação 2

}