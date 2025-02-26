#include <stdio.h>
 int dobrar(int a){
    return a * 2;
 }

 int main(){
    printf("inicio");
    int x = 10;
    int d = dobrar(x);
    printf("\n%d\n", d);
    printf("fim");
    return 0;
 }