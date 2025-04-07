#include <stdio.h>

int main()
{
    int v1, v2;

    printf("Informe um numero inteiro: ");
    scanf("%d", &v1);
    printf("Informe outro numero inteiro: ");
    scanf("%d", &v2);
    
    if(v1 > v2){
        printf("Maior: %d\nMenor: %d", v1 ,v2);
    }
    else if(v1 < v2){
        printf("Maior: %d\nMenor: %d", v2 ,v1);
    }
    else if(v1 == v2){
        printf("Os números são iguais");
    }
    else{
        printf("Erro");
    }
}