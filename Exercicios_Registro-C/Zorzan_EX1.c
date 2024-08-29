#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Defina uma estrutura para armazenar o cadastro de funcionários de uma empresa contendo o
número de inscrição do funcionário, o departamento, horas de trabalho e horas extras em cada dia do
mês. Em seguida, declare dois funcionários e faça as seguintes funções:
a) leitura dos dados;
b) cálculo do salario de cada funcionário, sabendo que ele ganha 40,00 para cada hora trabalhada e
60,00 para cada hora extra trabalhada;
c) apresentação dos dados.*/

typedef struct Funcionarios_Empresas 
{
    int Num_Inscricao;
    int departamento;
    float Horas_trabalho;
    float Hora_extra;
    int dia;
    int mes;
}Funcionarios_Empresas ;

void Entrada(struct Funcionarios_Empresas lista[]){
int i;

    for (i = 0; i < 2; i++)
    {
        printf("Digite o numero de inscricao do funcionario %i:\n", i +1);
        scanf("%i", &lista[i].Num_Inscricao);


        printf("Digite o departamento do funcionario %i:\n", i +1);
        scanf("%i", &lista[i].departamento);

        printf("Digite o numero de horas que o funcionario %i trabalhou:\n", i +1);
        scanf("%f", &lista[i].Horas_trabalho);

        printf("Digite o numero de horas extras do funcionario %i trabalhou:\n", i +1);
        scanf("%f", &lista[i].Hora_extra);

        printf("Digite o qual dia e qual mes que o funcionario %i trabalhou:\n", i +1);
        scanf("%i %i", &lista[i].dia, &lista[i].mes);
        printf("\n---------------------------------------------------------------------------\n");
    }
}

void Calculo_Salario(struct Funcionarios_Empresas lista[], float Salario[]){
int i;

    for (i = 0; i < 2; i++)
    {
        Salario[i] = (lista[i].Horas_trabalho * 40) + (lista[i].Hora_extra * 60);
    }
}

void Exibir(struct Funcionarios_Empresas lista[], float Salario[]){
int i;

    printf("\n\n--------------------------------------------------------------------------------\n");
    for (i = 0; i < 2; i++)
    {
        printf("O funcionario %i, seu numero de inscricao é %i, trabalho no departamento %i.\n",  i + 1, lista[i].Num_Inscricao, lista[i].departamento);
        printf("Devera receber %.2f por trabalhar no dia %i do mes %i.\n", Salario[i], lista[i].dia, lista[i].mes);
        printf("\n\n--------------------------------------------------------------------------------\n");
    }
}

int main (){
Funcionarios_Empresas lista[2];
float Salario[2];

Entrada(lista);
Calculo_Salario(lista, Salario);
Exibir(lista, Salario);

    return 0;
}
