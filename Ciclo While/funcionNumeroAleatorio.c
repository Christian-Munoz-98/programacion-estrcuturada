#include <stdio.h> //printf
#include <stdlib.h> //rand y RAND_MAX
#include <unistd.h> //getpid
//prototipo de funciones

int aleatorio_en_rango(int minimo, int maximo);

//funcion main
int main(){
    //Hay que alimentar a rand, solamente una vez (seed rand)
    srand(getpid());
    //Ahora ya podemos llamar a la función
    printf("Entre 2, 50 encontramos a %d\n",aleatorio_en_rango(2,50));
    printf("Entre 1, 53 encontramos a %d\n",aleatorio_en_rango(1,53));
    printf("Entre 52, 800 encontramos a %d\n",aleatorio_en_rango(52,800));
    printf("Entre 1,3 encontramos a %d\n",aleatorio_en_rango(1,3));

    return 0;
}

//Definir función cuyo prototipo está al inicio
//Devuelve un número aleatorio entre minimo y maximo, incluyendo a minimo y maximo

int aleatorio_en_rango(int minimo, int maximo){
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1)+1);
}