#include <stdio.h>

int main(){
    
    int one = 0, cont = 0;
    
    scanf("%d", &one);
    
    for(int i = one; i > 0; i--){
        
        cont += i;
        
    }
    
    printf("%d", cont);
    
}