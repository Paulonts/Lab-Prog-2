/*
Desafio: Cadastro e Avaliação de Alunos
Criar um programa em C que:
• Cadastre até 5 alunos
• Lance 2 notas por aluno (armazenadas em vetores separados)
• Calcule a média de cada aluno
• Classifique como Aprovado (média ≥ 6.0) ou Reprovado
• Salve tudo em um arquivo .txt

Menu Simples (usando while)
• 1 - Cadastrar alunos e notas
• 2 - Calcular médias e situação
• 3 - Exibir resultados e salvar em arquivo
• 4 - Sair

Exemplo de conteúdo do arquivo resultados.txt:
Aluno: Maria
Notas: 7.0 e 5.5
Média: 6.25
Situação: Aprovado
*/
#include <stdio.h>
#include <string.h>

#define SIZE 5

typedef struct {
    char nome[15];
    float nota1;
    float nota2;
    float media;
    char situacao[10];  
}Hackadojo;
 
void CadastroNotas(Hackadojo *hackadojo){
    getchar();
    printf("Digite o nome do aluno: ");
    fgets(hackadojo->nome, sizeof(hackadojo->nome), stdin);
    hackadojo->nome[strcspn(hackadojo->nome, "\n")] = '\0';

    printf("Digite a nota 1: ");
    scanf("%f", &hackadojo->nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &hackadojo->nota2);
}

void CalculoMedia(Hackadojo *hackadojo){
    hackadojo->media = (hackadojo->nota1 + hackadojo->nota2) / 2;
    if (hackadojo->media >= 6){
        strcpy(hackadojo->situacao, "aprovado");
    }else{
        strcpy(hackadojo->situacao, "reprovado");
    }
}

void MostrarSituacao(Hackadojo hackadojo[]){
    FILE *arquivo = fopen("boletim.txt", "w");
    if (arquivo == NULL){
        printf("o arquivo nao foi criado!");
    }
    for (int i = 0; i < SIZE; i++){
        printf("Aluno: %d\n", i + 1);
        printf("Nome: %s\n", hackadojo[i].nome);
        printf("Nota 1: %.2f\n", hackadojo[i].nota1);
        printf("Nota 2: %.2f\n", hackadojo[i].nota2);
        printf("Media: %.2f\n", hackadojo[i].media);
        printf("Situacao: %s", hackadojo[i].situacao);
        printf("\n");

        fprintf(arquivo, "Aluno: %d\n", i + 1);
        fprintf(arquivo, "Nome: %s\n", hackadojo[i].nome);
        fprintf(arquivo, "Nota 1: %.2f\n", hackadojo[i].nota1);
        fprintf(arquivo, "Nota 2: %.2f\n", hackadojo[i].nota2);
        fprintf(arquivo, "Media: %.2f\n", hackadojo[i].media);
        fprintf(arquivo, "Situacao: %s\n", hackadojo[i].situacao);
        printf("\n");

        
    }
    fclose(arquivo);
    printf("Dados salvos com sucesso em 'boletim.txt'");

    

    
}
void menu(){
    int opcao;
    Hackadojo hackadojo[SIZE];

    do{
        printf("\n----Escolha uma das opcoes a seguir----\n");
        printf("1- Cadastrar alunos e notas\n");
        printf("2- Calcular medias e situacao\n");
        printf("3- Exibir resultados e salvar em arquivo\n");
        printf("4- Sair\n");
        scanf("%d", &opcao);

        switch (opcao){
        case 1:
            printf("Cadastrando alunos e notas\n");
            for (int i = 0; i < SIZE; i++){
                printf("Aluno: %d\n", i + 1);
                CadastroNotas(&hackadojo[i]);
            }
            break;
        case 2:
            printf("media calculado com sucesso!\n");
            for (int i = 0; i < SIZE; i++){
                printf("Aluno: %d", i + 1);
                CalculoMedia(&hackadojo[i]);
            }
            break;
        case 3:
            printf("mostrando situacao!\n");
            MostrarSituacao(hackadojo);
            break;
        case 4:
            printf("voce saiu do programa!");
            return;
        default:
            printf("nenhuma das opcoes foi selecionada!\n");
            break;
        }
        
    } while (opcao != 4);
    
}

int main(){
    menu();
    return 0;
}