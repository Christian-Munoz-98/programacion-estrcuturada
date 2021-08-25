#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int integerA = 1;
    float floatA = 1.1;
    char letterA = 'A';
    double doubleA =  1.2;  //Es un decimal al igual que un float pero dispone de mas valor en memoria para guardar valores
    bool boolean = false;

    //En la siguiente linea estamos imprimiendo el integerA
    printf("El valor de nuestro entero A es: %i\n\n",integerA);
    
    printf("El valor de mi floatante A es: %f\n\n",floatA);

    printf("El valor de mi Double A es: %f\n\n",doubleA);

    printf("EL valor de mi caracter A es: %c\n\n",letterA);
    return 0;
}