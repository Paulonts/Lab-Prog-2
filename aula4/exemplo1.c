#include <stdio.h>
void imprimir(){
    printf("ola turma");
}
int somar(int a, int b){
    return a + b;
}
int subtrair(int a, int b){
    printf("\n%d", (a-b));
}
int main(){
    imprimir();
    printf("\n%d", (1 + 1));
    subtrair(10,2);
}