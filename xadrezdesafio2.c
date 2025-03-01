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
    printf("***Cavalo***\n");
        int  movimentocompleto = 1;
        while (movimentocompleto--)
        {
            for (int i = 0; i < 2; i++){
                printf("Baixo\n");
            }
            printf("Esquerda\n");
        }
    
    return 0;
}