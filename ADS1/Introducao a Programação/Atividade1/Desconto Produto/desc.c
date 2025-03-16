#include <stdio.h>

int main()
{
    float produto, desconto;
    
    printf("Valor do produto: ");
    scanf("%f", &produto);
    printf("\nPorcentagem de desconto: ");
    scanf("%f", &desconto);
    
    desconto = (desconto * produto) / 100;
    produto = produto - desconto;
    
    printf("Desconto = %.2f", desconto);
    printf("\nNovo valor = %.2f", produto);
}