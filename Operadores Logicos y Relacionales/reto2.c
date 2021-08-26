/* Segundo reto
-Hacer un programa que reciba la calificación de un alumno.
-Si el alumno sacó menos de 60, imprimir que el alumno está reprobado
-Si el alumno sacó más de 60, imprimir que el alumno está aprobado

Extra: si el alumno sacó más de 90, imprimir que está aprobado y una carita feliz
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float calificacion;

    printf("Dame tu calificacion: ");
    scanf("%f",&calificacion);

    if (calificacion < 0 || calificacion > 100)
        printf("Calificacion invalida");
    else if (calificacion < 60)
        printf("Estas reprobado");
    else
    {
        if (calificacion > 90)
            printf("Eres un excelente alumno, Felicidades!");
        else
            printf("Estas aprobado");
    }

}