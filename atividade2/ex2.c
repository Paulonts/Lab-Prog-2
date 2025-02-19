#include <stdio.h>
#include <string.h>
#define SIZE 10

int main()
{
    char nome[SIZE][30] = {
        "miguel", "gael", "alice", "paulo", "laura", "helena", "valentina", "heloisa", "matheus", "vinicius"};
    char nomeDigitado[30];
    int encontrado = 0;

    printf("escreva um nome e tente acertar: ");
    fgets(nomeDigitado, 30, stdin);

    nomeDigitado[strcspn(nomeDigitado, "\n")] = 0;

    for (int i = 0; i < SIZE; i++){
        if (strcmp(nomeDigitado, nome[i]) == 0){
            encontrado = 1;
            break;
        }
    }

    if (encontrado){
        printf("Achei\n");
    }else{
        printf("Nao achei");
    }

    return 0;
}