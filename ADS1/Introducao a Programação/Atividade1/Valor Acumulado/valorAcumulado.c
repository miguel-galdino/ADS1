#include <stdio.h>
#include <math.h>

int main()
{
	float m, j, p;
	int n;
	
	/*printf("informe o valor da aplicacao: ");*/
	scanf("%f", &p);
	/*printf("\ninforme a taxa de juros mensal: ");*/
	scanf("%f", &j);
	/*printf("\ninforme o numero de meses: ");*/
	scanf("%d", &n);
	
	
	j = j / 100;
	m = p * (pow(1 + j, n) - 1) / j;
	
	/* Tentativas que falhei por não saber como calcular um montante ;)
	
	j += j1;
	v = j + 1;
	v = pow(j, n);
	v = (j - 1) / j1;
	v = p * v;
	
	
	for(int i = n; i > 0; i--){
	    
	    p * (pow(1 + j, n) - 1) / j;
	    printf("%f\n", p);
	}
	
	
	i = i + 1;
	i = pow(i , n);
	p = p * i;
	
    while(n > 0) {
        p += p * i;
        n -= 1;
        printf("%.2f\n" , p);
    }*/
    
    printf("\nValor acumulado ao final de %d meses: R$ %.2f", n , m);
	
}
