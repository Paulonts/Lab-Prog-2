#include <stdio.h>
#include <string.h>

void executarOpcao(char *opcao){
    if (strcmp(opcao, "iniciar") == 0){
        printf("iniciando o sistema");
    }else if(strcmp(opcao, "parar") == 0){
        printf("parando o sistema");
    }else if(strcmp(opcao, "reiniciar") == 0){
        printf("reiniciando o sistema");
    }else{
        printf("opcao invalida");
    }
    
}

int main(){
    char opcao[20];

    printf("digite a opcao desejada: iniciar, parar, reiniciar");
    scanf("%s", opcao);
    executarOpcao(opcao);

    return 0;
}