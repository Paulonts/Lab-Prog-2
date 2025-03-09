#include <stdio.h>

struct  Aluno {
    char nome[50];
    int idade;
    float nota;
};


int main(){
    struct Aluno aluno1;

    printf("Digite o nome do aluno: ");
    scanf("%s", aluno1.nome);
    printf("Digite a idade aluno: ");
    scanf("%d", &aluno1.idade);
    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno1.nota);
    
    printf("\nDados do aluno: ");
    printf("\nNome: %s", aluno1.nome);
    printf("\nIdade: %d", aluno1.idade);
    printf("\nNota: %.2f", aluno1.nota);

    return 0;
}