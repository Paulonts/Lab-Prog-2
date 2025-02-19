#include <stdio.h>
int main(){
    int matriz[2][2];

    printf("Digitar 4 valores para preencher a matriz 2x2\n");

    for (int i = 0; i < 2; i++){
        for (int j = 0; i < 2; i++){
            scanf("%d ", &matriz[i][j]);
        }
    }    

    printf("Imprimir matriz (2x2): ");
    for (int i = 0; i < 2; i++){
        for (int j = 0; i < 2; i++){
            printf("%d ", matriz[i][j]);
        }
    }   
    printf("\n");

    return 0;
}
