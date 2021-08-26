/* 
Primer reto:
Haremos un programa que adivine el número de la computadora.

-Definir una variable cuyo valor es 5.
-En otra variable ingresar un número con la instrucción entre el 1 y el 10.
-Si el número ingresado es igual a la variable definida(5).
Imprimir "Adivinaste". Si no imprimir "ese no es, perdiste"
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=5, anotherNum;
    
    printf("Ingrese un numero entre el 1 y el 10: ");
    scanf("%i",&anotherNum);

    if(anotherNum > 10 || anotherNum < 1)
        printf("No se aceptan numeros mayores a 10 o menores que 1\n");
    else if(anotherNum == num)
        printf("Adivinaste! el numero es 5!\n");
    else
        printf("Perdiste ese no es el numero");

    return 0;
}
