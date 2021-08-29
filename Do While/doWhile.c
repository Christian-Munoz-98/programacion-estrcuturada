#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Iterador Do While");

    char answer = 'q';
    char value; 

    do
    {
        printf("ingresa una letra: ");
        scanf("%c", &value);
    }while(value != answer );

    printf("Coincide las letras %c == %c", value, answer);

    return 0;
}