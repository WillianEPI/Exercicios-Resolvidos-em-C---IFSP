#include <stdio.h>
#include <stdlib.h>

// Mostra os diferentes uso de ponteiros e suas operações
// Ponteiros são variáveis que armazenam endereços de memória e permitem o acesso a essses endereços e alterar o conteúdo armazenado neles sem
// a necessidade de copiar o conteúdo para uma nova variável ou mudar a variavel original.

// Ponteiros:
// - São variáveis que armazenam endereços de memória
// - Permitem o acesso a esses endereços
// - Permitem alterar o conteúdo armazenado nesses endereços
// - Não são inicializados automaticamente
// - Devem ser inicializados antes de serem usados
// - Devem ser inicializados com o endereço de uma variável do mesmo tipo

// Operadores:
// - & (endereço de): Retorna o endereço de uma variável - Exemplo: &var
// - * (conteúdo de): Retorna o conteúdo de um endereço - Exemplo: *ptr

void display(int var, int *ptr) // A função display recebe uma variavel e um ponteiro para uma variavel do tipo int como parâmetros e imprime o conteudo e endereço de cada um
{
    printf("Conteudo Var = %d\n", var);  // Mostre o conteudo da variavel var
    printf("Endereco Var = %p\n", &var); // Mostre o endereco da variavel var

    printf("\nConteudo Ptr = %d\n", *ptr); // Mostra o conteudo apontado por ptr
    printf("Endereco Ptr = %p\n", ptr);    // Mostra o endereço de ptr
}

void update(int *ptr) // A função update recebe um ponteiro para uma variavel do tipo int como parâmetro e altera o conteudo apontado por ele
{
    *ptr = 35; // Altera o conteudo apontado por ptr

    printf("\nConteudo Ptr = %d\n", *ptr); // Mostra o novo conteudo apontado por ptr
    printf("Endereco Ptr = %p\n", ptr);    // Mostra o endereço de ptr
}
// Sim minha função faz mais de uma coisa, mas é só um exemplo.

int main()
{
    int var = 15;
    int *ptr; // Declara um ponteiro para uma variavel do tipo int

    ptr = &var; // Atribui o endereço de var a ptr

    display(var, ptr); // Chama a função display e passa var e ptr como parâmetros
    update(ptr);       // Chama a função update e passa ptr como parâmetro

    return 0;
}