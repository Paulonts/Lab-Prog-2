/*
Criar um cadastrado (usando como base o exemplo feito em sala) para Medicamentos:

id int
nome char[50]
peso float
descricao char[200]
finalidade char[100]

Criar as seguintes funcionalidades:
- Cadastro,
- Listar,
- Consulta por Id
- Exclusão dos dados
*/

#include <stdio.h>
#define MAXPRODUTO 100

typedef struct
{
    int id;
    char nome[50];
    float peso;
    char descricao[200];
    char finalidade[100];
} Produto;

void salvarProdutosEmArquivos(Produto novo)
{
    FILE *arquivo = fopen("produto.txt", "a");
    if (arquivo == NULL)
    {
        printf("erro ao abrir arquivo para escrita!\n");
        return;
    }
    fprintf(arquivo, "%d, %s, %f, %s, %s\n",
            novo.id, novo.nome, novo.peso,
            novo.descricao, novo.finalidade);

    fclose(arquivo);
    printf("produtos salvos em arquivo 'produto.txt'");
}

void cadastrarProduto()
{
    Produto novo;
    FILE *arquivo = fopen("produto.txt", "r");

    int ultimoID;
    if (arquivo != NULL)
    {
        while (fscanf(arquivo, "%d\n", &ultimoID) == 1)
        {
            fscanf(arquivo, "%*[^\n]\n");
        }
        fclose(arquivo);
    }

    novo.id = ultimoID + 1;
    printf("Digite o nome: ");
    scanf("%s", novo.nome);
    printf("digite o peso: ");
    scanf("%f", &novo.peso);
    while (getchar() != '\n')
        ;
    printf("descricao do produto: ");
    scanf("%s", novo.descricao);
    while (getchar() != '\n')
        ;
    printf("finalidade do produto: ");
    scanf("%s", novo.finalidade);

    salvarProdutosEmArquivos(novo);
    printf("\nproduto cadastrado com sucesso!\n");
}

void listarProduto()
{
    FILE *arquivo = fopen("produto.txt", "r");
    if (arquivo == NULL)
    {
        printf("nunhum produto cadastrado!\n");
        return;
    }
    Produto produto;
    printf("listando produtos\n");
    while (fscanf(arquivo,"%d,%49[^,],%f,%199[^,],%99[^\n]\n", &produto.id, produto.nome, &produto.peso,
                  produto.descricao, produto.finalidade) == 5){
        printf("Id: %d | Nome: %s | Peso: %.2f | Descricao: %s | Finalidade: %s\n",
               produto.id, produto.nome, produto.peso, produto.descricao, produto.finalidade);
    }
    fclose(arquivo);
}

void idProduto()
{
    int id;
    printf("digite o id do produto: ");
    scanf("%d", &id);

    FILE *arquivo = fopen("produto.txt", "r");
    if (arquivo == NULL)
    {
        printf("\nErro ao abrir o arquivo!\n");
        return;
    }
    Produto produto;
    while (fscanf(arquivo, "%d,%49[^,],%f,%199[^,],%99[^\n]\n",
                  &produto.id, produto.nome, &produto.peso,
                  produto.descricao, produto.finalidade) == 5)
    {
        if (id == produto.id)
        {
            printf("\nProduto encontrado:\n");
            printf("ID: %d\nNome: %s\nPeso: %2.f\nDescricao: %s\nFinalidade: %s\n",
                   produto.id, produto.nome, produto.peso, produto.descricao, produto.finalidade);
            fclose(arquivo);
            return;
        }
    }
    printf("\nProduto não encontrado.\n");
    fclose(arquivo);
}

void excluirProduto() {
    int id;
    printf("Digite o ID do produto a excluir: ");
    scanf("%d", &id);

    FILE *arquivo = fopen("produto.txt", "r");
    FILE *temp = fopen("temp.txt", "w");

    if (arquivo == NULL || temp == NULL) {
        printf("Erro ao abrir os arquivos!\n");
        return;
    }

    Produto produto;
    int encontrado = 0;

    while (fscanf(arquivo, "%d,%49[^,],%f,%199[^,],%99[^\n]\n",
                  &produto.id, produto.nome, &produto.peso,
                  produto.descricao, produto.finalidade) == 5) {
        if (produto.id != id) {
            fprintf(temp, "%d,%s,%.2f,%s,%s\n",
                    produto.id, produto.nome, produto.peso,
                    produto.descricao, produto.finalidade);
        } else {
            encontrado = 1;
        }
    }

    fclose(arquivo);
    fclose(temp);

    remove("produto.txt");
    rename("temp.txt", "produto.txt");

    if (encontrado)
        printf("Produto excluído com sucesso.\n");
    else
        printf("Produto com ID %d não encontrado.\n", id);
}


int menu()
{
    int opcao;

    do
    {
        printf("\n=== Menu ===\n");
        printf("1. Cadastrar Produto\n");
        printf("2. Listar Produto\n");
        printf("3. ID do Produto\n");
        printf("4. Excluir dados\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao)
        {
        case 1:
            cadastrarProduto();
            break;
        case 2:
            listarProduto();
            break;
        case 3:
            idProduto();
            break;
        case 4:
            excluirProduto();
            break;
        case 5:
            printf("voce saiu do menu");
            return 0;
        default:
            printf("opcao invalida");
        }
    } while (opcao != 5);
    return 0;
}

int main()
{
    menu();
    return 0;
}