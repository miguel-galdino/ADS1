#include <stdio.h>

int main()
{
    int dia;

    printf("Informe um numero de acordo com o dia da semana: ");
    scanf("%d", &dia);
    
    if(dia == 1 || dia == 7){
        printf("Fim de semana");
    }
    else if(dia > 1 && dia < 7){
        printf("Dia útil");
    }
    else{
        printf("Número não corresponde a dia da semana");
    }
}