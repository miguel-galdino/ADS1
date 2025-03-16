#include <stdio.h>

int main()
{
    float salario, total, aumento;
    
    printf("Informe o seu salario:");
    scanf("%f", &salario);
    printf("\nInforme quantos porcentos será o aumento: ");
    scanf("%f", &aumento);
    
    aumento = (aumento * salario) / 100;
    salario = salario + aumento;
    
    printf("Aumento =  %.2f", aumento);
    printf("\nNovo salario %.2f", salario);
}
