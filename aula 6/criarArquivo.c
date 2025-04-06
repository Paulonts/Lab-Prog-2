#include <stdio.h>

int main(){
    
    FILE *arquivo;
    arquivo = fopen("exemplo.txt", "w");

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    fprintf(arquivo, "aprendendo a gravar linhas em arquivo\n");
    fclose(arquivo);
    printf("arquivo gerado com sucesso");
    
    return 0;
}