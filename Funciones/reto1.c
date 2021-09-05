/*
Vamos a calcular la potencia de un número

-ingresar un valor base
-Ingresar un valor de exponente
-Dentro de una función calcular el exponente del numero base
-imprime el resultado
*/

#include <stdio.h>
#include <stdlib.h>

int potencia( int base, int exponente)
{
    int i,multiplicador=base;
    for(i=1; i < exponente; i++)
    {
        base *= multiplicador;
    }
    return base;
}

int main()
{
    int base,exponente, resultado;

    printf("Ingrese la base que quiere elevar: ");
    scanf("%i",&base);
    
    printf("Ingrese el exponente al que quiere elevar esa base: ");
    scanf("%i",&exponente);

    resultado = potencia(base,exponente);

    printf("%i a la %i = %i",base, exponente, resultado);

    return 0;
}

