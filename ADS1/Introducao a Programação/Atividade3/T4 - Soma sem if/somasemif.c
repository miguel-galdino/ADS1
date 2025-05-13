#include <stdio.h>

int main(){
    
    int  cont = 0;
    
    for(int x = 0; x <= 1000 ; x = x + 2){
        cont += x;
    }
    printf("Soma: %d", cont);
}