#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARQUIVO "alunos.csv"

typedef struct {
    char nome[100];
    int idade;
    float nota;
} Aluno;

// Função para cadastrar um aluno
void cadastrarAluno() {
    Aluno aluno;
    FILE *arquivo = fopen(ARQUIVO, "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    printf("Nome: ");
    getchar(); // Limpar buffer
    fgets(aluno.nome, sizeof(aluno.nome), stdin);
    aluno.nome[strcspn(aluno.nome, "\n")] = '\0'; // Remover quebra de linha

    printf("Idade: ");
    scanf("%d", &aluno.idade);

    printf("Nota: ");
    scanf("%f", &aluno.nota);

    fprintf(arquivo, "%s;%d;%.2f\n", aluno.nome, aluno.idade, aluno.nota);
    fclose(arquivo);

    printf("Aluno cadastrado com sucesso!\n\n");
}

// Função para listar alunos
void listarAlunos() {
    FILE *arquivo = fopen(ARQUIVO, "r");
    if (arquivo == NULL) {
        printf("Nenhum aluno cadastrado.\n\n");
        return;
    }

    char linha[150];
    while (fgets(linha, sizeof(linha), arquivo)) {
        Aluno aluno;
        char *token = strtok(linha, ";");
        if (token != NULL) strcpy(aluno.nome, token);

        token = strtok(NULL, ";");
        if (token != NULL) aluno.idade = atoi(token);

        token = strtok(NULL, ";");
        if (token != NULL) aluno.nota = atof(token);

        printf("Nome: %s | Idade: %d | Nota: %.2f\n", aluno.nome, aluno.idade, aluno.nota);
    }

    fclose(arquivo);
    printf("\n");
}

// Função para deletar a base de dados
void deletarBase() {
    if (remove(ARQUIVO) == 0) {
        printf("Base de dados deletada com sucesso!\n\n");
    } else {
        printf("Não foi possível deletar a base de dados (arquivo inexistente?).\n\n");
    }
}

int main() {
    int opcao;

    do {
        printf("=== Sistema de Gerenciamento de Alunos ===\n");
        printf("1 - Cadastrar Aluno\n");
        printf("2 - Listar Alunos\n");
        printf("3 - Deletar base de dados\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarAluno();
                break;
            case 2:
                listarAlunos();
                break;
            case 3:
                deletarBase();
                break;
            case 4:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opcao invalida!\n\n");
        }
    } while (opcao != 4);

    return 0;
}
