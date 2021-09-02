/*
-Escribir un programa que nos diga el numero más grande de un arregle. Utilizando arreglos e iteradores
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,size;
    printf("Ingrese el tama%co de su arreglo: ",164);
    scanf("%i",&size);

    int numbersArray[size], maxNumber= 0;

    for( i=0; i < size; i++)
    {
        printf("Ingrese el valor para el indice %i del arreglo: ",i);
        scanf("%i",&numbersArray[i]);
        printf("Valor(%i) = %i\n",i,numbersArray[i]);
        
        if(numbersArray[i] > maxNumber);
            maxNumber = numbersArray[i];
    }

    printf("El numero mayor del arreglo es: %i",maxNumber);

    return 0;
}


