#include <stdio.h>
#include <stdlib.h>

int main()
{
    int const ALUMNOS=5;
    int i;
    int nota[ALUMNOS];
    int opcion;
    int notaMayor;
    int notaMenor;
    int posicionMayor=0;
    int posicionMenor=0;
    float promedioNotas=0;



    for(i=0; i<ALUMNOS; i++)
    {
        printf("\n INGRESE NOTA  DEL ALUMNO %d :", i+1);
        scanf("%d",&nota[i]);
        fflush(stdin);
        while(nota[i]<0||nota[i]>10)
        {
            printf("\n DATO ERRONEO");
            printf("\n REINGRESE NOTA  DEL ALUMNO %d :", i+1);
            scanf("%d",&nota[i]);
            fflush(stdin);
        }


    }

    printf("\n 1- Listar notas");
    printf("\n 2- Promedio");
    printf("\n 3- Nota Menor y posicion");
    printf("\n 4- Nota Mayor y posicion \n");

    scanf("%d", &opcion);

    switch(opcion)
    {

    case 1:
        for(i=0; i<ALUMNOS; i++)
        {
            printf("\n Alumno %d saco  la nota : %d ",i+1,nota[i]);
        }

        break;
    case 2:   for(i=0; i<ALUMNOS; i++)
               {
                    promedioNotas= promedioNotas +  ((float)nota[i])/ALUMNOS;
                    }
                    printf("El promedo da las notas es: %.2f", promedioNotas);
        break;
        
    case 3: 
         for(i=0; i<ALUMNOS; i++)
         {
     if(nota[i]>notaMenor)
{
     notaMenor=nota[i];
     posicionMenor=i;
 }
 }
 printf("la nota menor es: %d \n",notaMenor);
 printf("esta en la posicion: %d",posicionMenor);
 
        break;
  
  case 4:

        notaMayor=nota[0];

        for(i=0; i<ALUMNOS; i++)
        {
            if(nota[i]>notaMayor)
            {
                notaMayor=nota[i];
                posicionMayor=i;
            }
        }
        printf("la nota mayor es: %d \n",notaMayor);
        printf("esta en la posicion: %d",posicionMayor);

        break;



    }


 printf("\n");

system("pause");


    return 0;
}
