#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    printf("\nEntra a la funcion factorial, n vale: %i\n",n);

    if(n > 1)
    {
        printf("\nLa funcion se llamara a si misma otra vez\n");
        return n * factorial(n-1);
    }
    else
    {
        printf("\nn es igual a 1, termina la recursividad\n");
        return 1;
    }
}

int main()
{
    printf("Recursividad!\n");

    int n;
    printf("\nDe que numero quiere calcular el factorial: \n");
    scanf("%i",&n);
    int result = factorial(n);
    printf("\nEl resultado es: %i\n",result);

    system("pause");
    return 0;
}