// Programa que obtiene la tabla de multiplicar de n numero

#include <stdio.h>
#include <math.h>

int main (){
	char repetir;
	do{
	int b=0;
		system("cls");
		printf("\033[0;32m ""Programa que obtiene la tabla de multiplicar de un numero\n");
    	printf("\033[0;38m ""Introduce un numero: ");
    	scanf("%d", &b);
    	
    	printf("\033[1;32m ""La tabla de multiplicar del 1 al 10 es: \n");
    	printf("\033[0;38m");
    	printf("%d*1= %d\n",b, b*1);
    	printf("%d*2= %d\n",b, b*2);
    	printf("%d*3= %d\n",b, b*3);
    	printf("%d*4= %d\n",b, b*4);
    	printf("%d*5= %d\n",b, b*5);
    	printf("%d*6= %d\n",b, b*6);
    	printf("%d*7= %d\n",b, b*7);
    	printf("%d*8= %d\n",b, b*8);
    	printf("%d*9= %d\n",b, b*9);
    	printf("%d*10= %d\n",b, b*10);	
    	
    	printf("\n Desea repetir el programa? (s/n): \n");
	scanf(" %c", &repetir);

	}
	while (repetir == 's' || repetir=='S');
	return 0;
}
	

