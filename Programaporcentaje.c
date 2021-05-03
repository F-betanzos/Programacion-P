#include <stdio.h>

int main(){
     /* Gonzalez Betanzos Fabiola
    Esquipo "Alfa Buena Maravilla Escuadron Lobo"
    30 abr 21
    Programa 7.
    */
    
    float precioOriginal, porcentajeAumento;
    printf("Ingresa el precio original: ");
    scanf("%f", &precioOriginal);
    printf("Ingresa el porcentaje de aumento: ");
    scanf("%f", &porcentajeAumento);

    float aumento = precioOriginal * (porcentajeAumento / 100);
    float precioConAumento = precioOriginal + aumento;
    printf("Precio con aumento: %0.2f", precioConAumento);
    return 0;
}
