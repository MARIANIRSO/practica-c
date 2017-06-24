#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    int numero2;
    int suma=0;

    printf("ingrese primer numero :\n");
    scanf("%d", &numero1);
    printf("ingrese segundo numero :\n");
    scanf("%d", &numero2);

    suma = numero1 + numero2;
        printf("la suma es :%d \n",suma);

    return 0;
}
