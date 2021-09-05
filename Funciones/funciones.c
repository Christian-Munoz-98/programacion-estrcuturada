#include <stdio.h>
#include <stdlib.h>

int Addition(int a, int b)
{
    return a + b;
}

int main()
{
    printf("Funciones\n");

    int addittionRes = Addition(3,4) + Addition(4,5) + Addition(9,45);

    printf("Resultado es: %i", addittionRes);


    return 0;
}