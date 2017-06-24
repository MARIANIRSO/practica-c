//6.Escribir el programa. De 10 números ingresados indicar cuantos son mayores a cero y
// cuantos son menores a cero

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i;
    int numero;
    int mayorCero=0;
    int menorCero=0;

    for(i=0; i<10; i++)
    {
        printf("ingrese numero:%d:  ", i+1);
        scanf("%d",&numero);

        if(numero>0)
        {

            mayorCero++;
        }
        if (numero<0)
        {
            menorCero++;
        }
    }
    printf("\nlos numeros mayores de Cero ingresados son : %d", mayorCero);
    printf("\nlos numeros menores de Cero ingresados son : %d", menorCero);




    return 0;
}
