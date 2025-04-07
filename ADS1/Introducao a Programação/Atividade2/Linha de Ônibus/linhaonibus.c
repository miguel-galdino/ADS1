#include <stdio.h>

int main()
{
    int linha;

    printf("Informe um numero de 1 a 3 para verificar o nome das linhas disponíveis: ");
    scanf("%d", &linha);
    
    if(linha == 1){
        printf("Bela Vista");
    }
    else if(linha == 2){
        printf("Figueira");
    }
    else if(linha == 3){
        printf("Sta Terezinha");
    }
    else{
        printf("Código inexistente");
    }
}