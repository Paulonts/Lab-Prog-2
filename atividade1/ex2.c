#include <stdio.h>
#define NUMERO 5
int main(){
    int numero[NUMERO];
    int media = 0;
    int maior = 0;
    int soma =0;

    printf("digite 5 numeros.\n");
    for (int i = 0; i < NUMERO; i++){
        printf("numero %d: ", i + 1);
        scanf("%d", &numero[i]);

        soma += numero[i];

        if (numero[i] > maior){
            maior = numero[i];
        }
    }

    media = soma / NUMERO;
    printf("soma = %d\n", soma);
    printf("a media e: %d\n", media);
    printf("o maior numero e: %d\n", maior);

    return 0;
    
}