#include <stdio.h>
double calculoFar(double celsius){
    double operacaoFar = (9.0/5.0) * celsius + 32;

    return (operacaoFar);
}
int main(){
    double celsius = 0;
    double resultado = 0;

    printf("digite uma temperatura em celsius\n");
    scanf("%lf", &celsius);

    resultado = calculoFar(celsius);
    printf("celsisus: %.2lf fahrenheit: %.2lf", celsius,resultado);
    
}