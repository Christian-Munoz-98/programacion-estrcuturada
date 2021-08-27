#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Condicional switch\n");

    int option;

    scanf("%i",&option);

    switch(option)
    {
        case 1:
            printf("Elejiste el numero uno\n");
            break;
        case 2:
            printf("Elejiste el numero dos\n");
            break;
        case 3:
            printf("Elejiste el numero tres\n");
            break;
        default:
            printf("Elegiste una opcion invalida\n");
            break;
    }


    return 0;
}