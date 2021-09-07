#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    printf("Dame una edad: ");
    scanf("%i",&edad);

    switch (edad)
    {
        case 0 ... 12:
            printf("Es un nino\n");
            break;
        case 13 ... 105:
            printf("Adolescente o adulto\n");
            break;
        default:
            printf("Es un fantasma\n");
            break;
    }

    system("pause");
    return 0;
}