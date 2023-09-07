// Programa que obtine los impares de una lista //

#include <stdio.h>
#include <math.h>

int main (){
	system("cls");
	
	char repetir;
	
	do {
	int a;
	int b=1;
	
	printf("\033[0;35m ""Programa que obtine los numeros impares hasta n numero\n");
	printf ("\033[0;37m ""Ingrese un número :");
	scanf("%d", &a);

	printf("\033[1;35m ""\nLos números impares de este numero son:\n");
	
	if (a%2==0){
		printf ("\033[0;37m ""%d\n",a-1);	
		a=a-3;
	}
	
	while (a%2 ==1)
		{
			printf("\033[0;37m ""%d \n",a--);
			a=a-1;
	}
	printf("\n Desea repetir el programa? (s/n): \n");
	scanf(" %c", &repetir);

	}
	while (repetir == 's' || repetir=='S');
	return 0;
}
