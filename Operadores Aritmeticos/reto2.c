/* 
Segundo Reto:
-Ingresa la temperatura en grados Farenheith
-Realiza la operación para convertir de grados farentheith a celcius
-Imprime el resultado de la conversión
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float farentheith;
    float celsius;

    printf("Ingrese una temperatura en grados Farenheith: ");
    scanf("%f",&farentheith);

    celsius = (farentheith - 32) * 0.556;

    printf("%.2f Grados Farenheith equivalen a %.4f Grados Celsisus",farentheith,celsius);
    return 0;
}