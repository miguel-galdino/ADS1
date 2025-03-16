#include <stdio.h>

int main()
{
    float kmini, kmfim, lgaso, ctanque;
    
    printf("KM inicial = ");
    scanf("%f", &kmini);
    printf("KM final = ");
    scanf("%f", &kmfim);
    printf("Litros de gasolina gasto = ");
    scanf("%f", &lgaso);
    printf("Tamanho do tanque de combustivel = ");
    scanf("%f", &ctanque);
    
    kmini = kmfim - kmini;
    lgaso = kmini / lgaso;
    ctanque = ctanque * lgaso;
    
    printf("Km por tanque = %.2f", ctanque);
}