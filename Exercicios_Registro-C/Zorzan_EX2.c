#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Crie uma estrutura para armazenar a ficha média de um paciente (peso, altura, idade). Em seguida,
declare uma variável para armazenar a informação de 35 pacientes e leia as informações dos 35
pacientes. Desenvolva uma função que calcule a média de idade dos pacientes que tenham peso menor
que p kg, onde p é o parâmetro da função.
*/

typedef struct Ficha_Paciente 
{
    int Idade;
    float Altura;
    float Peso;
}Ficha_Paciente ;

float Entrada(struct Ficha_Paciente Ficha[]){
int i;
float p;

    for (i = 0; i < 3; i++)
    {
        printf("Digite a idade do paciente %i:\n", i +1);
        scanf("%i", &Ficha[i].Idade);

        printf("Digite a altura do paciente %i:\n", i +1);
        scanf("%f", &Ficha[i].Altura);

        printf("Digite o peso do paciente %i:\n", i +1);
        scanf("%f", &Ficha[i].Peso);
        printf("\n---------------------------------------------------------------------------\n");
    }

        printf("Digite qual o peso para calcular a media de idade dos pacientes que tenham peso menor que p kg\n");
        scanf("%f", &p);

    return p;
}

void Calculo_Idade(struct Ficha_Paciente Ficha[], float p){
int i, Quantidade_Pessoas = 0, Soma_Idade = 0, Media = 0 ;

        for (i = 0; i < 3; i++)
        {
            if (Ficha[i].Peso < p)
            {
                Quantidade_Pessoas++; 
                Soma_Idade += Ficha[i].Idade;
            }
           
        }

        if (Quantidade_Pessoas > 1)
        {
            Media = Soma_Idade / Quantidade_Pessoas;
            printf("\n-----------------------------------------------------------------------------------------\n");
            printf("A media de idade dos pacientes com menos de  %.2fKG e %i anos", p, Media);
            printf("\n-----------------------------------------------------------------------------------------\n");
        }
        else
        {
            printf("\n-----------------------------------------------------------------------------------------\n");
            printf("Nao ha pacientes com peso menor que %.2f", p);
            printf("\n-----------------------------------------------------------------------------------------\n");
        }   
}

int main(){
Ficha_Paciente Ficha[3];
float p = 0;

p = Entrada(Ficha);
Calculo_Idade(Ficha, p);

}