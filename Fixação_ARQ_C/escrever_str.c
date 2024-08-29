//escrevendo uma string em um arquivo
#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *arq;
    char str[81] = ""; // inicializando a string com vazio
    arq = fopen("texto.txt","a");  // se quiser adicionar troca “w” por “a”
    printf("Digite uma string: ");
    fgets(str,80,stdin);
    fputs(str,arq);  // coloca (grava) a string digitada no arquivo
    fputs("\n",arq);  // coloca (grava) um pula linha no arquivo
    fclose(arq);
}

