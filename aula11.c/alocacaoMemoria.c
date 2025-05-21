#include <stdio.h>

int main(){
    int array_estatico[10];
    
    for (int i = 0; i < 10; i++){
        array_estatico[i] = i * 10;
    }

    for (int i = 0; i < 10; i++){
        printf("array_estatico[%d] = %d\n", i, array_estatico[i]);
    }
    return 0;
    
}