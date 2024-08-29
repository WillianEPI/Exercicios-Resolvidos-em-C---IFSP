// Autor: Willian Silva Done
// PE3022781
// ALP2(DP)

#include <stdio.h>
#include <string.h>
#define MAX_VENDAS 10

typedef struct Controle_Vendas
{
    float Valor_Venda;
    int dia;
    int mes;
    int ano;
    int Codigo_prod;
    int Qtd_vendida;

} Controle_Vendas;
// Função para realizar vendas OKAY
void Vender(Controle_Vendas Vendas[], Estoque estoque[])
{
    int i = 0, w, x;

    FILE *arquivo_estoque = fopen("Estoque.txt", "r");
    if (arquivo_estoque == NULL)
    {
        printf("Erro ao abrir o arquivo de estoque.\n");
        return;
    }

    while (fscanf(arquivo_estoque, "%s %i %f %i", estoque[i].Nome_Prod, &estoque[i].Codigo, &estoque[i].Preco, &estoque[i].Quantidade) != EOF)
    {
        i++;
    }
    fclose(arquivo_estoque);

    printf("----------------------------------------------\n");
    printf("Digite o dia que foi realizada a venda: ");
    scanf("%i", &Vendas[i].dia);
    printf("Digite o mes que foi realizada a venda: ");
    scanf("%i", &Vendas[i].mes);
    printf("Digite o ano que foi realizada a venda: ");
    scanf("%i", &Vendas[i].ano);
    printf("Digite o codigo do produto que foi vendido: ");
    scanf("%i", &Vendas[i].Codigo_prod);
    printf("----------------------------------------------\n");

    for (w = 0; w < i; w++)
    {
        if (Vendas[i].Codigo_prod == estoque[w].Codigo)
        {
            printf("Digite qual foi a quantidade vendida do produto %s: ", estoque[w].Nome_Prod);
            scanf("%i", &Vendas[i].Qtd_vendida);

            if (Vendas[i].Qtd_vendida > estoque[w].Quantidade)
            {
                printf("----------------------------------------------\n");
                printf("A quantidade vendida e maior do que a disponivel em estoque!\n");
                printf("Produto: %s | Quantidade em estoque: %i\n", estoque[w].Nome_Prod, estoque[w].Quantidade);
                printf("----------------------------------------------\n");
                return;
            }

            Vendas[i].Valor_Venda = Vendas[i].Qtd_vendida * estoque[w].Preco;

            printf("O valor total da compra: %.2f\n", Vendas[i].Valor_Venda);

            estoque[w].Quantidade -= Vendas[i].Qtd_vendida;

            break;
        }
    }

    if (w == i)
    {
        printf("----------------------------------------------\n");
        printf("Codigo do produto nao cadastrado!\n");
        printf("----------------------------------------------\n");
        return;
    }

    FILE *arquivo_vendas = fopen("Vendas.txt", "a");
    if (arquivo_vendas == NULL)
    {
        printf("Erro ao abrir o arquivo de vendas.\n");
        return;
    }

    fprintf(arquivo_vendas, "%.2f %i %i %i %i %i\n", Vendas[i].Valor_Venda, Vendas[i].dia, Vendas[i].mes, Vendas[i].ano, Vendas[i].Codigo_prod, Vendas[i].Qtd_vendida);
    fclose(arquivo_vendas);

    FILE *arquivo_estoque_saida = fopen("Estoque.txt", "w");
    if (arquivo_estoque_saida == NULL)
    {
        printf("Erro ao abrir o arquivo de estoque para escrita.\n");
        return;
    }

    for (x = 0; x < i; x++)
    {
        fprintf(arquivo_estoque_saida, "%s\n %i %.2f %i\n", estoque[x].Nome_Prod, estoque[x].Codigo, estoque[x].Preco, estoque[x].Quantidade);
    }
    fclose(arquivo_estoque_saida);
}

