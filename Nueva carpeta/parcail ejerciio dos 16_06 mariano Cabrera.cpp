/*TP Consigna 2.	Cargar una matriz de 8x8 con enteros positivos, sumar todos
los elementos de sus filas y cargarlos a un vector, hacer el promedio de sus
columans y cargarlos en otro vector. Mostrar la matriz y los vectores.*/

/* APELLIDO, NOMBRE Y DNI: CABRERA MARIANO DAVID DNI 34572698.
                                */


#include <stdio.h>
#include <stdlib.h>
int main()
{
    int const ENTEROS=3;
    int matriz[ENTEROS][ENTEROS];
    int i;
    int j;
    int SumatoriaFilas;
    int vecFilas[ENTEROS];
    int vecColumanas[ENTEROS];
    int filas;
    int columnas;
    int sumaFilas=0;
    
    for(i=0;i<ENTEROS;i++)
    {
             for(j=0;j<ENTEROS;j++) 
             {
             printf("\n Ingrese valor para la fila %d y Columna %d :", i+1,j+1);
             scanf("%d",&matriz[i][j]);
             fflush(stdin);
             
             while(matriz[i][j]<0)
             {
              printf("\n DATO INVALIDO");
              printf("\n ReIngrese valor para la fila %d y Columna %d :", i+1,j+1);
              scanf("%d",&matriz[i][j]);
              fflush(stdin);
             }
             }
             }
for(filas=0;filas<ENTEROS;filas++)
{
    for(columnas=0;columnas<ENTEROS;columnas++)
    {
        sumaFilas+=matriz[filas][columnas];
    }
    vecFilas[filas]=sumaFilas;
}
for(i=0;i<ENTEROS;i++)
{
    printf("\n LA SUMA DEL VECTOR ES: %d \n",vecFilas[i]);
}
             
   system("pause"); 
    return 0;
    }
