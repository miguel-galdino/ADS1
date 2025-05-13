#include <stdio.h>

int main() {
    int numero;
    unsigned long long fatorial = 1;

    /*printf("Digite um número inteiro positivo: ");*/
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Fatorial não está definido para números negativos.\n");
    } else {
        for (int i = 1; i <= numero; i++) {
            fatorial *= i;
        }
        printf("%llu",  fatorial);
    }

    return 0;
}