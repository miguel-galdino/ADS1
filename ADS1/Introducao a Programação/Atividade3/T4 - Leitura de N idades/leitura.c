#include <stdio.h>

int main() {
    int n;
    float cont2 = 0, cont = 0, dezoito = 0, v22 = 0, maisv22 = 0;
    
    
    scanf("%d", &n);
    

    for (int i = 1; i <= n; i++) {
        scanf("%f", &cont);
        cont2 += cont;  


        if (cont < 18) {
            dezoito++;
        } else if (cont >= 18 && cont <= 22) {
            v22++;
        } else {
            maisv22++;
        }
    }


    cont2 /= n;


    dezoito = (dezoito / n) * 100;
    v22 = (v22 / n) * 100;
    maisv22 = (maisv22 / n) * 100;


    printf("Idade média: %.2f\n", cont2);
    printf("Percentual de pessoas com menos de 18 anos: %.2f%%\n", dezoito);
    printf("Percentual de pessoas com idade entre 18 e 22 anos: %.2f%%\n", v22);
    printf("Percentual de pessoas com mais de 22 anos: %.2f%%\n", maisv22);

    return 0;
}