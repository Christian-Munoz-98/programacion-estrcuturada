#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arreglos unidimensionales \n");

    int integerList[3];

    integerList[0] = 4;
    integerList[1] = 5;
    integerList[2] = 6;

    float floatList[] = {23.4,34.5,45.6,21.8, 56.7};

    char charList[9];
    charList[0] = 'C';
    charList[1] = 'H';
    charList[2] = 'R';
    charList[3] = 'I';
    charList[4] = 'S';
    charList[5] = 'T';
    charList[6] = 'I';
    charList[7] = 'A';
    charList[8] = 'N';

    printf("\n Primer entero: \t\t%i",integerList[0]);
    printf("\n Ultimo flotante: \t\t%f",integerList[4]);
    printf("\n Lista de caracteres: \t\t%c%c%c%c%c%c%c%c%c. \n",charList[0],charList[1],charList[2],charList[3],charList[4],charList[5],charList[6],charList[7],charList[8]);

    return 0;
}