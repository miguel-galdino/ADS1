
#include <stdio.h>

int main()
{
    float vCompra;
    float desc = 15 / 100;
    
    /*printf("Informe o valor da compra: ");*/
    scanf("%f", &vCompra);
    desc = vCompra - (vCompra * 0.15);
    
    if(vCompra > 200){
        
        printf ("Valor a pagar: R$ %.2f", desc );
        
    }
    if(vCompra <= 200){
            printf("Valor a pagar: R$ %.2f", vCompra);
    }
    
}