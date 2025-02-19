#include <stdio.h>
#define SIZE 3
int main()
{
    int numero[SIZE];
    int maior = 0;
    int i = 0;

    printf("Digite %d numeros\n", SIZE);

    for (i = 0; i < SIZE; i++)
    {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numero[i]);
        if (maior < numero[i]){
            maior = numero[i];
        }
    }

    
    printf("O maior numero e: %d", maior);
    
}