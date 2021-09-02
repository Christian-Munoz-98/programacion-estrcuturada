/*
Crea un arreglo de 5 filas por 6 columnas en donde:
-Los primeros 5 elementos de cada fila tengan calificaciones aprobatorias entre 6 y 10.
-El sexto elelemtno de casa fila debe ser 0.
-Calcula el promedio de los primeros 5 elementos de cada fila y asignalo al sexto elemento.
-Imprime el promedio de cada fila de calificaciones
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float calificaciones[5][6]= {{6,7,9,8,6,0},
                                 {7,8,9,6,7,0},
                                 {6,8,9,7,8,0},
                                 {6,8,9,6,6,0},
                                 {7,8,6,9,9,0}};

    int i,j;
    
    for( i = 0; i < 5; i++)
    {
        float promedio=0;
        for(j = 0; j<5; j++)
        {
            promedio += calificaciones[i][j];   
        }
        promedio /= 5;
        calificaciones[i][5] = promedio;
        printf("El promedio de calificaciones de la fila %i es %f\n",i,promedio);
    }

    for( i = 0; i<5; i++)
    {
        for( j = 0; j <6 ; j++)
        {
            printf("calificaciones[%i][%i] = %f\n",i,j,calificaciones[i][j]);
        }
    }

    return 0;
}
