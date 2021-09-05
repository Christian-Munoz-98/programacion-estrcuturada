/*
-Hacer un programa que cambie de dólares a tu moneda y de tu moneda a dolares
-Usa funciones
*/

#include <stdio.h>
#include <stdlib.h>

float mxnToUsd(float pesos)
{
    return pesos / 19.92;
}

float usdToPesos(float dolares)
{
    return dolares * 19.92;
}

int main()
{
    
    float mxn,usd,conversion;
    int seleccion;
    printf("Elije 1 para convertir de pesos a dolares\nElije 2 para convertir de dolares a pesos\nOpcion a elegir: ");
    scanf("%i",&seleccion);

    switch(seleccion)
    {
        case 1:
            printf("Cuantos pesos quiere convertir a dolares?: ");
            scanf("%f",&mxn);

            conversion = mxnToUsd(mxn);

            printf("%.0f pesos equivalen a %.3f dolares\n",mxn,conversion);
            break;
        case 2:
            printf("Cuantos dolares quiere convertir a pesos?: ");
            scanf("%f",&usd);

            conversion = usdToPesos(usd);

            printf("%.0f dolares equivalen a %.3f pesos",usd, conversion);
            break;
        default:
            printf("Opcion invalida");
            break;         
    }

    return 0;
}
