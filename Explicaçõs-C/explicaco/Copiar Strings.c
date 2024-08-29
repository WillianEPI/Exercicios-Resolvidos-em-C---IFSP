#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Mostra como medir o tamanho de uma string utilizando diferentes funções da biblioteca string.h e como fazer cópias de strings
// Tambem mostra como concatenar strings e os diferentes tipos de entrada de dados para strings e como concatenar strings

// Funções:
// strlen() - Retorna o tamanho de uma string
// strcpy() - Copia uma string para outra
// strncpy() - Copia uma string para outra até um determinado número de caracteres

// Funções para concatenar strings:
// strcat() - Concatena uma string em outra
// strncat() - Concatena uma string em outra até um determinado número de caracteres

// Entrada de dados para strings:
// scanf() - Lê uma string até encontrar um espaço em branco ou uma quebra de linha Ex: scanf("%s", str);
// gets() - Lê uma string até encontrar uma quebra de linha Ex: gets(str);
// fgets() - Lê uma string até encontrar uma quebra de linha ou até um determinado número de caracteres Ex: fgets(str1, 15, stdin);

// Função para medir o tamanho de uma string (Utilizando strlen() da biblioteca string.h e ponteiros) 
int MedirTamanhoString(char *str)
{
    int tamanho;

    tamanho = strlen(str); // Mede o tamanho da string str e armazena o resultado em tamanho

    return tamanho; // Retorna o tamanho da string
}

// Função para copiar uma string para outra (Utilizando strcpy() da biblioteca string.h e ponteiros)
void CopiarString(char *str1, char *str2)
{
    strcpy(str1, str2); // Copia a string str2 para str1
}

// Função para copiar uma string para outra até um determinado número de caracteres (Utilizando strncpy() da biblioteca string.h e ponteiros)
void CopiarParteString(char *str1, char *str2, int n)
{
    strncpy(str1, str2, n); // Copia a string str2 para str1 até o n-ésimo caractere
}

// Função para concatenar duas strings (Utilizando strcat() da biblioteca string.h e ponteiros)
void ConcatenarString(char *str1, char *str2)
{
    strcat(str1, str2); // Concatena a string str2 na string str1
}

int main()
{
    char str1[15] = "ABCDE";
    char str2[15] = "FGHIJKL";
    char str3[15];
    int TAM, n = 3;

    TAM = MedirTamanhoString(str1);              // Chama a função MedirTamanhoString e passa str1 como parâmetro
    printf("====================================\n");
    printf("Tamanho da string str1: %d\n", TAM); // Mostra o tamanho da string str1
    printf("====================================\n");

    TAM = MedirTamanhoString(str2);              // Chama a função MedirTamanhoString e passa str2 como parâmetro
    printf("Tamanho da string str2: %d\n", TAM); // Mostra o tamanho da string str2
    printf("====================================\n");

    CopiarString(str3, str1);   // Chama a função CopiarString e passa str3 e str1 como parâmetros
    printf("str3: %s\n", str3); // Mostra o conteúdo da string str3
    printf("====================================\n");

    CopiarParteString(str3, str2, n); // Chama a função CopiarParteString e passa str3, str2 e n como parâmetros
    printf("str3: %s\n", str3);       // Mostra o conteúdo da string str3
    printf("====================================\n");

    ConcatenarString(str1, str2); // Chama a função ConcatenarString e passa str1 e str2 como parâmetros
    printf("str1: %s\n", str1);   // Mostra o conteúdo da string str1
    printf("====================================\n");

    return 0;
}