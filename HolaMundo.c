#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int integerA;
    float floatA;
    char letterA;

    printf("Ingresa el valor del entero A: ");
    
    scanf("%i",&integerA);

    printf("Ingresa el valor del Float A: ");
    
    scanf("%f",&floatA);

    printf("Ingresa el valor del Caracter A: ");
    
    scanf(" %c",&letterA);

    printf("El entero A es: %i\n", integerA);

    printf("El float  A es: %.2f\n", floatA);

    printf("El caracter A es: %c\n",letterA);

   

    return 0;
}