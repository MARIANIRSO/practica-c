//programa que ingrese dos numeros
// y que muestre los numeros que hay entre el segundo y el primero
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int numero1;
    int numero2;

    printf("ingrese primer numero a chequear: \n");
    scanf("%d",&numero1);
    printf("ingrese segundo numero a chequear: \n");
    scanf("%d",&numero2);
    printf("\n los numeros son; %d y %d \n", numero1,numero2);
    if(numero1>numero2)
    {
        printf("Los valores introducidos no son correctos \n");

    }
    else
    {
        for(i=numero1; i<=numero2; i++)
        {
            printf("\n los numeros son; %d",i);
        }
    }
    return 0;
}
