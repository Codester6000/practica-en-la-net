#include <stdio.h>
#include <stdlib.h> // Para generar números aleatorios
#include <time.h> // Para inicializar la semilla del generador aleatorio

int main() {

  // Definir variables
  int numeroSecreto, numeroUsuario, intentosTotales = 0, intentosGuardados[100], intentosActuales = 0; // Vector para guardar intentos

  // Generar número secreto aleatorio
  srand(time(NULL)); // Inicializar generador aleatorio
  numeroSecreto = rand() % 100 + 1; // Generar número entre 1 y 100

  // Ciclo principal del juego
  do {
    intentosActuales++; // Incrementar contador de intentos actual

    // Solicitar número al usuario
    printf("Ingrese un número: ");
    scanf("%d", &numeroUsuario);

    // Proporcionar pistas al usuario
    if (numeroUsuario > numeroSecreto) {
      printf("El número ingresado es mayor que el número secreto.\n");
    } else if (numeroUsuario < numeroSecreto) {
      printf("El número ingresado es menor que el número secreto.\n");
    }

  } while (numeroUsuario != numeroSecreto);

  // ¡El usuario ha adivinado el número!
  printf("¡Felicidades! Has adivinado el número secreto.\n");
  printf("Lo lograste en %d intentos.\n", intentosActuales);

  // Guardar intentos en el vector
  intentosGuardados[intentosTotales] = intentosActuales;
  intentosTotales++;

  // Preguntar si el usuario quiere jugar de nuevo
  char respuesta;
  printf("\n¿Deseas jugar de nuevo? (s/n): ");
  scanf(" %c", &respuesta);

  if (respuesta == 's') {
    intentosActuales = 0; // Reiniciar contador de intentos para la próxima partida
  } else {
    // Mostrar los intentos de partidas anteriores
    printf("\nHistorial de intentos:\n");
    for (int i = 0; i < intentosTotales; i++) {
      printf("Partida %d: %d intentos\n", i + 1, intentosGuardados[i]);
    }
  }

  return 0;
}
