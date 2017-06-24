#include <stdio.h>
#include <stdlib.h>
int main()
{
    int const VALORES=3;
    int matriz[VALORES][VALORES];
    int i;
    int j;


    for(i=0; i<VALORES; i++)
    {
        for(j=0; j<VALORES; j++)
        {
            printf("\n Ingrese un valor en la fila %d columna %d: ",i+1,j+1);
            scanf("%d",&matriz[i][j]);
            fflush(stdin);

            while(matriz[i][j]>0)
            {
                printf("\n dato erroneo");
                printf("\n  favor de ingresar un valor en la fila %d columna %d: ",i+1,j+1);
                scanf("%d",&matriz[i][j]);
                fflush(stdin);
            }

        }
    }

    for(i=0; i<VALORES; i++)
    {
        for(j=0; j<VALORES; j++)
            {
                printf("[%d]\t",matriz[i][j]);
            }

    }
    system ("pause");
    return 0;
}
