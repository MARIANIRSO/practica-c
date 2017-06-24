#include <iostream>
#include <stdio.h>
#include <stdlib.h>
int main()
{


    //variables para numeros pares
    int contadorPares =0;

    //variables para numeros impares
    int contadorImpares=0;
    int sumatoriaImpares=0;

    //variables generales
    int unidad=1;
    int numeros;
    int seguir=1;
    int acumuladorGeneral=0;
    int contadorGeneral=0;

    // variables de resltados
    float promedioNumeros;
    int numeroMayor;
    int numeroMenorImpar;
    int contadorNumero3a15=0;
    int contadorNumero16a29=0;
    int contadorNumero30mas=0;

    //fin de declaracion de variables
    do

    {
        printf("\n Ingrese  valores enteros: ");
        scanf("%d",&numeros);
        fflush(stdin);


        while(numeros<0)
        {
            printf ( "\n DATO ERRONEO");
            printf("\n reingrese  otro  valor entero: ");
            scanf("%d",&numeros);

        }
        acumuladorGeneral=acumuladorGeneral+numeros;
        contadorGeneral++;



        if(numeros%2==0)
        {
            contadorPares++;

        }

        // aca van a estar todos los numeros impares
        else
        {
            contadorImpares++;
            sumatoriaImpares= sumatoriaImpares+numeros;
        }
        if(numeros>=3 && numeros<=15)
        {
            contadorNumero3a15++;
        }
        if(numeros>=16 && numeros <= 29)
        {
            contadorNumero16a29++;
        }
        if(numeros>=30)
        {
            contadorNumero30mas++;
        }



        // como es el primer ingreso
        // tengo solo un numero
        //por lo tanto
        // ese numero es el mayor y el menor, xq es el unico que hay

        if(contadorGeneral==1)
        {
            numeroMayor=numeros;
            numeroMenorImpar=numeros;

        }
        // en este bloque van a estar todos los valores a partir del segundo ingreso de numeros
        // a partir del segundo ingreso hay varios numero
        // por lo tanto el mayor y el menor son distintos
        else
        {
            if(numeros>numeroMayor)
            {
                numeroMayor=numeros;
            }
            else
            {

            	

                if(numeros%2==0)
                {
                }

                // aca van a estar todos los numeros impares
                else
                {
                    if(numeroMenorImpar>numeros)
                    {
                        numeroMenorImpar=numeros;
                    }

                }


            }



        }


        // aca van a estar todos los numeros pares
        promedioNumeros= acumuladorGeneral/contadorGeneral;

        //promedioNumeros= promedioNumeros+ numeros
        // con esto preguntas para salir del bucle
        printf("\n ingresar mas numeros [1/0]: ");
        fflush(stdin);
        scanf("%d",&seguir);
        while(seguir!=1 && seguir!=0)
        {
            printf ( "\n OPCION INCORRECTA, INGRESAR 1/0 \n");
            scanf("%d",&seguir);

        }


    }
    while(seguir==1);



    // todo esto esta afyera del bucle
    printf ( "\n saliste del bucle");
    printf("\n 1-Ingresaste %d numeros pares",contadorPares);
    printf("\n 2-Ingresaste %d numeros impares",contadorImpares);
    printf("\n 3-La suma de los numeros impares es :%d", sumatoriaImpares);
    printf("\n 4-Se ingrearon un total de %d numeros", contadorGeneral);
    printf("\n 4-El promedio de los numeros ingresados es :%.2f", promedioNumeros);
    printf("\n 5-El mayor numero ingresado es %d:", numeroMayor);
    printf("\n 6-El menor numero impar ingresado es %d:", numeroMenorImpar);
    printf("\n 7-La cantidad de los numeros es: \n");
    printf("entre 03 a 15 es: %d \n", contadorNumero3a15);
    printf("\n  entre 16 a 29 es: %d", contadorNumero16a29);
    printf("\n 30 o mas: %d \n", contadorNumero30mas);
    printf("8- \n");

    //punto a


//punto b
    for(sumatoriaImpares; sumatoriaImpares>=unidad; sumatoriaImpares--)
    {
        printf("\n %d",sumatoriaImpares);
    }




    return 0;
}
