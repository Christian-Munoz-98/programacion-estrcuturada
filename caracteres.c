#include <stdio.h>
#include <stdlib.h>

int main()
{
    char respuesta;
    printf("Estudias en cucei?\n");
    printf("Escribe 'S' para si y 'N' para no\n");
    scanf("%s",&respuesta);
    printf("Tu respuesta fue %c",respuesta);
    return 0;
}