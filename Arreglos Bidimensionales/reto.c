/*
Primer reto:
Crear un arreglo de 3 filas por 4 columnas en donde:
-Los elementos de la primera fila sumen un total de 4.
-Los elementos de la segunda fila sumen un total de 10.
-Los elementos de la tercera fila sumen un total de 26.
*imprime la sumatoria de cada fila*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    int bidimentionalArray[3][4]={{1,2,-2,3},{1,2,3,4},{5,10,8,3}};

    for (x = 0; x < 3; x++)
    {
        int suma = 0;
        for( y = 0; y < 4; y++)
        {
            suma += bidimentionalArray[x][y];
        }
        printf("Suma fila %i: %i \n", x + 1, suma);
    }

    return 0;
}