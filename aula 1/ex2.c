#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numero_aleatorio, palpite, tentativas = 0;
    srand(time(NULL));
    numero_aleatorio = rand() % 100;

    do{
        printf("Digite um numero entre (1 e 100)\n");
        scanf("%d", &palpite);

        tentativas++;

        if (palpite > numero_aleatorio){
            printf("A nao... Muito alto! tente novamente.\n");
        }else if (palpite > numero_aleatorio){
            printf("A nao... Muito baixo! tente novamente.\n");
        }else{
            printf("Parabens!! voce utilizou %d tentativas para acertar o numero.\n", tentativas);
        }

    } while (palpite != numero_aleatorio);
    return 0;
}