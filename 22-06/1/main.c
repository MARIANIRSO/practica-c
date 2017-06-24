#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int numero;
    int suma=0;
    float promedio;
    for(i=0; i<5; i++)
    {
        printf("ingrese un valor : \n");
        scanf("%d",&numero);
        suma= suma + numero;

    }
    promedio= (float)suma/5;
    printf("\n la media es %.2f",promedio);
    return 0;
}
