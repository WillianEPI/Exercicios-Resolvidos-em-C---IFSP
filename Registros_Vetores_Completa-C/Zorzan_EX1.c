#include <stdio.h>

/*Fazer um programa que receba três nomes de no máximo 15 caracteres cada um (nomes
com mais de 15 caracteres devem ser rejeitados) e as idades das respectivas pessoas em um
vetor. Após o recebimento, listar os 3 nomes e idades que nela foram armazenados.*/

typedef struct sPessoa{
    int numero_inscricao;
    char nome_departamento[50];
    float horas_trabalhadas;
    float horas_extras;
}Pessoa;

Pessoa ler_dados(){
    Pessoa x;
    printf("Digite o numero de inscricao: ");
    scanf("%d",&x.numero_inscricao);
    fflush(stdin);
    printf("Digite o nome do departamento: ");
    scanf("%[^\n]",x.nome_departamento);
    fflush(stdin);
    printf("Digite as horas trabalhadas: ");
    scanf("%f",&x.horas_trabalhadas);
    fflush(stdin);
    printf("Digite as hotas extras: ");
    scanf("%f",&x.horas_extras);
    fflush(stdin);
    return x;
}

void ler_dados2(Pessoa *pes){
    printf("Digite o numero de inscricao: ");
    scanf("%d",&(*pes).numero_inscricao);
    fflush(stdin);
    printf("Digite o nome do departamento: ");
    scanf("%[^\n]",(*pes).nome_departamento);
    fflush(stdin);
    printf("Digite as horas trabalhadas: ");
    scanf("%f",&pes->horas_trabalhadas);
    fflush(stdin);
    printf("Digite as hotas extras: ");
    scanf("%f",&pes->horas_extras);
    fflush(stdin);
}



void exibir_dados(Pessoa pes, float salario){
    printf("\n\n*****************");
    printf("\nN. inscricao: %d\nNome departamento: %s\nHoras Trabalhadas: %.1f\nHoras extras: %.1f\nSalario: R$ %.2f",
           pes.numero_inscricao, pes.nome_departamento, pes.horas_trabalhadas,
           pes.horas_extras, salario);
}

float calcular_salario(Pessoa pes){
    float salario;
    salario = (pes.horas_trabalhadas * 40.0) + (pes.horas_extras * 60.0);
    return salario;
}

main(){
    Pessoa pessoa1, pessoa2;
    float salario;

    pessoa1 = ler_dados();

    ler_dados2(&pessoa2); /// usando passagem de par�metro por refer�ncia

    salario = calcular_salario(pessoa1);
    exibir_dados(pessoa1,salario);

    salario = calcular_salario(pessoa2);
    exibir_dados(pessoa2,salario);

}
