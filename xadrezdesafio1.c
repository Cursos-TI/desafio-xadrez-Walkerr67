#include <stdio.h>

int main(){
    printf("***Torre***\n");
    for (int i= 0; i < 5; i++){
        printf("Direita\n");
    }
    printf("***Rainha***\n");
    for (int i= 0; i < 8; i++){
        printf("Esquerda\n");
    }
    printf("***Bispo***\n");
    for (int i= 0; i < 5; i++){
        printf("Diagonal Para Cima à Direita\n");
    }
    return 0;
}