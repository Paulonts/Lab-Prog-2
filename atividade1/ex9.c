#include <stdio.h>
#include <math.h>

void calculo2Grau(int *p, double *q, double *r){
    int a,b,c;
    

    printf("Digite o a da equacao: ");
    scanf("%d", &a);
    printf("Digite o b da equacao: ");
    scanf("%d", &b);
    printf("Digite o c da equacao: ");
    scanf("%d", &c);

    *p = pow(b, 2) - 4 * a * c ;

    if(*p < 0){
        printf("nao existe raizes reais.\n");
        return;
    }

    *q = (-b + sqrt(*p)) / (2 * a);
    *r = (-b - sqrt(*p)) / (2 * a);

}
int main(){
    int delta = 0;
    double x1, x2;

    calculo2Grau(&delta, &x1, &x2);

    printf("O delta e: %d\n", delta);
    printf("O x1 e: %.2lf\n", x1);
    printf("O x2 e: %.2lf\n", x2);    
   
    return 0;
}
