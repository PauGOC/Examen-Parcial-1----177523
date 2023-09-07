//Programa que imprime 10 numeros a partir de n

#include <stdio.h>
#include <math.h>

int main (){
	system("cls");
	char repetir;
	do {
	int a=0;

    	printf("\033[0;31m "" ""Programa para obtener los siguientes 10 numeros \n");
		printf("\033[0;38m ""Introduce un numero: ");
    	scanf("\033[0;37m ""%d", &a);
    	
    	printf("\033[1;31m ""Los siguientes 10 numeros son: \n");
    	printf("\033[0;38m");
		printf("%d\n",a+1);
    	printf("%d\n",a+2);
    	printf("%d\n",a+3);
    	printf("%d\n",a+4);
    	printf("%d\n",a+5);
    	printf("%d\n",a+6);
    	printf("%d\n",a+7);
    	printf("%d\n",a+8);
    	printf("%d\n",a+9);
    	printf("%d\n",a+10);	
    	
    	printf("\n Desea repetir el programa? (s/n): \n");
	scanf(" %c", &repetir);

	}
	while (repetir == 's' || repetir=='S');
	return 0;
}
	
