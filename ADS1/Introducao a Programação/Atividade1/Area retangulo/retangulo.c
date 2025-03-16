#include <stdio.h>

int main() {
    float base, altura, area, perimetro;

    printf("Informe o tamanho da base do retangulo em centimetros: ");
    scanf("%f", &base);
    printf("Informe o tamanho da altura do retangulo em centimetros: ");
    scanf("%f", &altura);

    perimetro = 2 * (altura + base);
    area = base * altura;
    
    printf("A area do retangulo é: %.2f\n", area);
    printf("O perimetro do retangulo é: %.2f\n", perimetro);
}