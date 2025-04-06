#include <stdio.h>

int main(){

    FILE *arquivo, *destino;
    arquivo = fopen("arquivo1.txt", "r"); 
    

    if(arquivo == NULL){
        printf("erro ao abrir arquivo");
        return 1;
    }

    destino == fopen("arquivo_clone.txt", "w");
    if(destino == NULL){
        printf("erro ao abrir arquivo clone");
        return 1;
    }

    while ()

    fclose(arquivo);
    printf("fim");
    return 0;
}