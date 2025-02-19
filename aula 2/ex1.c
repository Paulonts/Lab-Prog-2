#include <stdio.h>
#define TAM 3
int main(){
    int vetor1[TAM], vetor2[TAM];
    int diferenca[TAM], soma[TAM], multiplicacao[TAM];

    for (int i = 0; i < TAM; i++){
        printf("Digite o %d elemento do vetor1: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    for (int i = 0; i < TAM; i++){
        printf("Digite o %d elemento do vetor2: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    for (int i = 0; i < TAM; i++){
       soma[i] = vetor1[i] + vetor2[i];
        printf("A soma dos vetores 1 e 2 e: %d\n", soma[i]);
       diferenca[i] = vetor1[i] - vetor2[i];
        printf("A diferenca dos vetores 1 e 2 e: %d\n", diferenca[i]);
       multiplicacao[i] = vetor1[i] * vetor2[i];
        printf("A multiplicacao dos vetores 1 e 2 e: %d\n", multiplicacao[i] );

    }
    return 0;
    

}