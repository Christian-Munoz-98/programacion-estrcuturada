#include <stdio.h>
#include <stdlib.h>

int Addition(int a, int b)
{
    int res = a + b;
    return res;
}

int main()
{
    printf("Funciones\n");

    int addittionRes = Addition(3,4);

    printf("Resultado es: %i", addittionRes);


    return 0;
}