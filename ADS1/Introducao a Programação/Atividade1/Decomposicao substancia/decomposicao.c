
#include <stdio.h>
#include <math.h>

int main()
{
    float v, t;
    
    printf("Informe o tempo em minutos: " );
    scanf("%f", &t);
    
    v = t * -0.5;
    v = pow(2, v);
    t = 2048 * v;
    
    printf("%.4f", t);
}
