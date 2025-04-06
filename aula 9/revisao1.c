#include <stdio.h>

int main(){
    char nome[100];
    int idade;
    
    printf("digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("digite sua idade: ");
    scanf("%d", &idade);

    FILE *arquivo = fopen("dados.txt", "a");

    if (arquivo = NULL){
        printf("erro ao abrir arquivo\n");
        return 1;
    }
    
    fprintf(arquivo, "Nome: %sIdade: %d", nome, idade);

    fclose(arquivo);

    printf("dados salvos com sucesso!\n");
    return 0;
}
