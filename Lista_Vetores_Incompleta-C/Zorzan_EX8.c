#include <stdio.h>

void entrada(float *Numero) {
    printf("Digite um numero fracionado (ex: 6.89) para transformar em binario:\n");
    scanf("%f", Numero);
}

void Exibir_Inteiros(int Parte_Inteira) {
    int i;

    for (i = 7; i >= 0; i--) { 
        if (Parte_Inteira & (1 << i)) {
            printf("1");
        } else {
            printf("0");
        }
    }
}

void Exibir_Fracionarios(float Parte_Fracionaria) {
    int i;

    printf(".");
    
    for (i = 0; i < 8; i++) { 
        Parte_Fracionaria *= 2;
        if (Parte_Fracionaria >= 1) {
            printf("1");
            Parte_Fracionaria -= 1;
        } else {
            printf("0");
        }
    }
}

void exibir(float Numero) {
    int Parte_Inteira = (int)Numero;
    float Fracionada = Numero - Parte_Inteira;

    printf("O numero fracionado em binario e: ");
    Exibir_Inteiros(Parte_Inteira); 
    Exibir_Fracionarios(Fracionada); 
}

void Exibir_Binario(float Numero) {
    int Parte_Inteira = (int)Numero;
    float Parte_Fracionaria = Numero - Parte_Inteira;
    int mantissa = 0, i;
    int expoente = 0;

    printf("O numero fracionado em binario e: ");
    printf("0");

    while (Parte_Inteira >= 2) {
        Parte_Inteira /= 2;
        expoente++;
    }

    Exibir_Inteiros(expoente);

    printf(".");

    for (i = 0; i < 4; i++) {
        Parte_Fracionaria *= 2;
        if (Parte_Fracionaria >= 1) {
            mantissa |= (1 << (3 - i)); 
            Parte_Fracionaria -= 1;
        }
    }

    Exibir_Inteiros(mantissa);

    printf(" x 10^%d\n", expoente);
}

int main() {
    float Numero = 0;

    entrada(&Numero); 
    exibir(Numero);
    Exibir_Binario(Numero);

    return 0;
}
