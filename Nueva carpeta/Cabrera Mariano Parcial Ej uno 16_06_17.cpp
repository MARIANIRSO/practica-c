/*TP CONSIGNA 1. Cargar un vector de 150 posiciones de enteros. Contar la cantidad de ceros 
que han ingresado. 
Emitir por pantalla si esa cantidad es mayor, igual o menor a diez..	.*/

/* 
ALUMNO: Cabrera Mariano David
DNI:34.572.698
*/  

#include<stdio.h>
#include<stdlib.h>
int main ()
{   int  const POSICIONES=15;
    int vec[POSICIONES];
    int contadorde0=0;
    int i;

 
 for(i=0;i<POSICIONES;i++)
 {
 printf("\n Ingrese valores al  vector: ");
 scanf("%d",& vec[i]);
 fflush(stdin);
 if(vec[i]==0);
contadorde0++;

}
 //for(i=0;i<POSICIONES;i++)
// printf("\t [%d] ", vec[i])


   if(contadorde0>10);   
   printf("\n La cantidad de ceros  mayores a 10 ingresados es: %d",contadorde0);    
   if(contadorde0==10);
   printf("\n La cantidad de ceros menores a 10 ingresados es: %d",contadorde0);                    
   if(contadorde0<10);                                
   printf("\n La cantidad de ceros iguales a 10 ingresados es: %d",contadorde0);
   
printf("\n");
 system ("pause");
 
 return 0;  
}

