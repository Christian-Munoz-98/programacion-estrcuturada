#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int numbers[56];

    for( i=0; i <56; i++)
    {
        numbers[i]=i;
    }

    for( i=0; i <56; i++)
    {
        printf("Numbers[%i] = %i\n",i,numbers[i]);
    }
    
    return 0;
}