#include <stdio.h>

int main (){
    
    float peso = 0, peso1 = 0, altura = 0, altura1 = 0;
    
    for(int x = 1; x <= 20; x++){
        scanf("%f %f", &peso, &altura);
        peso1 = peso1 + peso;
        altura1 = altura1 + altura;
    }
    printf("Peso médio:%.2f\nAltura média: %.2f", peso1 / 20, altura1 / 20);
}