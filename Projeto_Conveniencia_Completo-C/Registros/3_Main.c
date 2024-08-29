// Autor: Willian Silva Done
// PE3022781
// ALP2(DP)

#include <stdio.h>
#include <string.h>
#include "1_Estoque.h"
#include "2_Vendas.h"
#define MAX_ESTOQUE 10
#define MAX_VENDAS 10

int main()
{
    Estoque estoque[MAX_ESTOQUE];
    Controle_Vendas Vendas[MAX_VENDAS];

    int opcao;

    do
    {

        printf("\n------------------------------------------------------------------------------------------\n");
        printf("*******************");
        printf("                          Menu:                     ");
        printf("*******************\n");
        printf("*******************");
        printf("              1. Inclusao de produtos               ");
        printf("*******************\n");
        printf("*******************");
        printf("              2. Alteracao dos dados de um produto  ");
        printf("*******************\n");
        printf("*******************");
        printf("              3. Pesquisar produto pelo codigo      ");
        printf("*******************\n");
        printf("*******************");
        printf("              4. Adicionar estoque                  ");
        printf("*******************\n");
        printf("*******************");
        printf("              5. Exibir Produtos                    ");
        printf("*******************\n");
        printf("*******************");
        printf("              6. Exibir Valor do estoque            ");
        printf("*******************\n");
        printf("*******************");
        printf("              7. Vender                             ");
        printf("*******************\n");
        printf("*******************");
        printf("              8. Vendas do produto no dia           ");
        printf("*******************\n");
        printf("*******************");
        printf("              9. Vendas de todos os produtos do dia ");
        printf("*******************\n");
        printf("*******************");
        printf("              10. Vendas do mes                     ");
        printf("*******************\n");
        printf("*******************");
        printf("              11. Sai                               ");
        printf("*******************\n");
        printf("------------------------------------------------------------------------------------------\n");
        printf("------------------------------------------------------------------------------------------\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            Adicionar_Produto(estoque);
            break;
        case 2:
            Alterar_Produto(estoque);
            break;
        case 3:
            Encontrar_Produto();
            break;
        case 4:
            Adicionar_Estoque(estoque);
            break;
        case 5:
            Exibir_Produtos(estoque);
            break;
        case 6:
            Valor_Estoque(estoque);
            break;
        case 7:
            Vender(Vendas, estoque);
            break;
        case 8:
            Total_Dia(Vendas, estoque);
            break;
        case 9:
            Mostrar_Vendas_Data(Vendas, estoque);
            break;
        case 10:
            Mostrar_Vendas_Mes(Vendas, estoque);
            break;
        case 11:
            printf("Saindo do programa. Obrigado!\n");
            break;
        default:
            printf("Opcao invalida. Por favor, escolha uma opcao valida.\n");
        }
    } while (opcao != 11);

    return 0;
}
