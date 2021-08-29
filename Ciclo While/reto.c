/*
-Hacer un programa que imprima el símbolo de # en 5 filas

Puedes usar operadores de incremento y decremento
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iterador=0;

    while(iterador<5)
    {
        printf("#####\n");
        iterador++;
    }
    return 0;
}
