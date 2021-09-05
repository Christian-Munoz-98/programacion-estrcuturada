#include <stdio.h>
#include <stdlib.h>

char publicText[] = {"Texto en una variable global"};

void check()
{
    printf("\nImprimir desde la funcion check()\n");

    printf("Variable global: ");
    printf("%s", publicText);

    printf("\nVariable local: \n");
    printf("%s", privateText);
}


int main()
{
    printf("Variables globales!!!!!!\n");

    char privateText[] = {"Texto en una variable local\n"};

    printf("Variable global: ");
    printf("%s", publicText);

    printf("\nVariable local: ");
    printf("%s", privateText);

    check();

    return 0;
}