// Função para mostrar todas as vendas de um produto no dia OKAY
void Total_Dia(Controle_Vendas Vendas[], Estoque estoque[])
{
    int i = 0, j = 0, w;
    int T_Dia = 0, T_Mes = 0, T_Ano = 0, T_Codigo = 0;
    float Soma_dia = 0;

    FILE *arquivo_estoque = fopen("Estoque.txt", "r");
    if (arquivo_estoque == NULL)
    {
        printf("Erro ao abrir o arquivo de estoque.\n");
        return;
    }

    while (fscanf(arquivo_estoque, "%s %i %f %i", estoque[i].Nome_Prod, &estoque[i].Codigo, &estoque[i].Preco, &estoque[i].Quantidade) != EOF)
    {
        i++;
    }

    fclose(arquivo_estoque);

    FILE *arquivo_vendas = fopen("Vendas.txt", "r");
    if (arquivo_vendas == NULL)
    {
        printf("Erro ao abrir o arquivo de vendas.\n");
        return;
    }

    while (fscanf(arquivo_vendas, "%f %i %i %i %i %i", &Vendas[j].Valor_Venda, &Vendas[j].dia, &Vendas[j].mes, &Vendas[j].ano, &Vendas[j].Codigo_prod, &Vendas[j].Qtd_vendida) != EOF)
    {
        j++;
    }

    fclose(arquivo_vendas);

    printf("\n----------------------------------------------\n");
    printf("Digite o dia: ");
    scanf("%i", &T_Dia);

    printf("Digite o mes: ");
    scanf("%i", &T_Mes);

    printf("Digite o ano: ");
    scanf("%i", &T_Ano);

    printf("Digite o codigo do produto: ");
    scanf("%i", &T_Codigo);
    printf("\n----------------------------------------------\n");

    printf("\n----------------------------------------------\n");
    printf("Vendas do produto %i na data %i/%i/%i:\n", T_Codigo, T_Dia, T_Mes, T_Ano);
    printf("----------------------------------------------\n");

    for (w = 0; w < j; w++)
    {
        if (T_Codigo == Vendas[w].Codigo_prod && T_Dia == Vendas[w].dia && T_Mes == Vendas[w].mes && T_Ano == Vendas[w].ano)
        {
            printf("Data: %i/%i/%i | Quantidade: %i | Valor: %.2f$\n", Vendas[w].dia, Vendas[w].mes, Vendas[w].ano, Vendas[w].Qtd_vendida, Vendas[w].Valor_Venda);
            Soma_dia += Vendas[w].Valor_Venda;
        }
    }

    if (Soma_dia > 0)
    {
        printf("----------------------------------------------\n");
        printf("Valor total vendido do produto %s no dia %i/%i/%i: %.2f$\n", estoque[w].Nome_Prod, T_Dia, T_Mes, T_Ano, Soma_dia);
        printf("----------------------------------------------\n");
    }
    else
    {
        printf("----------------------------------------------\n");
        printf("Nao foram encontradas vendas do produto %s na data %i/%i/%i.\n", estoque[w].Nome_Prod, T_Dia, T_Mes, T_Ano);
        printf("----------------------------------------------\n");
    }
}

