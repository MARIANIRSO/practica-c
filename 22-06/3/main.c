// Efectúe el producto de dichas variables
// Muestre el resultado pos pantalla
// Obtenga el cuadrado de numero1 y lo muestre par pantalla
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    int numero2;
    int producto=0;
    int cuadrado=0;

    printf(" ingres primer numero : \n");
    scanf("%d",&numero1);

    while (numero1<0)
    {
        printf("dato erroneo");
        printf(" reingrese primer numero : \n");
        scanf("%d",&numero1);
    }

    printf(" ingres segundo numero : \n");
    scanf("%d",&numero2);
    while (numero2<0)
    {
        printf("dato erroneo");
        printf(" reingrese primer numero : \n");
        scanf("%d",&numero2);
    }

    producto= numero1*numero2;
    printf("\n el producto es :%d", producto );

    cuadrado= numero1*numero1;

    printf("\n la potencia de primer numero es :%d", cuadrado );

    return 0;
}
