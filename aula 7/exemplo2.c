#include <stdio.h>

int main(){
    FILE *arquivo;

    int num;
    int i;

    arquivo = fopen("arquivo.txt", "w");

    if(arquivo == NULL){
        printf("erro ao gerar o arquivo");
        return 1;
    }

    for( i = 0; i <= 5; i++){
        fprintf(arquivo, "%d\n", i);
    }

    fclose(arquivo);

    /*ler o arquivo novamente*/

    arquivo = fopen("arquivo.txt", "r");

    if(arquivo == NULL){
        printf("o arquivo nao existe");
        return 1 ;
    }

    printf("lista de registro lidos(arquivo)");
    while (fscanf(arquivo, "%d", &num) != EOF){
        printf("%d\n", num);
    }
    return 0;
}