#include <stdio.h>
#define NUMERO 10
int main(){
    int qualTabuada = 0;
    int tabuada[NUMERO];
    int impares[NUMERO];
    int i = 0;

    printf("Digite o numero que deseja ver a tabuada: ");
    scanf("%d", &qualTabuada);
    printf("tabuada escolhida: %d", qualTabuada);

    for (i = 0; i < 10; i++){
        tabuada[i] = qualTabuada * (i + 1);
        impares[i] = tabuada[i];


    if (impares[i] % 2 != 0){
        printf("imprimindo somente os numeros impares: %d\n", impares[i]);
    }
   
    }
    
  
    
    return 0;
}