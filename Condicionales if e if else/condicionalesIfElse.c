#include <stdio.h>
#include <stdlib.h>



int main()
{
    printf("Condicion if, else, else if\n");

    float valA, valB, valC;

    valA = 50;
    valB = 100;
    valC = 150;

    printf("Condicion: \n");

    if(valA < valB)
        printf("Esta condicion si se cumplio\n");
    
    if(valB > valC)
        printf("Esta no se va a cumplir\n");
    else if (valC > valA)
    {
        printf("Esta condicion se pudo cumplir\n");
        printf("Despues de esta linea el programa va a terminar");
    }
    
    return 0;
}
