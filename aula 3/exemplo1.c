#include <stdio.h>
int main(){
    int matriz[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    for (int i = 0; i < 3; i++){
        for (int j = 0; i < 3; i++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("elemento [1][2]: %d\n", matriz[1][2]);
    return 0;
}