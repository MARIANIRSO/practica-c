#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int const LARGO=3;
    int vector[LARGO];


    for(i=0; i<LARGO; i++)
    {
        printf("ingresar numeros: \n");
        scanf("%d", &vector[i]);
    }


    for(i=0; i<LARGO; i++)
    {
        printf("valor guardado en la posicion %d = %d \n", i, vector[i]);

    }

    return 0;
}
