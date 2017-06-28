#include <stdio.h>
#include <stdlib.h>


int main()
{
    int numero;
    int i;
    long long int factorial=1;



    printf("ingresar numero: ");
    scanf("%d", &numero);

    printf("ingresaste %d ", numero);



    for(i=numero;i>1;i--)
    {
        factorial=factorial*i;
    }


    printf(" \n factorial %lli", factorial);
    return 0;
}
