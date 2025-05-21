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

void cadastroNotas(Hackadojo *hackadojo){
    getchar();
    printf("digite o nome do aluno");
    fgets(hackadojo->nome, sizeof(hackadojo->nome), stdin);
    hackadojo->nome[strcspn(hackadojo->nome, "\n")] = '\0';

    printf("Nota 1: ");
    scanf("%f", &hackadojo->nota1);

    printf("Nota 2: ");
    scanf("%f", &hackadojo->nota2);
    
}

void mediaSituacao(Hackadojo *hackadojo){
    hackadojo->media = (hackadojo->nota1 + hackadojo->nota2) / 2;
    if (hackadojo->media >= 7){
        strcpy(hackadojo->situacao, "aprovado");
    }else{
        strcpy(hackadojo->situacao, "reprovado");
    }
}

void imprimirResultados(Hackadojo *hackadojo){
    FILE *arquivo = fopen("resultados.txt", "w");
    if (arquivo == NULL){
        printf("arquivo nao encontrado!\n");
        return;
    }
    
    for (int i = 0; i < SIZE; i++){
        printf("aluno: %d\n", i + 1);
        printf("Nome: %s\n", hackadojo[i].nome);
        printf("Nota 1: %.2f\n", hackadojo[i].nota1);
        printf("Nota 2: %.2f\n", hackadojo[i].nota2);
        printf("Media: %.2f\n", hackadojo[i].media);
        printf("Situacao: %s\n", hackadojo[i].situacao);
        printf("\n");

        fprintf(arquivo, "Aluno: %d\n", i + 1);
        fprintf(arquivo, "Nome: %s\n", hackadojo[i].nome );
        fprintf(arquivo, "Nota1: %.2f\n", hackadojo[i].nota1 );
        fprintf(arquivo, "Nota2: %.2f\n", hackadojo[i].nota2 );
        fprintf(arquivo, "Media: %.2f\n", hackadojo[i].media );
        fprintf(arquivo, "Situacao: %s\n", hackadojo[i].situacao );
    }

    fclose(arquivo);
    printf("resultados foram salvos no arquivo 'resultados.txt'\n");
}

void Menu(){
    Hackadojo hackadojo[SIZE];

    int opcao;
    do{
        printf("\n----escolha uma opcao----\n");
        printf("1- Cadastrar alunos e Notas\n");
        printf("2- Calcular medias e situacao\n");
        printf("3- Exibir resultados e salvar em arquivo\n");
        printf("4- Sair\n");
        scanf("%d", &opcao);
        switch (opcao){
        case 1:
            printf("[cadastro e notas de aluno]\n");
            for (int i = 0; i < SIZE; i++){
                printf("Aluno: %d\n", i + 1);
                cadastroNotas(&hackadojo[i]);
            }
            
            break;
        case 2:
            printf("[calculo de media e situacao]\n");
            for (int i = 0; i < SIZE; i++){
                mediaSituacao(&hackadojo[i]);
            }
            
            break;
        case 3:
            printf("[exibindo resultados]\n");
            imprimirResultados(hackadojo);
            break;
        case 4:
            printf("[voce saiu do programa]\n");
            return;
        default:
            printf("nenhuma da opcoes foi digitada\n");
            break;
        }

    } while (opcao != 4);
    
}

int main(){
    Menu();
    return 0;
}