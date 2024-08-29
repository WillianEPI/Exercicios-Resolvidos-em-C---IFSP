#include <stdio.h>
#include <stdlib.h>

int opcao1(int vetor[]){
    int resultado, x = 2;
    resultado = 1 + vetor [x];
    return resultado;}

int opcao2(int vetor[]){
    int resultado, x = 2;
    resultado = 2 + vetor[x];
    return resultado;}

int opcao3(int vetor[]){
    int resultado, x = 2;
    resultado = 3 + vetor [x];
    return resultado;}

int opcao4(int vetor[]){
    int resultado, x = 2;
    resultado = 4 * vetor [x];
    return resultado;}

int opcao5(int vetor[]){
    int resultado, x = 2;
    resultado = 1 * vetor [x];
    return resultado;}

int opcao6(int vetor[]){
    int resultado, x = 2;
    resultado = 2 * vetor[x];
    return resultado;}

int opcao7(int vetor[]){
    int resultado, x = 2;
    resultado = 3 * vetor [x];
    return resultado;}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int opcao8(int vetor[]){
    int resultado, x = 2;
    resultado = x * vetor [2];
    return resultado;}

int opcao9(int vetor[]){
    int resultado, x = 2;
    resultado = x * vetor [2];
    return resultado;}

int opcao10(int vetor[]){
    int resultado, x = 2;
    resultado = x * vetor [2];
    return resultado;}

int opcao11(int vetor[]){
    int resultado, x = 2;
    resultado = x * vetor [2];
    return resultado;}

int opcao12(int vetor[]){
    int resultado, x = 2;
    resultado = x * vetor [2];
    return resultado;}

int opcao13(int vetor[]){
    int resultado, x = 2;
    resultado = x * vetor [2];
    return resultado;}

int opcao14(int vetor[]){
    int resultado, x = 2;
    resultado = x * vetor [2];
    return resultado;}



void main () {

int vetor[9] = {2, 6, 8, 3, 10, 9, 1, 21, 33, 14}, opcao, resultado;


printf("\nEscolha umas das opcoes abaixo:\n\n");
printf("1 -  V[X+1]\n");
printf("2 -  V[X+2]\n");
printf("3 -  V[X+3]\n");
printf("4 -  V[X*4]\n");
printf("5 -  V[X*1]\n");
printf("6 -  V[X*2]\n");
printf("7 -  V[X*3]\n");
printf("8 -  V[V[X+Y]]\n");
printf("9 -  V[X+Y]\n");
printf("10 - V[8-V[2]]\n");
printf("11 - V[V[4]]\n");
printf("12 - V[V[V[7]]]\n");
printf("13 - V[V[1]*V[4]]\n");
printf("14 - V[X+4]\n\n");

scanf("%d", &opcao);

switch (opcao){
    case  1:
resultado = opcao1(vetor);
printf("O resultado e: %d",resultado);
break;

    case 2:
resultado = opcao2(vetor);
printf("O resultado e: %d", resultado);
break;

    case 3:
resultado = opcao3(vetor);
printf("O resultado e: %d", resultado);
break;

 case 4:
resultado = opcao4(vetor);
printf("O resultado e: %d", resultado);
break;

 case 5:
resultado = opcao5(vetor);
printf("O resultado e: %d", resultado);
break;

 case 6:
resultado = opcao6(vetor);
printf("O resultado e: %d", resultado);
break;

 case 7:
resultado = opcao7(vetor);
printf("O resultado e: %d", resultado);
break;

case 8:
resultado = opcao7(vetor);
printf("O resultado e: %d", resultado);
break;

case 9:
resultado = opcao7(vetor);
printf("O resultado e: %d", resultado);
break;

case 10:
resultado = opcao7(vetor);
printf("O resultado e: %d", resultado);
break;

case 11:
resultado = opcao7(vetor);
printf("O resultado e: %d", resultado);
break;

case 12:
resultado = opcao7(vetor);
printf("O resultado e: %d", resultado);
break;

case 13:
resultado = opcao7(vetor);
printf("O resultado e: %d", resultado);
break;

case 14:
resultado = opcao7(vetor);
printf("O resultado e: %d", resultado);
break;

default:
    printf("Opcao invalida.\n");}

    
}
