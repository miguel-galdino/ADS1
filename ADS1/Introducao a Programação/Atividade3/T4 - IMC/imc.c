#include <stdio.h>

int main(){
    
    float altura, peso;
    
    for(int x = 0; x <= 9; x++){
        scanf("%f %f", &altura, &peso);
        peso = peso / (altura * altura);
        printf("IMC: %.2f\n", peso);
    }
}