#include <stdio.h>
void main()
{
    FILE *arq;
    char frase[20];
    char *retorno; // ponteiro para verificar se o conteúdo da frase é nulo
    arq =fopen("arquivo.txt","r");
    if (arq !=NULL) // verifica se não ocorreu erro na abertura do arquivo
    {
        do
        {
            retorno = fgets(frase,20,arq); // verifica se a frase não é vazia
            if (retorno!=NULL)
            {
                printf("%s",frase); // apresenta na tela a frase
            }
        }
        while (retorno !=NULL);
        fclose(arq);  // fechar arquivo
    }
    else
    {
        printf("\nerro ao abrir o arquivo");
    }
}
