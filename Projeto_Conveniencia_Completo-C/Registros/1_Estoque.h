// Autor: Willian Silva Done
// PE3022781
// ALP2(DP)

#include <stdio.h>
#include <string.h>
#define MAX_ESTOQUE 10
typedef struct Estoque
{
    char Nome_Prod[50];
    int Codigo;
    float Preco;
    int Quantidade;

} Estoque;

// Função para validar o código OKAY
int validar_codigo(Estoque estoque[], int num_produtos, int codigo)
{
    int i;
    for (i = 0; i < num_produtos; i++)
    {
        if (codigo == estoque[i].Codigo)
        {
            printf("\n----------------------------------------------\n");
            printf("O codigo ja foi cadastrado!!\n");
            printf("%s ja esta cadastrado com o codigo %i\n", estoque[i].Nome_Prod, codigo);
            printf("Vamos tentar novamente!!!\n");
            printf("\n----------------------------------------------\n");
            return 0;
        }
    }
    return 1;
}

// Função para adicionar um novo produto OKAY
void Adicionar_Produto(Estoque estoque[])
{
    int num_produtos = 0, loop = 0;

    printf("----------------------------------------------");
    printf("\nDigite quantos produtos diferentes deseja adicionar: ");
    scanf("%i", &loop);
    printf("----------------------------------------------\n");

    FILE *arquivo_leitura = fopen("Estoque.txt", "r");

    if (arquivo_leitura != NULL)
    {
        while (fscanf(arquivo_leitura, " %[^\n] %i %f %i", estoque[num_produtos].Nome_Prod, &estoque[num_produtos].Codigo, &estoque[num_produtos].Preco, &estoque[num_produtos].Quantidade) != EOF)
        {
            num_produtos++;
        }
        fclose(arquivo_leitura);
    }

    for (int i = 0; i < loop; i++)
    {
        int Val_Cod;

        do
        {
            printf("Digite o codigo do produto: ");
            scanf("%i", &Val_Cod);
        } while (!validar_codigo(estoque, num_produtos, Val_Cod));

        fflush(stdin);
        printf("----------------------------------------------\n");
        printf("Digite o nome do produto: ");
        fgets(estoque[num_produtos].Nome_Prod, 50, stdin);

        estoque[num_produtos].Codigo = Val_Cod;

        printf("----------------------------------------------\n");
        printf("Digite o preco do produto: ");
        scanf("%f", &estoque[num_produtos].Preco);

        printf("----------------------------------------------\n");
        printf("Digite a quantidade em estoque do produto: ");
        scanf("%i", &estoque[num_produtos].Quantidade);

        printf("\n\n\n\n\n\n----------------------------------------------\n");
        printf("O produto foi cadastrado com sucesso!!!");
        printf("\n----------------------------------------------\n\n\n\n\n\n");

        FILE *arquivo = fopen("Estoque.txt", "a");
        fprintf(arquivo, "%s %i %.2f %i\n", estoque[num_produtos].Nome_Prod, estoque[num_produtos].Codigo, estoque[num_produtos].Preco, estoque[num_produtos].Quantidade);
        fclose(arquivo);

        num_produtos++;
    }
}

// Função para alterar os dados de um produto que já foi inserido OKAY
void Alterar_Produto(Estoque estoque[])
{
    char T_nome[50];
    int T_Codigo = 0, T_quantidade = 0;
    float T_preco = 0;
    int i = 0, j, w;

    FILE *arquivo = fopen("Estoque.txt", "r");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    while (fscanf(arquivo, " %[^\n] %i %f %i", estoque[i].Nome_Prod, &estoque[i].Codigo, &estoque[i].Preco, &estoque[i].Quantidade) != EOF)
    {
        i++;
    }

    fclose(arquivo);

    printf("Digite o codigo do produto que deseja alterar: ");
    scanf("%i", &T_Codigo);

    for (j = 0; j < i; j++)
    {
        if (T_Codigo == estoque[j].Codigo)
        {

            printf("\n----------------------------------------------\n");
            fflush(stdin);
            printf("Digite o novo nome do produto: ");
            scanf(" %[^\n]", T_nome);
            fflush(stdin);

            printf("\nDigite o novo preco do produto: ");
            scanf("%f", &T_preco);

            printf("\nDigite a quantidade em estoque do produto: ");
            scanf("%i", &T_quantidade);

            printf("\n----------------------------------------------\n");
            strcpy(estoque[j].Nome_Prod, T_nome);
            estoque[j].Preco = T_preco;
            estoque[j].Quantidade = T_quantidade;
            break;
        }

        if (j == i)
        {
            printf("Codigo nao cadastrado no sistema!!!");
            return;
        }
    }

    FILE *arquivo_saida = fopen("Estoque.txt", "w");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    for (w = 0; w < i; w++)
    {
        fprintf(arquivo_saida, "%s\n %i %.2f %i\n", estoque[w].Nome_Prod, estoque[w].Codigo, estoque[w].Preco, estoque[w].Quantidade);
    }
    fclose(arquivo_saida);
}

