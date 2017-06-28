//Diseñar el programa necesario para que habiéndose leído el valor de 2 variables NUM1 y NUM2 se
//intercambien los valores de las variables, es decir que el valor que tenía NUM1 ahora lo contenga NUM2 y
//viceversa



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    int numero2;
    int numeroControl;

    printf("ingrese primer numero: \n");
    scanf("%d",&numero1);
    printf("ingrese segundo numero numero: \n");
    scanf("%d",&numero2);
    printf("\n el numero uno es:%d ", numero1);
    printf("\n el numero dos es:%d \n\n",numero2);

    system("pause");

    numeroControl=numero1;
    numero1=numero2;
    numero2=numeroControl;




    printf("\n el numero uno es:%d ", numero1);
    printf("\n el numero dos es:%d \n\n",numero2);
//c=a
//b=a
//

    return 0;
}
