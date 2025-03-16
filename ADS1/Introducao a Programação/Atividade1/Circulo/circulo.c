#include <stdio.h>
#include <math.h>

int main()
{
    float raio, A, P;
    
    
    printf("Informe o tamanho do raio do circulo em centimetros: ");
    scanf("%f", &raio);
    
    A = pow(raio, 2) * M_PI;
    P = (2 * M_PI * raio);
    
    printf("A: %.2f", A);
    printf("\nP: %.2f", P);
    
}