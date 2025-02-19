#include <stdio.h>
#define SIZE 5
int main()
{
    int vet1[SIZE], vet2[SIZE];
    int diferenca[SIZE], soma[SIZE], multiplicacao[SIZE];
    int i = 0;
    printf("Digite %d numeros\n", SIZE);

    for (i = 0; i < SIZE; i++){
        printf("%d numero do 1vetor : ", i + 1);
        scanf("%d", &vet1[i]);
    }
    for (i = 0; i < SIZE; i++){
        printf("%d numero do 2vetor : ", i + 1);
        scanf("%d", &vet2[i]);
    }

    for (i = 0; i < SIZE; i++)
    {
        soma[i] = vet1[i] + vet2[i];
        printf("A soma dos vetores 1 e 2 e: %d\n", soma[i]);

        diferenca[i] = vet1[i] - vet2[i];
        printf("A diferenca dos vetores 1 e 2 e: %d\n", diferenca[i]);

        multiplicacao[i] = vet1[i] * vet2[i];
        printf("A multiplicacao dos vetores 1 e 2 e: %d\n", multiplicacao[i]);
    }
}