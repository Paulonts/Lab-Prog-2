#include <stdio.h>
#define LINHAS 3
#define COLUNAS 3

int main(){
    int matriz[LINHAS][COLUNAS] = {
        {1,2,2},
        {4,5,6},
        {7,8,9}
    };

    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; i++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("teste 2\n");
    for (int i = LINHAS - 1; i >= 0; i--){
        for (int j = COLUNAS - 1; j >= 0; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    
}