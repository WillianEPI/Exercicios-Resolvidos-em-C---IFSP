#include <stdio.h>
void main()
{
    FILE *arq;
    char frase[20];
    arq =fopen("arquivo.txt","r");  // abre o arquivo para leitura (deve existir)
    if (arq == NULL) // verifica se não ocorreu erro na abertura do arquivo para leitura
    {
        printf("\nErro ao abrir o arquivo para leitura .. \n"); // apresenta msg
        arq =fopen("arquivo.txt","w");  // abre o arquivo, criando-o vazio para gravação
    }
    // independente de ter aberto o arquivo para leitura (r) ou gravação (w), segue o programa
    while(fgets(frase,20,arq)!=NULL) // verifica se a frase não é vazia
    {
        printf("%s",frase); // apresenta na tela a frase
        fflush(stdin); // limpa o buffer do teclado
    }
    fclose(arq);  // fecha arquivo
}
