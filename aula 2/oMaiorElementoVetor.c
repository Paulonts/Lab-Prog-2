#include <stdio.h>
#define TAM 5
int main(){
    int vetor1[TAM], vetor2[TAM], vetor3[TAM];
    int maior = 0;
     
    for (int i = 0; i < TAM; i++){
        printf("digite o %d elemntos do vetor 1: ", i + 1);
        scanf("%d", &vetor1[i]);
    }
    printf("\n");
    for (int i = 0; i < TAM; i++){
        printf("digite o %d elemntos do vetor 2: ", i + 1);
        scanf("%d", &vetor2[i]);
    }
    printf("\n");

    for (int i = 0; i < TAM; i++){
        printf("digite o %d elemntos do vetor 3: ", i + 1);
        scanf("%d", &vetor3[i]);
    }
    printf("\n");

    for (int i = 0; i < TAM; i++){
        if (vetor1[i] > maior){maior = vetor1[i];}
        if (vetor2[i] > maior){maior = vetor2[i];}
        if (vetor3[i] > maior){maior = vetor3[i];}
    }
    printf("o maior elemento do vetor e: %d", maior);

    
    
}