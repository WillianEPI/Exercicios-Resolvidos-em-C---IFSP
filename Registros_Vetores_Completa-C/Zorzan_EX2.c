#include <stdio.h>

/*Escreva um programa que seja capaz de armazenar dados de um estacionamento. Use uma
struct para armazenar a placa e o modelo de um carro, assim como o horário de entrada e
saída do estacionamento, com horas e minutos. Defina e preencha uma variável do tipo da
struct (= 1 carro), e mostre os dados do carro junto com o valor devido ao estacionamento
(preços: R$5,00 a primeira hora, R$2,00 para cada hora extra, valores proporcionais ao
tempo para horas incompletas).
*/

typedef struct sHorario{
    int hora;
    int minuto;
}HORARIO;

typedef struct sCarro{
    char placa[30];
    char modelo[30];
    HORARIO hora_entrada;
    HORARIO hora_saida;
}CARRO;

CARRO ler_dados(){
    CARRO xpto;
    printf("Digite a placa do carro: ");
    scanf("%[^\n]",xpto.placa );
    fflush(stdin);
    printf("Digite o modelo do carro: ");
    scanf("%[^\n]",xpto.modelo);
    fflush(stdin);
    printf("Hora de entrada: ");
    scanf("%d",&xpto.hora_entrada.hora);
    fflush(stdin);
    printf("Minutos de entrada: ");
    scanf("%d",&xpto.hora_entrada.minuto);
    fflush(stdin);
    printf("Hora de saida: ");
    scanf("%d",&xpto.hora_saida.hora);
    fflush(stdin);
    printf("Minuto de saida: ");
    scanf("%d",&xpto.hora_saida.minuto);
    fflush(stdin);
    return xpto;
}

void exibir_dados(CARRO carro){
    printf("\n\n*** Dados cadastrados ***");
    printf("\nPlaca: %s",carro.placa);
    printf("\nModelo: %s",carro.modelo);
    printf("\nHorario de entrada: %d:%d",carro.hora_entrada.hora,carro.hora_entrada.minuto);
    printf("\nHorario de saida: %d:%d", carro.hora_saida.hora,carro.hora_saida.minuto);
}

int main (){
    CARRO carro;
    float valor_hora = 5.0;
    float valor_minuto = valor_hora / 60;
    float valor_hora_add = 2.0;
    float valor_minuto_add = valor_hora_add / 60;
    float valor_cobranca;
    int minutos, horas;

    carro = ler_dados();
    /// Quando � menor que uma hora
    if((carro.hora_saida.hora - carro.hora_entrada.hora) < 1){
       valor_cobranca = (carro.hora_saida.minuto - carro.hora_entrada.minuto) * valor_minuto;
    }
    
    else
    { /// quando � maior que uma hora e minuto de sa�da menor que entrada

        if(carro.hora_saida.minuto < carro.hora_entrada.minuto)
        {
            minutos = (60 + carro.hora_saida.minuto) - carro.hora_entrada.minuto;
            horas = carro.hora_saida.hora - carro.hora_entrada.hora - 1;

            if(horas < 1)
                valor_cobranca = minutos * valor_minuto;
                
            else
            {
                valor_cobranca = valor_hora + ((horas - 1) * valor_hora_add) + (minutos * valor_minuto_add);
            }
        }

    }



    exibir_dados(carro);
    printf("\nValor da cobranca: R$ %.2f",valor_cobranca);
}
