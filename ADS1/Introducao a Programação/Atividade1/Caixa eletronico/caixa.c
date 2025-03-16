#include <stdio.h>

int main()
{
	int valor, c100 = 0, c50 = 0, c20 = 0, c10 = 0, c5 = 0;
	
	printf("Informe um valor de final 0 ou 5: ");
	scanf("%d", &valor);

	while(valor > 0){
        
    	if (valor >= 100){
    	c100 += 1;
    	valor -= 100;
    	}
    
    
    	else if(valor >= 50){
    	c50 += 1;
    	valor -= 50;
    	}
    
    	else if(valor >= 20 ){
    	c20 += 1;
    	valor -= 20;
    	}
   
    	else if(valor >= 10 ){
    	c10 += 1;
    	valor -= 10;
    	}

    	else if (valor >= 5) {
            c5 += 1;
            valor -= 5;
        }
        
	}
	printf("%d cédulas de 100\n", c100);
    printf("%d cédulas de 50\n", c50);
    printf("%d cédulas de 20\n", c20);
    printf("%d cédulas de 10\n", c10);
    printf("%d cédulas de 5\n", c5);
	
	return(0);
}