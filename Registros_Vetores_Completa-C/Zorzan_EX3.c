#include <stdio.h>

/*Escreva uma função que recebe 2 parâmetros do tipo Horario (com campos para hora,
minutos e segundos), h1 e h2, e retorna o número de segundos passados entre h1 e h2,
supondo que h2 ocorre depois de h1. Codifique um programa que seja capaz de testar essa
função.*/

typedef struct Horarios 
{
    int Hora;
    int Minutos;
    int Segundos;
} Horarios ;

int Calcular_Segundos (struct Horarios h1, struct Horarios h2){
int segundos_h1, segundos_h2;
int resposta;

    segundos_h1 = h1.Hora * 3600 + h1.Minutos * 60 + h1.Segundos;
    segundos_h2 = h2.Hora * 3600 + h2.Minutos * 60 + h2.Segundos;
    resposta = segundos_h2 - segundos_h1;    

return resposta;  
}

void Saida(int resposta){

printf("A diferenca de segundos entre o horario inicial e o final e:\n");
printf("%i seg\n", resposta);

}

int main(){

struct Horarios h1 = {10, 30, 25};
struct Horarios h2 = {12, 11, 43};
int resposta;

resposta = Calcular_Segundos(h1, h2);
Saida(resposta);

}
