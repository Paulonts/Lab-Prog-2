#include <stdio.h>
#define SIZE 5 
int main(){
    int numero[SIZE];
    int soma = 0;

    printf("digite %d numeros.\n", SIZE );
    for (int i = 0; i < SIZE; i++){
        printf("%d numero: ", i + 1);
        scanf("%d", &numero[i]);

        soma += numero[i]; 
    }

    printf("Soma dos numeros: %d", soma);
    
}