#include <math.h>
#include <stdio.h>
int main(int argc, char const *argv[])
	  /* Gonzalez Betanzos Fabiola
    Esquipo "Alfa Buena Maravilla Escuadron Lobo"
    30 abr 21
    Programa 6.
    */
{

	double numero; // Aquí vamos a almacenar lo que el usuario introduzca
	printf("Escribe un numero y te dire su raiz cuadrada\n");
	scanf("%lf", &numero); // Escanear lo que el usuario ingresa
	double raizCuadrada = sqrt(numero); // Calcular raíz
	printf("La raiz cuadrada de %lf es %lf\n", numero, raizCuadrada);
	return 0;
}
