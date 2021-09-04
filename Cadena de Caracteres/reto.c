#include <stdio.h>
#include <stdlib.h>

int main()
{
    char originalstr[50],invertedStr[50];

    int size,i;

    printf("Ingrese una cadena de caracteres:");
    gets(originalstr);

    printf("La cadena original es: ");
    puts(originalstr);

    size = strlen(originalstr);

    for( i= size; i > -1; i--)
    {
        
        invertedStr[size-i] = originalstr[i];      
    }

    printf("La cadena invertida es: ");
    puts(invertedStr);

    return 0;
}
