#include <stdio.h>

int main(){
    FILE *arquivo;
    arquivo = fopen("exemplo.txt", "a"); /* "a" serve para encrementar */

    if(arquivo == NULL){
        printf("erro ao abrir arquivo");
        return 1;
    }

    fprintf(arquivo, "uma nova linha no meu arquivo, teste");
    fclose(arquivo);
    printf("fim");
    return 0;
}