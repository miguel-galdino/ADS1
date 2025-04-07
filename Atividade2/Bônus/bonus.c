#include <stdio.h>

int main()
{
    int temp;
    float salario;
    
    printf("Informe quantos anos de casa: ");
    scanf("%d", &temp);
    printf("Informe seu salário ");
    scanf("%f", &salario);
        
    if(temp < 3){
        salario = salario * 0.50;
        printf("Bônus: R$%.2f", salario);
    }
    else{
        salario = salario * 0.75;
        printf("Bônus: R$%.2f", salario);
    }
}