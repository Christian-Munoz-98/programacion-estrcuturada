/*
    Adivina el número con C
    @author parzibyte.me
    @see https://parzibyte.me/blog/2019/03/21/obtener-numeros-aleatorios-c/
*/
#include <stdio.h>  // printf
#include <stdlib.h> // rand y RAND_MAX
#include <unistd.h> // getpid


// Ajustes del juego
#define INTENTOS_MAXIMOS 2
#define INFERIOR 1 // Límite inferior para aleatoridad
#define SUPERIOR 25 // Límite superior para aleatoridad
// Prototipo de funciones
int aleatorio_en_rango(int minimo, int maximo);

// Función main
int main() {
  // Hay que alimentar a rand, solamente una vez
  srand(getpid());
  // Obtener un número aleatorio que no le diremos al usuario
  int secreto = aleatorio_en_rango(INFERIOR, SUPERIOR);
  // Descomenta esta línea para "hacer trampa"
  // printf("El secreto es %d\n\n", secreto);
  int respuesta, intentos = 0;

  // Indicarle que adivine
  printf("He seleccionado un numero al azar entre %d y %d, tu tarea es "
         "adivinarlo en maximo %d intentos\n",
         INFERIOR, SUPERIOR, INTENTOS_MAXIMOS);
	// ciclo infinito que se rompe desde dentro
  while (1) {
    intentos++;
    printf("Escribe el numero que crees que elegi: ");
    scanf("%d", &respuesta);
    if (respuesta == secreto) {
      printf("Correcto. El numero que seleccione fue %d y lo adivinaste en %d "
             "intento(s)",
             secreto, intentos);
      break;
    } else if (respuesta < secreto) {
      printf(
          "Error, pero te doy una pista: el numero que elegi es mayor que %d\n",
          respuesta);
    } else {
      // respuesta > secreto
      printf(
          "Error, pero te doy una pista: el numero que elegi es menor que %d\n",
          respuesta);
    }
		// Si no se rompió arriba porque ganó, y ya se superaron o igualaron los intentos,
		// entonces se rompe y se indica que perdió
    if (intentos >= INTENTOS_MAXIMOS) {
      printf("Perdiste. El numero que elegi fue %d", secreto);
      break;
    }
  }
}

// Definir función cuyo prototipo está al inicio
// Devuelve un número aleatorio en un rango
int aleatorio_en_rango(int minimo, int maximo) {
  return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}