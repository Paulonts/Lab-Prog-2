#include <stdio.h>

struct Aluno{
    char nome[50];
    int idade;
    float nota;
};

void imprimir (struct Aluno aluno){
    printf("\nAluno: %s\nIdade: %d\nNota: %f", aluno.nome, aluno.idade, aluno.nota);
}

void alterarNota(struct Aluno *aluno, float novaNota){
aluno -> nota = novaNota;
}

int main(){
    struct Aluno aluno1 ={"andre", 10, 6};
    imprimir(aluno1);

    printf("\nNota (antes: %f)", aluno1.nota);
    alterarNota(&aluno1, 9);
    printf("\nNota (depois: %f)", aluno1.nota);
    
    return 0;
}