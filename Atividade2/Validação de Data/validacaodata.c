#include <stdio.h>

int main(){
    
    int dia, mes, ano;
    
    printf("Informe um dia: ");
    scanf("%d", &dia);
    printf("Informe um mes: ");
    scanf("%d", &mes);
    printf("Informe um ano: ");
    scanf("%d", &ano);
    
    if (ano > 1 && (mes >= 1 && mes <= 12)){
        
        if(((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) && (mes == 2)){
            
            if(dia >= 1 && dia <= 29){
                printf("A data %02d/%02d/%04d é válida", dia, mes, ano);
            }else{
                printf("A data %02d/%02d/%04d é inválida", dia, mes, ano);
            }
            
        }else{
            
            if((mes == 3 || mes == 6 || mes == 6 || mes == 11) && (dia >= 1 && dia <= 30)){
                printf("A data %02d/%02d/%04d é válida", dia, mes, ano);
            }
            
            else if((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) && (dia >= 1 && dia <= 31)){
                printf("A data %02d/%02d/%04d é válida", dia, mes, ano);
            }
            
            else if ((mes == 2) && (dia >= 1 && dia <= 28)){
                printf("A data %02d/%02d/%04d é válida", dia, mes, ano);
            }
            
            else{
                printf("A data %02d/%02d/%04d é inválida", dia, mes, ano);
            }
        }
    }
    else{
        printf("A data %02d/%02d/%04d é inválida", dia, mes, ano);
    }
}