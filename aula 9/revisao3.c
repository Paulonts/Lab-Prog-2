#include <stdio.h>

void calcularMedia(float a, float b, float c) {
    float media = (a + b + c) / 3;
    printf("A média é: %.2f\n", media);
}

int main() {
    float num1, num2, num3;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("Digite o terceiro número: ");
    scanf("%f", &num3);

    calcularMedia(num1, num2, num3);

    return 0;
}
