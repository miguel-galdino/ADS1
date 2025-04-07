#include <stdio.h>

int main(){
    
    int valD, valM, valA, diaA, mesA, anoA;
    
    printf("Informe o dia de vencimento do produto: ");
    scanf("%d", &valD);
    printf("Informe o mes de vencimento do produto: ");
    scanf("%d", &valM);
    printf("Informe o ano de vencimento do produto: ");
    scanf("%d", &valA);
    printf("Informe o dia atual: ");
    scanf("%d", &diaA);
    printf("Informe o mes atual: ");
    scanf("%d", &mesA);
    printf("Informe o ano atual: ");
    scanf("%d", &anoA);
    
    
    if(anoA < valA){
        printf("Produto não vencido");
    }
    else if (valA == anoA){
        if(valM == mesA){
            if(valD >= diaA){
                printf("Produto não vencido");
            }else{
                printf("Produto vencido");
            }
        }
        else if(mesA > valM){
            printf("Produto vencido");
        }else{
            printf("Produto não vencido");
        }
    }
    else if (valA < anoA) {
        printf("Produto vencido");
    }else{
        printf("Erro");
    }
}