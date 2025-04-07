#include <stdio.h>

int main()
{
    float vProd;
    
    printf("Informe o valor do produto: ");
    scanf("%f", &vProd);
    
    if(vProd < 100){
        vProd = vProd + (vProd * 0.40);
        printf("Valor de venda: R$ %.2f", vProd);
    }
    else{
        vProd = vProd + (vProd * 0.30);
        printf("Valor de venda: R$ %.2f", vProd);
    }
}