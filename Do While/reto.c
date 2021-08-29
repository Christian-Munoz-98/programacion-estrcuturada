/*
Usando do while, imprime los primeros 100 numeros naturales
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=1;

    do
    {
        printf("%i\n",num);
        num++;
    }while(num < 101 );

    return 0;
}