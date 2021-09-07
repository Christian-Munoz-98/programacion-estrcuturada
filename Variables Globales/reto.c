/*
-Utilizando variables globales, ingresa el nombre de un alumno y su calificacion
-En una funcion evalua si el alumno ha sido aprobado o no
-La calificacion minima aprobatoria es 7
-imprimir desde la funcion si el alumno aprobó´
*/

/*#include <stdio.h>
#include <stdlib.h>

char alumno[];
float calificacion;

void evaluacion()
{
    if (calificacion >= 7 && calificacion <= 10)
        printf("El alumno %s ha sido aprobado",alumno);
    else if (calificacion < 7 && calificacion >= 0)
        printf("El alumno %s esta reprobado",alumno);
    else
        printf("El alumno %s no ingreso una calificacion valida",alumno);  
}

int main()
{
    printf("Ingrese el nombre del alumno: ");
    scanf("%s",&alumno);

    printf("Ingrese su califiacion: ");
    scanf("%f",&calificacion);

    evaluacion();

    return 0;
}*/

#include <stdio.h>

int main()
{
    int i;

    for(i=0; i<256; i++)
    {
        printf("[%d]\t%x\t%c\n",i,i,i);
    }
    return 0;
}