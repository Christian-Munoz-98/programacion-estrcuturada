/*
-ingresa un número entero
-Usando operadores de asignación realiza la operación de módulo del valor ingresado con 5.
-Imprime el resultado más uno usando operadores de incremento
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Ingrese num: ");
    scanf("%i",&num);

    num %= 5;
    printf("Ahora mismo Num es: %i\n",num);
    num++;
    printf("Num mas uno es: %i",num);
    return 0;

}