#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Arreglos Bidimensionales\n");

    int bidimentionalArray[4][4];

    bidimentionalArray[0][0] = 11;
    bidimentionalArray[0][1] = 12;
    bidimentionalArray[0][2] = 13;
    bidimentionalArray[0][3] = 14;

    bidimentionalArray[1][0] = 21;
    bidimentionalArray[1][1] = 22;
    bidimentionalArray[1][2] = 23;
    bidimentionalArray[1][3] = 24;
    
    bidimentionalArray[2][0] = 31;
    bidimentionalArray[2][1] = 32;
    bidimentionalArray[2][2] = 33;
    bidimentionalArray[2][3] = 34;

    bidimentionalArray[3][0] = 41;
    bidimentionalArray[3][1] = 42;
    bidimentionalArray[3][2] = 43;
    bidimentionalArray[3][3] = 44;

    printf("Valor en (0,1): %i\n", bidimentionalArray[0][0]);
    printf("Valor en (0,2): %i\n", bidimentionalArray[0][1]);
    printf("Valor en (0,3): %i\n", bidimentionalArray[0][2]);
    printf("Valor en (0,4): %i\n", bidimentionalArray[0][3]);

    printf("Valor en (1,1): %i\n", bidimentionalArray[1][0]);
    printf("Valor en (1,2): %i\n", bidimentionalArray[1][1]);
    printf("Valor en (1,3): %i\n", bidimentionalArray[1][2]);
    printf("Valor en (1,4): %i\n", bidimentionalArray[1][3]);

    printf("Valor en (2,1): %i\n", bidimentionalArray[2][0]);
    printf("Valor en (2,2): %i\n", bidimentionalArray[2][1]);
    printf("Valor en (2,3): %i\n", bidimentionalArray[2][2]);
    printf("Valor en (2,4): %i\n", bidimentionalArray[2][3]);

    printf("Valor en (3,1): %i\n", bidimentionalArray[3][0]);
    printf("Valor en (3,2): %i\n", bidimentionalArray[3][1]);
    printf("Valor en (3,3): %i\n", bidimentionalArray[3][2]);
    printf("Valor en (3,4): %i\n", bidimentionalArray[3][3]);

    return 0;
}