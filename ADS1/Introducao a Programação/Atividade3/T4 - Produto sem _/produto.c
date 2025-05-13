#include <stdio.h>

int main(){
    
    int one, two;
    
    scanf("%d %d",&one , &two);
    
    if (one > 0){
        
        int cont1 = 0;
        
        for (int i = one; i > 0; i--){
            
            cont1 += (two + two) / 2;
            
        }
        
        printf("%d", cont1);
        
    }
    else if (one < 0){
        
        int cont2 = 0;
        
        for (int i = one; i < 0; i++){
            
            cont2 += (two + two);
            
        }

        if(cont2 < 0){
            cont2 = (0 - cont2) / 2;
            printf("%d", cont2);
        }
        else if(cont2 > 0){
            cont2 = (0 - cont2) / 2;
            printf("%d", cont2);
        }
        else{
            printf("Error");
        }
        
    }
    else{printf("0");}
    
}