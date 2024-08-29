#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Matriz_Inicial(int matriz[10][10]){
int i, w;

    for (i = 0; i < 10; i++)
    {
        for (w= 0; w < 10; w++)
        {
            matriz[i][w] = 0;
        }
    }
}

void Alimentando_Matriz(int matriz[10][10]){
int i;
int linha = 0, coluna = 0;
 srand(time(NULL));

    for (i = 2; i < 22; i++)
    {
        coluna = rand() % 10;
        linha = rand() % 10;

        if (matriz[linha][coluna] == 0)
        {
            matriz[linha][coluna] = rand() % 19 + 2;
        }
        else
        {
            i--;
        }
    }
}

int Iniciando_Jogo(int matriz[10][10], int *pontos_usuario){
int posicao[1][2];
int linha = 0, coluna = 0;

        printf("Digite a linha que deseja atacar MARUJO!!!!\n");
        scanf("%d", &posicao[0][0]);
        printf("----------------------------------------------------------------");

        printf("\nAgora digite a coluna que deseja atacar, e VAMOS PRA CIMA HAHAHAHAHAHAHAHA!!\n");
        scanf("%d", &posicao[0][1]);
        printf("----------------------------------------------------------------\n\n");

            if (posicao[0][0] >= 1 && posicao[0][0] <= 10 && posicao[0][1] >= 1 && posicao[0][1] <= 10) 
            {
                linha =  posicao[0][0] - 1;
                coluna = posicao[0][1] - 1;

                if (matriz[linha][coluna] != 0)
                {
                    printf("----------------------------------------------------------------");
                    printf("\n E TUDO nosso e NADA deles HAHAHAHAHAHAAHAHA!!!\n");
                    printf("\nACERTOU!!!\n");
                    *pontos_usuario += matriz[linha][coluna];
                    matriz[linha][coluna] = -1;
                    printf("----------------------------------------------------------------\n\n");
                }
                else
                {
                    printf("----------------------------------------------------------------");
                    printf("\nMALDITOS eles sao muito rapidos vamos recarregar para o proximo ataque!!!!!\n");
                    printf("\nERROU!!!\n");
                    printf("----------------------------------------------------------------\n\n");
                }
            }
            else
            {   
                printf("----------------------------------------------------------------");
                printf("\nPosicao invalida MARUJO, esta bebado no meio da batalha??? HAHAHAHAHA, vamos tentar novamente!!!!\n");
                printf("----------------------------------------------------------------\n\n");
            }
    return *pontos_usuario;
}

int Predator_Ataca(int matriz[10][10], int *pontos_predator){
int linha = 0, coluna = 0;

    do
    {   
        linha = rand() % 10;
        coluna = rand() % 10;
        
    } while (matriz[linha][coluna] == -1);

        printf("----------------------------------------------------------------");
        printf("\nAGORA e minha vez HAHAHAHAHAHAAHAHA!!!\n");
        printf("\nEu estou mirando na posicao (%d, %d). AGORA VOCE NAO ME ESCAPA HAHAHAHAHAHAHAHAHA!!!!!!\n", linha + 1, coluna + 1);
        printf("----------------------------------------------------------------\n\n");
        
        if (matriz[linha][coluna] != 0)
        {
            printf("----------------------------------------------------------------");
            printf("\nEU SOU INEVITAVEL, RECEBA!!!!!!!\n");
            printf("\nACERTOU!!!\n");
            *pontos_predator += matriz[linha][coluna];
            matriz[linha][coluna] = -1;
            printf("----------------------------------------------------------------\n\n");
        }
        else
        {
            printf("----------------------------------------------------------------");
            printf("\nMALDITO, porque fui inventar de beber RUM justo hoje!!!!!!!\n");
            printf("\nERROU!!\n");
            printf("----------------------------------------------------------------\n\n");
        }

    return *pontos_predator;
}

void Mapa(int matriz[10][10]){
int i, w;

    printf("----------------------------------------------------------------");
    printf("\nMapa atual (X e quando o alvo e atingio):\n");
    for (i = 0; i < 10; i++) {
        for (w = 0; w < 10; w++) {
            if (matriz[i][w] == -1) {
                printf("X "); 
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
    printf("----------------------------------------------------------------\n\n");
}

void Resultado_Campeao(int pontos_predator, int pontos_usuario){

    if (pontos_predator > pontos_usuario)
    {
        printf("----------------------------------------------------------------");
        printf("\nFoi facil de mais HAHAHA ate bebado GANHO DE VOCE HAHAHAHAHAHA!!!\n");
        printf("\nDERROTA!!!\n");
        printf("----------------------------------------------------------------\n\n");
    }
    else
    {
        printf("----------------------------------------------------------------");
        printf("\nPARABENS VOCE DESTRUIU O INIMIGO!!!!\n");
        printf("\nVITORIA!!!!!\n");
        printf("----------------------------------------------------------------\n\n");
    }
}

void Executar_Jogo(int matriz[10][10]) {
int rodadas = 0;
int total_rodadas = 19;
int pontos_usuario = 0;
int pontos_predator = 0;

    while (rodadas <= total_rodadas) {
        printf("\nRodada %d\n", rodadas + 1);
        Iniciando_Jogo(matriz, &pontos_usuario);
        Predator_Ataca(matriz, &pontos_predator);
        Mapa(matriz);
        rodadas++;
    }

    Resultado_Campeao(pontos_predator, pontos_usuario);
}

int main(){
int matriz[10][10];

Matriz_Inicial(matriz);
Alimentando_Matriz(matriz);
Executar_Jogo(matriz);

    return 0; 
}