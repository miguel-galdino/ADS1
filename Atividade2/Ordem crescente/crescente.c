#include <stdio.h>

int main()
{
    int v1, v2, v3;

    printf("Informe primeiro número: ");
    scanf("%d", &v1);
    printf("Informe segundo número: ");
    scanf("%d", &v2);
    printf("Informe terceiro número: ");
    scanf("%d", &v3);
    
    if(v1 <= v2 && v1 <= v3){
        if(v2 >= v3){
            printf("%d %d %d", v1 ,v3, v2);
        }
        else{
            printf("%d %d %d", v1, v2, v3);
        }
    }
    else if(v2 <= v1 && v2 <= v3){
        if(v1 >= v3){
            printf("%d %d %d", v2 ,v3, v1);
        }
        else{
            printf("%d %d %d", v2, v1, v3);
        }
    }
    else if(v3 <= v2 && v1 >= v3){
        if(v2 >= v1){
            printf("%d %d %d", v3 ,v1, v2);
        }
        else{
            printf("%d %d %d", v3, v2, v1);
        }
    }
    
    else{
        printf("Erro");
    }
}