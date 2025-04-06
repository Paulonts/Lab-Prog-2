#include <stdio.h>

int main(){
    
    FILE *arquivo;
    arquivo = fopen("telefones_idades_emails.txt", "w");

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    fclose(arquivo);
    printf("arquivo gerado com sucesso");
    
    return 0;
}