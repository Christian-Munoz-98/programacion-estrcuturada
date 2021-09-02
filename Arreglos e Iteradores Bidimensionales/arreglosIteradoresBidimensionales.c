#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arreglos bidimensionales e iteradores\n");

    int integerArray[4][5];

    int i,j;
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 5; j++)
        {
            integerArray[i][j]= ((i*j)+(i+j))*123;
            printf("(%i,%i): %i\n", i,j,integerArray[i][j]);
        }
    }

    return 0;
}
