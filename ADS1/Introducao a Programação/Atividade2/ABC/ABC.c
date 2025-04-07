#include <stdio.h>

int main()
{
    int A, B, C;
    
    printf("Informe o valor de A: ");
    scanf("%d", &A);
    printf("\nInforme o valor de B: ");
    scanf("%d", &B);
    printf("\nInforme o valor de C: ");
    scanf("%d", &C);
    
    if((A + B) > C){
        A = A + B; 
        printf("%d", A);
    }
}
