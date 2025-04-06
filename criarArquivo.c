/*ler um arquivo e gerar um clone dele*/
//arquivo1.txt
#include <stdio.h>

int main(){
    FILE *arquivo;
    arquivo = fopen("arquivo1.txt", "w"); 

    if(arquivo == NULL){
        printf("erro ao abrir arquivo");
        return 1;
    }

    fclose(arquivo);
    printf("fim");
    return 0;
}