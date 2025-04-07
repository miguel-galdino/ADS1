#include <stdio.h>

int main()
{
    int idade;

    printf("Informe a idade do nadador: ");
    scanf("%d", &idade);
    
    if(idade >= 0 && idade <= 10){
        printf("Infantil");
        
    }
    else if(idade >= 11 && idade <= 17){
        printf("Juvenil");
        
    }
    else if(idade >= 18 && idade <= 64){
        printf("Adulto");
        
    }
    else if(idade >= 65 ){
        printf("Sênior");
        
    }
    
}