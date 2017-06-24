/* TP CONSIGNA 3: ESTE PROGRAMA TIENE VARIOS ERRORES SINT?CTICOS, ARR?GLELOS PARA
QUE PUEDA CORRER NORMALMENTE.
     Una estaci?n meteorol?gica realiza 3 lecturas diarias de temperatura.
	Ingresar las lecturas de cada d?a del mes de Abril.
	Mostrar por pantalla el informe diario del tiempo de acuerdo a cada
	promedio diario
	"frio" menos que 10? "templado" entre 10 y 25? "calido" mayor a 25?
	Contabilizar cuantos dias frios hubo en el mes, y cual fue la temp
	mas alta registrada y qu? d?a fu?
  */
  
/* 
ALUMNO: mariano cabrera
DNI:- 34 572 698 
*/ 

#include <stdio.h>
int const N=5;
int const M=3;

int main()
{
int i, j, cantfrio, diaalta;
float prom, t, alta;

cantfrio=diaalta=0;
alta=-345;




	for (i=1; i<=N; i++)
   prom=0;
		for (j=1; j<=M; j++)
		{
			printf("\n Ingrese %d temperatura del dia %d de Abril: ",j,i);
			scanf("%f",t);
			fflush(stdin);
			prom=prom+t;
            }
			if (t>alta)
			{	alta=t;
				diaalta=i;}}
		prom=prom/M;
		if (prom<10)
		{	printf("\n FRIO \n");
			cantfrio++ ;
		if ((prom>=10) && (prom<=25))
			printf("\n TEMPLADO \n")
		if (prom>25)
			printf("\n CALIDO \n");
	
	 printf("\n Hubo %d dias frios en Abril \n",cantfrio);
	 printf("\n El dia %d de Abril se registro la temp. mas alta, que fue de %5.2f C.\n", diaalta, alta)
printf("\n\n\t\t Pulse para salir...");
getchar();
return 0;
}


