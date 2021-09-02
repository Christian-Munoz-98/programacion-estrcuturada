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
        float total=0;
        for(j = 0; j<5; j++)
        {
            total += calificaciones[i][j];   
        }
        calificaciones[i][5] = total/5;
        printf("calificaciones[%i][6] ahora es %f\n",i,calificaciones[i][5]);
    }

    return 0;
}
