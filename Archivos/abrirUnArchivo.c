#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Archivos! Crear un archivo\n");

    FILE *archivo;

    archivo = fopen("prueba03.dat", "w");

    if(archivo != NULL){
        printf("El archivo se ha creado exitosamente. Comprueba en la carpeta que ha sido creado.\n");
        fclose(archivo);
    }
    else{
        printf("El archivo no se ha creado");
    }

    return 0;
}