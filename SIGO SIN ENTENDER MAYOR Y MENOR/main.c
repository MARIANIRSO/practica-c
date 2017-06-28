//Diseñar un programa que lea 4 números e imprima el mayor de los cuatro
#include <stdio.h>
#include <stdlib.h>

int main()

{
    int i;
    int numero;
    int numeroMayor;
    int numeroMenor;
    for(i=0; i<4; i++)
    {
        printf("ingrese numero: \n");
        scanf("%d",&numero);

        if(i==0)
        {

            numeroMayor=numero;
            numeroMenor=numero;
        }
     else
     {
         if (numero>numeroMayor)
         {
              numeroMayor=numero;
         }
      else
      {
          if(numero<numeroMenor)
          {
              numeroMenor=numero;
          }
      }
     }

     }
     printf("el numero mayor ingresado es %d\n",numeroMayor);
     printf("el numero menor ingresado es %d\n",numeroMenor);


    return 0;
}
