/*
Primer reto:
-Vamos a hacer un pequeño juego de texto
-imprimir una pequeña introducción, con tres opciones a elegir, numeradas del 1 al 3.
-Cada una de ellas te debe imprimir un resultado distinto en la historia
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int selection;
    printf("Escribe 1 si quieres ir por el camino de dulces\n");
    printf("Escribe 2 si quieres ir por el camino ee madera\n");
    printf("Escribe 3 si quieres ir por el camino de gatitos\n");
    scanf("%i",&selection);

    switch(selection)
    {
        case 1:
            printf("Te dio diabetes :(\n");
            break;
        case 2:
            printf("Te astillaste :(\n");
            break;
        case 3:
            printf("Te aranaron :(\n");
            break;
        default:
            printf("Opcion invalida\n");
            break;
    }

}