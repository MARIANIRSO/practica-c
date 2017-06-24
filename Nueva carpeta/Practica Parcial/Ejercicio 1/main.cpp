#include <stdio.h>
#include <stdlib.h>

int main()
{
    int const TOTAL=3;
    int vector[TOTAL];
    int  i;

    do
    {
        //primero se carga el vector, recorriendolo
        for(i=0; i<TOTAL; i++)
        {
            printf("ingresar numeros: \n");
            scanf("%d", &vector[i]);
        }

    }
    while((vector[i]<TOTAL)&&(vector[TOTAL]!=0));


    if()
    {
        for(i=0; i<TOTAL; i++)
        {
            printf("valor guardado en la posicion %d = %d \n", i, vector[i]);

        }
    }




    return 0;
}


// se lo inicializa en o

//for(i=0; i<TOTAL; i++)
//        {
//            printf("ingresar numeros: \n");
//           int nulo=0;
//            vector[i]=nulo;
//        }
