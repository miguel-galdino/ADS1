#include <stdio.h>

int main()
{
    float nota1, nota2, nota3;
    int faltas;
    
    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);
    printf("Informe a quantidade de faltas: ");
    scanf("%d", &faltas);
    
    nota1 = (nota1 + nota2 + nota3) / 3;
    
    if (nota1 >= 6 && faltas < 21){
        printf("Média final: %.2f \nAprovado" , nota1);
    }
    else{
        if(nota1 > 6 && faltas >= 21){
            printf("Média final: %.2f \nReprovado por falta", nota1);
        }
        if(nota1 < 6 && faltas < 21){
            printf("Média final: %.2f \nReprovado por média", nota1);
        }
        if(nota1 < 6 && faltas >= 21){
            printf("Média final: %.2f \nReprovado por média e falta", nota1);
        }
    }
}