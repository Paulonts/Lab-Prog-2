#include <stdio.h>
#define SIZE 3

int main(){
    int lados[SIZE];
    int i = 0;

    printf("Digite 3 medidas de um triangulo\n");

    for ( i = 0; i < SIZE; i++){
        printf("1 medida: %d", i + 1);
        scanf("%d", &lados[i]);
    }

    if (lados[0] == lados[1] && lados[1] == lados[2]){
        printf("e um triangulo equilatero");
    }else if(lados[0] == lados[1] && lados[1] != lados[2]){
        printf("E um triagulo isosceles");
    }else{
        printf("E um triangulo escaleno");
    }
    return 0;
}