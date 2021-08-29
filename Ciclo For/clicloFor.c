#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Iteradores For\n");

    int i;

    int upperLim, bottomLim;

    printf("Imprimir en orden descendiente\n");

    printf("Ingresar limite superior: \n");
    scanf("%i", &upperLim);

    printf("Ingresar limite inferior: \n");
    scanf("%i", &bottomLim);

    for( i = upperLim; i >= bottomLim; i--)
    {
        printf("Numero: %i\n",i);
    }


    return 0;
}