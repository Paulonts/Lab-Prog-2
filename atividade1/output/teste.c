#include <stdio.h>
#include <math.h>

// Função única para calcular e imprimir as raízes válidas
void calcularEImprimirRaizes(float matriz[3][6]) {
    printf("Raizes das equacoes validas:\n");
    for (int i = 0; i < 3; i++) {
        float a = matriz[i][3], b = matriz[i][4], c = matriz[i][5];
        float delta = b * b - 4 * a * c;
        
        if (delta < 0) {
            matriz[i][2] = 0; // Não há raízes reais
        } else {
            matriz[i][2] = 1; // Raízes reais encontradas
            matriz[i][0] = (-b + sqrt(delta)) / (2 * a);
            matriz[i][1] = (-b - sqrt(delta)) / (2 * a);
            printf("Linha %d: x1 = %.2f, x2 = %.2f\n", i, matriz[i][0], matriz[i][1]);
        }
    }
}

int main() {
    float m[3][6] = {
        {0, 0, 0, 1, 20, 3},
        {0, 0, 0, 3, 4, 40},
        {0, 0, 0, 2, -4, 31}
    };

    calcularEImprimirRaizes(m);
    
    return 0;
}
