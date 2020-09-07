#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    char* manolo;
    scanf("%s",manolo);
    printf("el nombre es %s",manolo);
    long pepe;
    pepe=300.51;
    long juan;
    juan=pepe+200.23;
    //int i;

    for(int i=0;i<20;i++)
    {
        printf("hola\n");
    }
    if(juan==3)
    {
        printf("esta juan");
    }else{printf("no esta juan");}


    int a;

    a=1;
    while (a<3)
    {
        printf("bucle\n");
        a++;
    }
    printf("el resultado es  %d %d  ",pepe,juan);
    int dia;

	printf("¿Qué número de día de la semana es?");
	scanf("%i",&dia);

	switch(dia) {
		case 1 :
			printf("Lun, Lunes");
			break;
		case 2 :
			printf("Mar, Martes");
			break;
		case 3 :
			printf("Mier, Miercoles");
			break;
		case 4 :
			printf("Jue, Jueves");
			break;
		case 5 :
			printf("Vie, Viernes");
			break;
		case 6 :
			printf("Sab, Sabado");
			break;
		case 7 :
			printf("Dom, Domingo");
			break;
		default :
			printf("No existe");
}


   //int n[ 10 ]; /* n is an array of 10 integers */
   //int j; /*i ya esta declarado

   /* initialize elements of array n to 0 */
   //for ( i = 0; i < 10; i++ ) {
   //   n[ i ] = i + 100; /* set element at location i to i + 100 */
   //}

   /* output each array element's value */
   //for (j = 0; j < 10; j++ ) {
   //   printf("Element[%d] = %d\n", j, n[j] );
   //}
    return 0;
}
