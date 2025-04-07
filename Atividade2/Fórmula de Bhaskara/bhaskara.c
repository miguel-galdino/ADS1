#include <stdio.h>

int main(){
    
    float a, b ,c, x,  discriminante;
    
    /*printf("Informe o valor de A: ");*/
    scanf("%f", &a);
    /*printf("Informe o valor de B: ");*/
    scanf("%f", &b);
    /*printf("Informe o valor de C: ");*/
    scanf("%f", &c);
    
    if (a == 0){
        
        printf("Não é uma equação do segundo grau");
        
    }else{
        
        discriminante = b * b - (4 * a * c);
        
        a = a * 2;
    
        if(discriminante > 0){
            
            double y = 0.0;
            
            while(y * y < discriminante){
                y += 0.0001;
            }
            
            discriminante = y; 
            
            x = (-b + discriminante) / a;
            printf("%.2f", x);
        
            discriminante = (-b - discriminante) / a;
            printf(" %.2f", discriminante);
            
        }else if (discriminante < 0){
            
            printf("Não existe raiz real");
            
        }else if(discriminante = 0.0001){
            
            discriminante = -b / a;
            printf("%.0f", discriminante);
            
        }
    }
}