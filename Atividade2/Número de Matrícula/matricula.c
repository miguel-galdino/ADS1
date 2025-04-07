#include <stdio.h>

int main()
{
    int nMatricula;

    printf("Informe o número de matrícula: ");
    scanf("%d", &nMatricula);
    
    nMatricula = nMatricula % 10;
    if(nMatricula == 1 || nMatricula == 2 || nMatricula == 0){
        printf("Pagamento até 10/fevereiro");
    }
    else if(nMatricula == 3 || nMatricula == 4 || nMatricula == 5){
        printf("Pagamento até 10/abril");
    }
    else if(nMatricula == 7 || nMatricula == 6){
        printf("Pagamento até 10/junho");
    }
    else{
        printf("pagamento até 10/agosto");
    }
    
}