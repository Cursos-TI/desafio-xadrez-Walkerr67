#include <stdio.h>

void moverTorre (int casas){
    if (casas > 0){
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}
void moverRainha (int casas){
    if (casas > 0){
        printf("Direita\n");
        moverRainha(casas - 1);
    }
}
void moverBispo (int casas){
    if (casas > 0){
        printf("Horizontal Para Cima à Direita \n");
        moverBispo(casas - 1);
    }
}

int main(){
    int numero,i,j;
    char letra;
    printf("***Torre***\n");
    moverTorre (5);
    printf("...Movimento Concluído...\n");
    printf("***Rainha***\n");
    moverRainha (8);
    printf("...Movimento Concluído...\n");
    printf("***Bispo***\n");
    moverBispo (5);
    printf("...Movimento Concluído...\n");
    printf("***Bispo***\n");

        int  movimentocompleto = 1;
        while (movimentocompleto--)
        {
            for (int i = 0; i < 5; i++){
                printf(" Vertical Para Cima à Direita  \n");
            }
         printf("...Movimento Concluído...\n");
    printf("***Cavalo***\n");
       
       int  movimentocompleto = 1;
        while (movimentocompleto--)
        {
            for (int i = 0; i < 2; i++){
                printf("Cima\n");
            }
            printf("Direita\n");
        }
            printf("...Movimento Concluído...\n");
        }
    return 0;
}
