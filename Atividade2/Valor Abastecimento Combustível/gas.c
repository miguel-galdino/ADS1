#include <stdio.h>

int main(){
    
    float capac;
    char E = 'E', G = 'G' , D = 'D'; 
    char opc;
    
    printf("informe a capacidade do tanque: ");
    scanf("%f", &capac);
    
    printf("Informe o tipo de combustivel\n1- Etanol\n2 - Diesel\n3 - Gasolina\n");
    scanf("%s", &opc);
    
    if(opc == E){
        capac = capac * 5.99;
        printf("Valor gasto: R$ %.2f", capac);
        
    }
    else if(opc == D){
        capac = capac * 6.590;
        printf("Valor gasto: R$ %.2f", capac);
        
    }
    else if(opc == G){
        capac = capac * 6.99;
        printf("Valor gasto: R$ %.2f", capac);
        
    }
    else{
        printf("Erro");
    }
}