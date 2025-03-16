#include <stdio.h>

int main()
{
    float salario, salario2, impostos, vn;
    
    printf("Informe o seu salario: ");
    scanf("%f", &salario);
    
    salario2 = (salario * 20 / 100) + salario;
    impostos = salario2 - (salario2 * 10 / 100);
    
    printf("Salario inicial = %.2f", salario);
    printf("\nSalario com aumento = %.2f", salario2);
    printf("\nSalario liquido = %.2f", impostos);
}