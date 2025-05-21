#include <stdio.h>
int main()
{
    int i = 0, j = 0,nro = 0;

    printf("Digite a altura do triangulo: ");
    scanf("%d", &nro);

    for(i = 1; i <= nro; i++){ //O primero for numero de linhas. 
        for (j = 1; j <= (nro - i); j++){ //O segundo for vai ser utilizado para os espaços em branco.
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++){ //O terceiro for é utilizado para colocar os asterisco 
            printf("*");
        }

        printf("\n");
    }
return 0;
}

