#include <stdio.h>

int main() {
    int num, maior, menor;

    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    
    maior = menor = num;

    
    for (int i = 2; i <= 30; i++) {
        scanf("%d", &num);
        if (num > maior) {
            maior = num;  
        } 
        if (num < menor) {
            menor = num;  
        }
    }

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);

    return 0;
}