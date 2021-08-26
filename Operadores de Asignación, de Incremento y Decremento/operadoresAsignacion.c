#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Operadores de asignacion\n");

    int value;

    value = 11;
    printf("El valor de nuestra variable value es: %i\n",value);

    value += 10;
    printf("El nuevo valor de nuestra variable value es: %i\n",value);

    value -= 4;
    printf("El nuevo valor de nuestra variable value es: %i\n",value);

    value *= 3;
    printf("El nuevo valor de nuestra variable value es: %i\n",value);

    value /= 2;
    printf("El nuevo valor de nuestra variable value es: %i\n",value);

    value %= 6;
    printf("El nuevo valor de nuestra variable value es: %i\n",value);
    
    return 0;
}