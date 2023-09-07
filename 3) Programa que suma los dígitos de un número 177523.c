// Programa que suma dígitos de un número dado//

#include <stdio.h>
#include <math.h>

int main() {
	system("cls");
	char repetir;
	do{
    	int num;
		int suma = 0;
		int digitos;
		
		printf("\033[0;33m ""Programa que suma los digitos de un numero\n");
		
    	printf("\033[0;37m ""Ingresa un numero: ");
    	scanf("%d", &num);

    	if (num < 0)
		num : -num;

    		while (num > 0) {
        		digitos = num%10;
        		suma += digitos;
        		num /= 10;
    		}

    	printf("\033[1;33m ""La suma de los digitos es:"); 
		printf("\033[0;37m ""%d\n", suma);
	
	
    printf("\n Desea hacer otra suma? (s/n): \n");
	scanf(" %c", &repetir);

	}
	while (repetir == 's' || repetir=='S');
   
    return 0;
}

