#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define linha 3
#define comprimento 50

void Entra(char lista[linha][comprimento] ){
int i;

    printf("Digite ate 10 nomes para fazermos a lista:");
    for ( i = 0; i < 3; i++)
    {
        printf("\nNome %d:\n", i + 1);
        fgets(lista[i], comprimento, stdin);
    }
    fflush(stdin);
    getchar();
}

void Numero_de_Nomes_Com_Letra_iguais(char lista[linha][comprimento]){
int i, j;
int contador = 0;
char letra, letra_minuscula, lista_minuscula[linha][comprimento];

        for (i = 0; i < linha; i++) 
        {
            strcpy(lista_minuscula[i], lista[i]);

            for (j = 0; j<= strlen(lista_minuscula[i]); j++) 
            {
            lista_minuscula[i][j] = tolower(lista_minuscula[i][j]); 
            }
        }

    printf("\n------------------------------------------------------------\n"); 
    printf("Digite uma letra para definir a quantidade de pessoas que os nomes iniciam com essa letra:");
    scanf(" %c" , &letra);
    letra_minuscula = tolower(letra);


        for (i = 0; i < linha; i++)
        {
            if (lista_minuscula[i][0] == letra_minuscula)
            {
                contador += 1;
            }
        }
    
    printf("\n------------------------------------------------------------\n"); 
    printf("Existem %i nomes que comecam com a letra %c", contador, letra);
    printf("\n------------------------------------------------------------\n"); 

}

void Posicao_nome(char lista[linha][comprimento]){
int i, j, k, posicao = 0, nome_encontrado = 0, achou = 0;
char nome_procurado[comprimento];
char nome_procurado_minusculo[comprimento];
char lista_minusculo[linha][comprimento];

   for (i = 0; i < linha; i++) 
   {
        strcpy(lista_minusculo[i], lista[i]);

        for (j = 0; j < strlen(lista_minusculo[i]); j++) 
        {
            lista_minusculo[i][j] = tolower(lista_minusculo[i][j]);
        }
   }
    
    printf("\n------------------------------------------------------------\n"); 
    printf("Digite qual nome deseja encontrar na lista:");
    fgets(nome_procurado, comprimento, stdin);

        for ( k = 0; nome_procurado[k]; k++) 
        {
            nome_procurado_minusculo[k] = tolower(nome_procurado[k]);
        }

        nome_procurado_minusculo[k] = '\0';

        for (i = 0; i < linha && !achou; i++) 
        {
            if (strcmp(nome_procurado_minusculo, lista_minusculo[i]) == 0) 
            {
                posicao = i + 1;
                nome_encontrado = 1;
                achou = 1;
            }
        }

        if (nome_encontrado == 1)
        {
            printf("\n------------------------------------------------------------\n"); 
            printf("A posicao do nome e: %i ", posicao);
            printf("\n------------------------------------------------------------\n"); 
        }
        else
        {
            printf("O nome nao foi encontrado!!");
        }
}

int main (){
char lista[linha][comprimento];


Entra(lista);
Numero_de_Nomes_Com_Letra_iguais(lista);
Posicao_nome(lista);



    return 0;
}