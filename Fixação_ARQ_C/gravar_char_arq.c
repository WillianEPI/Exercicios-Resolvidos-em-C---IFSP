#include<stdio.h>

void main()
{
    FILE *fptr;
    fptr = fopen("teste.txt","a"); // abrir arquivo adicionando no final do arquivo 
    char ch;
    do
    {
       printf("digite um caractere <espaco finaliza>: ");
       fflush(stdin);
       scanf("%c",&ch);
       if (ch!=' ')
       {
           putc(ch, fptr);  // grava caractere no arquivo
       }
    }
    while (ch!=' ');
    putc(' ',fptr); // grava espa�o no arquivo, para que os proximos caracteres n�o fiquem juntos
    fclose(fptr); // fecha arquivo
}
