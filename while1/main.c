//   Pedir números hasta que el usuario quiera, mostrar el número máximo y el número mínimo.
// CON 1 SIGUE
//CON 0 SALE

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int seguir;
    float suma=0;
    float promedio=0;
    int contador=0;

    do
    {


        printf ("ingrese numeros:");
        scanf("%d",&numero);
        while(numero<0 || numero>120 || numero%2==0 || numero%3!=0)
        {
            printf("\n Nro erroneo reingrese nro: ");
            scanf("%d",&numero);

        }
contador++;

        printf("\n quiere ud seguir ingresando numeros? 1/si 0/no: ");
        scanf("%d",&seguir);

        while(seguir!=1 && seguir !=0)
        {
            printf("\n DATO INGRESADO INCORRECTO ");
            printf(" \n por favor ingrese opcion 1/si 0/no: ");
            scanf("%d",&seguir);
        }
suma= suma +numero;

    }while(seguir!=0);

promedio= suma / contador;
 printf("\n EL PROOMIEDO DE LA SUMA DE LOS NUMROES INGRESADOS ES : %.2f", promedio);

    return 0;
}
