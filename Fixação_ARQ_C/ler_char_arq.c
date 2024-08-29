// lendo caractere por caractere em um arquivo

#include<stdio.h>

void main()
{
    FILE *fptr;
    fptr = fopen("teste.txt","r");
    char ch;
    do
    {
        ch = getc(fptr); // obtendo o caractere do arquivo
        if (ch !=EOF)  // se o caractere não foi marcação de final de arquivo (EOF)
        {
              printf("%c",ch); // apresentar na tela
        }
    } while (ch !=EOF);
    fclose(fptr); // fechar arquivo
}
