//11. Hacer el programa que imprima los números pares entre el 1 y el 100
#include <stdio.h>
#include <stdlib.h>

int main()
{ int i;
    for(i=1; i<=100; i++)
    {
        if(i%2==0)
            printf("\n los numeros pares son; %d\n", i);
    }
    return 0;
}