// Função para encontrar um produto pelo código OKAY
void Encontrar_Produto()
{

    int codigo, encontrado = 0;
    char T_Nome[50];
    int T_Codigo, T_Quantidade;
    float T_Preco;

    printf("----------------------------------------------\n");
    printf("Digite o codigo do produto que deseja procurar: ");
    scanf("%i", &codigo);
    printf("----------------------------------------------\n\n\n");

    FILE *arquivo = fopen("Estoque.txt", "r");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
    }
    while (fscanf(arquivo, " %[^\n] %i %f %i\n", T_Nome, &T_Codigo, &T_Preco, &T_Quantidade) != EOF)
    {
        if (codigo == T_Codigo)
        {
            printf("\n----------------------------------------------");
            printf("\n----------------------------------------------\n");
            printf("----------------------------------------------\n");
            printf("Produto encontrado!!!!\n");
            printf("Codigo %i esta cadastrado como: \n", T_Codigo);
            printf("Nome: %s\n", T_Nome);
            printf("Preco: %.2f\n", T_Preco);
            printf("Quantidade em estoque: %i\n", T_Quantidade);
            printf("----------------------------------------------\n");
            printf("----------------------------------------------\n");
            printf("----------------------------------------------\n\n");
            encontrado = 1;
        }
    }
    fclose(arquivo);

    if (!encontrado)
    {
        printf("\n----------------------------------------------");
        printf("\n----------------------------------------------\n");
        printf("----------------------------------------------\n");
        printf("\n\nProduto com o codigo %i nao encontrado no estoque.\n\n", codigo);
        printf("----------------------------------------------\n");
        printf("----------------------------------------------\n");
        printf("----------------------------------------------\n\n");
    }
}

// Função para adicionar estoque OKAY
void Adicionar_Estoque(Estoque estoque[])
{
    int T_Codigo = 0, i = 0, j, w;
    int T_quantidade = 0;

    printf("----------------------------------------------\n");
    printf("Digite o codigo do produto que foi comprado: ");
    scanf("%i", &T_Codigo);

    FILE *arquivo = fopen("Estoque.txt", "r+");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    while (fscanf(arquivo, " %[^\n] %i %f %i", estoque[i].Nome_Prod, &estoque[i].Codigo, &estoque[i].Preco, &estoque[i].Quantidade) != EOF)
    {
        i++;
    }

    fclose(arquivo);

    for (j = 0; j < i; j++)
    {
        if (T_Codigo == estoque[j].Codigo)
        {
            printf("\n----------------------------------------------\n");
            printf("Digite a quantidade que foi comprada do produto: ");
            scanf("%i", &T_quantidade);
            printf("\n----------------------------------------------\n");
            estoque[j].Quantidade += T_quantidade;

            printf("\n----------------------------------------------\n");
            printf("Lancamento de estoque realizado com sucesso!!!!!");
            printf("\n----------------------------------------------\n");
            break;
        }
    }

    if (j == i)
    {
        printf("\n----------------------------------------------\n");
        printf("Codigo nao cadastrado no sistema!!!");
        printf("\n----------------------------------------------\n");
        return;
    }

    FILE *arquivo_saida = fopen("Estoque.txt", "w");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    for (w = 0; w < i; w++)
    {
        fprintf(arquivo_saida, "%s\n %i %.2f %i\n", estoque[w].Nome_Prod, estoque[w].Codigo, estoque[w].Preco, estoque[w].Quantidade);
    }
    fclose(arquivo_saida);
}

// Função Exibir produtos OKAY
void Exibir_Produtos(Estoque estoque[])
{
    int i = 0;

    FILE *arquivo = fopen("Estoque.txt", "r");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
    }

    printf("\nLista de produtos cadastrados:\n");
    while (fscanf(arquivo, " %[^\n] %i %f %i\n", estoque[i].Nome_Prod, &estoque[i].Codigo, &estoque[i].Preco, &estoque[i].Quantidade) != EOF)
    {

        printf("-----------------------------------------------------------------------------\n");
        printf("Nome: %s\n", estoque[i].Nome_Prod);
        printf("Codigo: %i\n", estoque[i].Codigo);
        printf("Preco: %.2f\n", estoque[i].Preco);
        printf("Quantidade em estoque: %i\n", estoque[i].Quantidade);
        printf("\n-----------------------------------------------------------------------------\n");

        i++;
    }
    fclose(arquivo);
}

// Funçao Valor do estoque OKAY
void Valor_Estoque(Estoque estoque[])
{
    int i = 0, j = 0;
    float Valor[MAX_ESTOQUE], Valor_Total = 0;

    FILE *arquivo = fopen("Estoque.txt", "r");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
    }

    printf("\nLista de produtos cadastrados:\n");
    while (fscanf(arquivo, " %[^\n] %i %f %i\n", estoque[i].Nome_Prod, &estoque[i].Codigo, &estoque[i].Preco, &estoque[i].Quantidade) != EOF)
    {

        printf("-----------------------------------------------------------------------------\n");
        printf("Nome: %s\n", estoque[i].Nome_Prod);
        printf("Codigo: %i\n", estoque[i].Codigo);
        printf("Preco: %.2f\n", estoque[i].Preco);
        printf("Quantidade em estoque: %i\n", estoque[i].Quantidade);
        Valor[i] = estoque[i].Preco * estoque[i].Quantidade;
        printf("O valor total em estoque desse produto e: %.2f \n", Valor[i]);
        printf("-----------------------------------------------------------------------------\n");

        i++;
    }
    fclose(arquivo);

    for (j = 0; j < i; j++)
    {
        Valor_Total += Valor[j];
    }

    printf("\n---------------\n");
    printf("---------------\n");
    printf("O valor TOTAL do estoque e: %.2f", Valor_Total);
    printf("\n---------------\n");
    printf("---------------\n");
}
