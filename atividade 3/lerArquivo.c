#include <stdio.h>
#include <string.h>

// Função para extrair telefone, idade e e-mail
void extrairDados(const char *linha, char *telefone, char *idade, char *email) {
    char temp[200];
    strcpy(temp, linha); // Copia a linha para não modificar o original

    // Usa strtok para dividir os dados pelo "|"
    char *token = strtok(temp, "|");
    if (token != NULL) {
        strcpy(telefone, token); // Primeiro campo é o telefone
        token = strtok(NULL, "|");
    }
    if (token != NULL) {
        strcpy(idade, token); // Segundo campo é a idade
        token = strtok(NULL, "|");
    }
    if (token != NULL) {
        strcpy(email, token); // Terceiro campo é o e-mail
    }
}

int main() {
    FILE *arquivo;
    char linha[200];  // Buffer para armazenar cada linha lida
    char telefone[50], idade[10], email[100];

    // Abre o arquivo para leitura
    arquivo = fopen("telefones_idades_emails.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Exibe cabeçalho
    printf("%-25s %-10s %-30s\n", "TELEFONE", "IDADE", "EMAIL");
    printf("-------------------------------------------------------------\n");

    // Lendo linha por linha do arquivo
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        // Remove quebras de linha no final da string
        linha[strcspn(linha, "\r\n")] = 0;
        // Extrai telefone, idade e email corretamente
        extrairDados(linha, telefone, idade, email);

        // Exibe os dados formatados
        printf("%-25s %-10s %-30s\n", telefone, idade, email);
    }

    fclose(arquivo);
    return 0;
}
