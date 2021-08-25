#include <stdio.h>

int main(){
    int x,y,aux;

    printf("Ingrese el valor de X: ");
    scanf("%i",&x);
    printf("Ingrese el valor de Y: ");
    scanf("%i",&y);

    aux = x;
    x = y;
    y= aux;

    printf("El nuevo valor de X es %i\n",x);
    printf("El nuevo valor de Y es %i\n",y);

    return 0;
}