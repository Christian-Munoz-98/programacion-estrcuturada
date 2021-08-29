/*
-Ingresar valores a un arreglo con un tamaño de 5.
-Multiplicar todos sus valores
-Imprimir el resultado
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int total,numberList[5] = {23,45,63,21,14};

    printf("Estos son los numeros:\n");
    for (j = 0; i < 5; i++) 
    {
        printf("%i\n",numberList[i]);
    }

    for(i = 0; i < 5; i++)
    {
        total *= numberList[i];
    }
    printf("La multiplicacion de esos numeros es: %i",total);
    return 0;
}