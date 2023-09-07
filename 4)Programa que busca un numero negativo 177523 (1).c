//Programa que busca un numero negativo
#include <stdio.h>
#include <math.h>

int main() {
    system("cls");
	int a=1;


	printf("\033[1;34m ""Programa que busca un numero negativo\n");
	while (1) {
        printf("\033[0;37m ""Ingresa un numero que sea negativo: ");
        scanf("%d", &a);
        
    while (a>0){
    	printf("Ingresa un numero, pero que sea negativo: ");
        scanf("%d", &a);	
    }

    if (a < 0) {
        printf("Gracias por insertar un numero negativo.\n");
        break;
        }
    }

    return 0;
}

