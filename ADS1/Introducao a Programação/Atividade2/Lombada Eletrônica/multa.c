#include <stdio.h>

int main()
{
    float multa, vel;
    
    /*printf("Informe a velocidade que o carro passou no radar: ");*/
    scanf("%f", &vel);
    
    if (vel > 60){
        
        vel = vel - 60;
        multa = vel * 10;
        
        printf("\nMultado\nValor da multa: R$ %.2f", multa);
    }
    
}