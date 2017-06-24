#include <stdio.h>
#include <stdlib.h>

int main()
{
    int const DIMENSION = 5;
    int i;
    int j;
    int vec[DIMENSION];
    int auxVec;


    for(i=0; i<DIMENSION; i++)
    {
        printf("\n favor de ingrear valores enteros: ");
        scanf("%d", & vec[i]);
        fflush(stdin);
    }

    for(i=0; i<DIMENSION; i++)
    {
        for(j=0; j<DIMENSION; j++)
        {
            if(vec[j] > vec[j+1])
            {
                auxVec = vec[j];
                vec[j] = vec[j+1];
                vec[j+1] = auxVec;
            }
        }
    }

    printf("Numeros de forma Ascendente: ");
    for(i=0; i<DIMENSION; i++)
    {
        printf("\t\n%d\n ",vec[i]);

    }

    for(i=0; i<DIMENSION-1; i++)
    {
        for(j=i+1; j<DIMENSION; j++)
        {
            if(vec[i] < vec[j])
            {
                auxVec = vec[i];
                vec[i] = vec[j];
                vec[j] = auxVec;
            }
        }
    }
    printf("Numeros de forma descendente: ");
    for(i=0; i<DIMENSION; i++)
    {
        printf("\t\n%d\n ",vec[i]);

    }
}
//#include <stdio.h>
//#include <stdlib.h>
//#define V 5
//
//
//
//int main()
//{
//    int legajo[V]= {4,1,2,7,3};
//    int i, j;
//    int auxInt;
//    float auxFloat;
//
//    for(i=0; i<V-1; i++)
//    {
//        for(j=i+1; j<V; j++)
//        {
//            if(legajo[i]<legajo[j])
//            {
//                auxInt = legajo[i];
//                legajo[i] = legajo[j];
//                legajo[j] = auxInt;
//
//            }
//        }
//    }
//
//    for(i=0; i<V; i++)
//    {
//        printf("%d\n", legajo[i]);
//    }
//
//
//
//
//    return 0;
//}


////
////    return 0;
////}
