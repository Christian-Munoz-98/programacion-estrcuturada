#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arreglos e iteradores\n");

    int i;
    int integerArray[11];

    for(i = 0; i < 11; i++)
    {
        integerArray[i]= i*i;
        printf("Valor (%i) : %i \n",i,integerArray[i]);
    }

    return 0;
}