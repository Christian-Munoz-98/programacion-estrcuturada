/* Primer reto:
-ingresa los valores necesarios para calcular el volumen de un cilindro (radio, altura, área)
-Realiza la operacion
-Imprimir el resultado */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1416

int main(){
    float radio, altura;
    float areaBase,volumen;

    printf("Cual es el radio de la base del cilindro?: ");
    scanf("%f",&radio);
    printf("Cual es la altura del cilindro?: ");
    scanf("%f",&altura);

    areaBase = PI * pow(radio,2);
    volumen = areaBase * altura;

    printf("El area de la base del cilindro es: %.3f\n",areaBase);
    printf("El volumen del cilindro es: %.3f\n",volumen);



    return 0;
}