/*
1. Criar uma função que retorna o maior entre três números.
2. Criar uma função que calcula a média dos valores de um vetor.
3. Criar uma função que verifica se um número é primo.
*/

#include <stdio.h>

void media(){
    int n1[4];
    int media = 0;

    printf("digite 4 numeros: \n");
    for (int i = 0; i < 4; i++){
        printf("numero: %d\n", i + 1);
        scanf("%d", &n1[i]);
        media += n1[i];
    }
    media = media / 4;
    printf("a media é: %d", media);
}

void maior(){
    int num1, num2, num3;
  
    printf("\nDigite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);
  
    int maior = num1;
    if (num2 > maior) {
        maior = num2;
    }
    if (num3 > maior) {
        maior = num3;
    }

    printf("O maior numero e: %d\n", maior);
}

void primo(){
    int numero;
    
    printf("\nDigite um número: ");
    scanf("%d", &numero);
    
    if (eh_primo(numero)) {
        printf("%d é primo.\n", numero);
    } else {
        printf("%d não é primo.\n", numero);
    }
    return 0;
}               


int main(){
    media();
    maior();
    primo();

}