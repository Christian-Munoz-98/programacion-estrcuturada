//#include<stdio.h>
//Agregamos la libreria que contiene las funciones que necesitamos para la calculadora
//Se escribe entre comillas ("operaciones.h") porque se encuentra en el mismo directorio que el codigo fuente
//#include "operaciones.h"
//Las funciones no existen en este codigo, se llaman desde la libreria operaciones.h

#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

int main()
{
    printf("Librerias!\n");
    
    float a, b, result;
    int option;

    printf("Ingrese el primer valor: ");
    scanf("%f",&a);
    printf("Ingrese el segundo valor: ");
    scanf("%f",&b);

    printf("Seleccione que operacion quiere hacer.\n");
    printf("1.Suma\n");
    printf("2.Resta\n");
    printf("3.Multiplicacion\n");
    printf("4.Division\n");
    printf("Eleccion----->");
    scanf("%i",&option);

    switch(option)
    {
        case 1:
            result = adittion(a,b);
            printf("%.3f + %.3f = %.3f\n",a, b, result);
            break;
        case 2:
            result = substraction(a,b);
            printf("%.3f - %.3f = %.3f\n",a, b, result);
            break;
        case 3:
            result = multiplication(a,b);
            printf("%.3f * %.3f = %.3f\n",a, b, result);
            break;
        case 4:
            result = division(a,b);
            printf("%.3f / %.3f = %.3f\n",a, b, result);
            break;
        default:
            printf("Ingreso una opcion invalida. No podemos realizar ninguna operacion.\n");
            break;
    }

    system("PAUSE");
    return 0;
}
