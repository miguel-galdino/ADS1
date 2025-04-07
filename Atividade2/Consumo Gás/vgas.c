#include <stdio.h>

int main()
{
    float cGas, valor;
    
    printf("Informe o consumo: ");
    scanf("%f", &cGas);
    
    if(cGas <= 10){
        valor = cGas * 15;
        printf("Valor a pagar: R$ %.2f", valor);
    }
    else{
        valor = (cGas * 15) + 20;
        printf("Valor a pagar: R$ %.2f", valor);
    }
}