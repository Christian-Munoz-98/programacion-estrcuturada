#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416

int main()
{
    float base, altura, lado, area, radio;
    char opc;

    printf("Menu\na.Area de Triangulo\nb.Area cuadrado\nc.Area de un circulo\nElija una opcion:");
    scanf("%s",&opc);

    switch (opc)
    {
    case 'a':
    case 'A':
        printf("Dame la base: ");
        scanf("%f",&base);
        printf("Dame la altura: ");
        scanf("%f",&altura);
        area = base*altura/2;
        printf("El area es %.3f\n",area);
        if(area>50)
            printf("El area supera al espacio de construccion\n");           
        break;
    case 'b':
    case 'B':
        printf("Dame el lado: ");
        scanf("%f",&lado);
        area = lado * lado;
        printf("El area es %.3f\n",area);
        break; 
    case 'c':
    case 'C':
        printf("Dame el radio: ");
        scanf("%f",&radio);
        area = PI*radio*radio;
        printf("El area es %.3f\n",area);
        break;
    default:
        printf("Error, opcion invalida\n");
        break;
    }

    system("pause");
    return 0;
}
