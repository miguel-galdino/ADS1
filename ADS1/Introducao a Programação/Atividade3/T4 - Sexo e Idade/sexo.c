#include <stdio.h>

int main(){
    int i;
    char sexo;
    int idade;
    int total_m = 0, total_f = 0;
    int soma_idade_m = 0, soma_idade_f = 0;

    for(i = 1; i <= 15; i++){
        scanf(" %c", &sexo); // espaço antes do %c para consumir espaços anteriores
        scanf("%d", &idade);

        if(sexo == 'M' || sexo == 'm'){
            total_m++;
            soma_idade_m += idade;
        } else if(sexo == 'F' || sexo == 'f'){
            total_f++;
            soma_idade_f += idade;
        }
    }

    float porcentagem_m = (total_m / 15.0) * 100;
    float porcentagem_f = (total_f / 15.0) * 100;
    float media_idade_m = total_m > 0 ? (float)soma_idade_m / total_m : 0;
    float media_idade_f = total_f > 0 ? (float)soma_idade_f / total_f : 0;

    if(total_m == 0){
        printf("\nNão há homens no grupo.\n");
    } else {
        printf("\nPorcentagem de pessoas do sexo masculino: %.2f%%\n", porcentagem_m);
        printf("Média de idade do sexo masculino: %.2f\n", media_idade_m);
    }

    if(total_f == 0){
        printf("Não há mulheres no grupo.\n");
    } else {
        printf("Porcentagem de pessoas do sexo feminino: %.2f%%\n", porcentagem_f);
        printf("Média de idade do sexo feminino: %.2f\n", media_idade_f);
    }

    return 0;
}