// Função para exibir todas as vendas do dia OKAY
void Mostrar_Vendas_Data(Controle_Vendas Vendas[], Estoque estoque[])
{
    int i = 0, j = 0;
    int T_Dia = 0, T_Mes = 0, T_Ano = 0;
    float Total_Vendas = 0;

    FILE *arquivo_estoque = fopen("Estoque.txt", "r");
    if (arquivo_estoque == NULL)
    {
        printf("Erro ao abrir o arquivo de estoque.\n");
        return;
    }

    while (fscanf(arquivo_estoque, "%s %i %f %i", estoque[i].Nome_Prod, &estoque[i].Codigo, &estoque[i].Preco, &estoque[i].Quantidade) != EOF)
    {
        i++;
    }

    fclose(arquivo_estoque);

    FILE *arquivo_vendas = fopen("Vendas.txt", "r");
    if (arquivo_vendas == NULL)
    {
        printf("Erro ao abrir o arquivo de vendas.\n");
        return;
    }

    while (fscanf(arquivo_vendas, "%f %i %i %i %i %i", &Vendas[j].Valor_Venda, &Vendas[j].dia, &Vendas[j].mes, &Vendas[j].ano, &Vendas[j].Codigo_prod, &Vendas[j].Qtd_vendida) != EOF)
    {
        j++;
    }

    fclose(arquivo_vendas);

    printf("\n----------------------------------------------\n");
    printf("Digite o dia: ");
    scanf("%i", &T_Dia);

    printf("Digite o mes: ");
    scanf("%i", &T_Mes);

    printf("Digite o ano: ");
    scanf("%i", &T_Ano);
    printf("\n----------------------------------------------\n");

    printf("\n----------------------------------------------\n");
    printf("Vendas realizadas na data %i/%i/%i:\n", T_Dia, T_Mes, T_Ano);
    printf("----------------------------------------------\n");

    for (i = 0; i < j; i++)
    {
        if (T_Dia == Vendas[i].dia && T_Mes == Vendas[i].mes && T_Ano == Vendas[i].ano)
        {
            int codigo = Vendas[i].Codigo_prod;
            char nome_produto[50];

            for (int k = 0; k < MAX_ESTOQUE; k++)
            {
                if (codigo == estoque[k].Codigo)
                {
                    strcpy(nome_produto, estoque[k].Nome_Prod);
                    break;
                }
            }
            printf("Produto: %s  | Quantidade: %i  | Valor: %.2f$\n", nome_produto, Vendas[i].Qtd_vendida, Vendas[i].Valor_Venda);
            Total_Vendas += Vendas[i].Valor_Venda;
        }
    }

    if (Total_Vendas > 0)
    {
        printf("----------------------------------------------\n");
        printf("Total vendido nessa data: %.2f$\n", Total_Vendas);
        printf("----------------------------------------------\n");
    }
    else
    {
        printf("----------------------------------------------\n");
        printf("Nao foram encontradas vendas na data especificada.\n");
        printf("----------------------------------------------\n");
    }
}

// Funçao para exibir todas as vendas do mes OKAY
void Mostrar_Vendas_Mes(Controle_Vendas Vendas[], Estoque estoque[])
{
    int T_Mes = 0, T_Ano = 0;
    float Total_Vendas = 0;

    printf("\n----------------------------------------------\n");
    printf("Digite o mes: ");
    scanf("%i", &T_Mes);

    printf("Digite o ano: ");
    scanf("%i", &T_Ano);
    printf("\n----------------------------------------------\n");

    printf("\n----------------------------------------------\n");
    printf("Vendas realizadas no mes %i/%i:\n", T_Mes, T_Ano);
    printf("----------------------------------------------\n");

    FILE *arquivo_estoque = fopen("Estoque.txt", "r");
    if (arquivo_estoque == NULL)
    {
        printf("Erro ao abrir o arquivo de estoque.\n");
        return;
    }

    int i = 0;
    while (fscanf(arquivo_estoque, "%s %i %f %i", estoque[i].Nome_Prod, &estoque[i].Codigo, &estoque[i].Preco, &estoque[i].Quantidade) != EOF)
    {
        i++;
    }

    fclose(arquivo_estoque);

    FILE *arquivo_vendas = fopen("Vendas.txt", "r");
    if (arquivo_vendas == NULL)
    {
        printf("Erro ao abrir o arquivo de vendas.\n");
        return;
    }

    i = 0;
    while (fscanf(arquivo_vendas, "%f %i %i %i %i %i", &Vendas[i].Valor_Venda, &Vendas[i].dia, &Vendas[i].mes, &Vendas[i].ano, &Vendas[i].Codigo_prod, &Vendas[i].Qtd_vendida) != EOF)
    {
        if (T_Mes == Vendas[i].mes && T_Ano == Vendas[i].ano)
        {
            printf("Data: %i/%i/%i | Produto: %s | Quantidade: %i | Valor: %.2f$\n", Vendas[i].dia, Vendas[i].mes, Vendas[i].ano, estoque[Vendas[i].Codigo_prod - 1].Nome_Prod, Vendas[i].Qtd_vendida, Vendas[i].Valor_Venda);
            Total_Vendas += Vendas[i].Valor_Venda;
        }
        i++;
    }

    fclose(arquivo_vendas);

    if (Total_Vendas > 0)
    {
        printf("----------------------------------------------\n");
        printf("Total vendido no mes %i/%i: %.2f$\n", T_Mes, T_Ano, Total_Vendas);
        printf("----------------------------------------------\n");
    }
    else
    {
        printf("----------------------------------------------\n");
        printf("Nao foram encontradas vendas no mes especificado.\n");
        printf("----------------------------------------------\n");
    }
}
