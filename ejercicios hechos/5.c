//5. Escribir el programa necesario para calcular y mostrar el cuadrado de un número. El número debe ser
//mayor que cero, en caso de error que aparezca el mensaje "ERROR, el número debe ser mayor que cero"


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int cuadrado=0;


    printf("Ingrese  Numero de cual quiera calcular su cuadrado: \n");
    scanf("%d",& numero);

    while(numero<0)
    {
        printf("ERROR, el numero debe ser mayor que cero!!\n");
        printf("Ingrese  Numero de cual quiera calcular su cuadrado\n");
        scanf("%d",& numero);
    }

    cuadrado= numero*numero;

    printf("\n El cuadrado del nuemro %d es : %d", numero,cuadrado);

    return 0;
}
