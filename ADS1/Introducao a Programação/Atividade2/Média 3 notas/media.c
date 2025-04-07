#include <stdio.h>

int main()
{
    float nota1, nota2, nota3;
    
    /*printf("Informe a primeira nota: ");*/
    scanf("%f", &nota1);
    /*printf("Informe a segunda nota: ");*/
    scanf("%f", &nota2);
    /*printf("Informe a terceira nota: ");*/
    scanf("%f", &nota3);
    
    nota1 = (nota1 + nota2 + nota3) / 3;
    
    if(nota1 >= 6){
        printf("Média: %.2f \nAprovado",nota1 );
        
    }
    else if(nota1 < 6){
        printf("Média: %.2f \nReprovado",nota1 );
        
    }
}