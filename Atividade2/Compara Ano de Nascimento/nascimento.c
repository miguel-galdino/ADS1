#include <stdio.h>

int main()
{
    int v1, v2;

    printf("Informe o ano de nascimento do primeiro: ");
    scanf("%d", &v1);
    printf("Informe o ano de nascimento do segundo: ");
    scanf("%d", &v2);
    
    if(v1 > v2){
        printf("O mais velho nasceu em %d", v2);
    }
    else if(v1 < v2){
        printf("O mais velho nasceu em %d", v1);
    }
    else if(v1 == v2){
        printf("As duas pessoas têm a mesma idade");
    }
    else{
        printf("Erro");
    }
}