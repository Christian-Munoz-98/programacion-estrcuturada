/* 
-Crear una variable llamada x con valor de 10
-Utilizando operadores de asignación, que esta variable se sume a sí misma el doble de su valor.
-Imprime resultado
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=10;
    printf("El valor de x: %i\n",x);

    x += (2*x);

    printf("El nuevo valor de x: %i\n",x);
    return 0;
}