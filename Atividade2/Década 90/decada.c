
#include <stdio.h>

int main()
{
    int nasc;
    
    printf("Informe seu ano de nascimento: ");
    scanf("%d", &nasc);
    
    if (nasc <= 2000 && nasc >=1990){
        printf("Nasceu na década de 90!");
    }
}
