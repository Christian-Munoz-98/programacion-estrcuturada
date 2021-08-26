/* 
-Imprime la instrucción ingresa el primer número
-Ingresa el número en una variable
-Repite para una segunda variable
-Si el primer número es menor que el segundo, imprime el primer número
-Si no imprime el segundo número
*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int varA, varB;
    
    printf("Ingresa el primer numero: ");
    scanf("%i",&varA);

    printf("Ingresa el segundo numero: ");
    scanf("%i",&varB);

    if (varA < varB)
        printf("El numero menor es %i",varA);
    else
        printf("El numero menor es %i",varB);

    return 0;

}