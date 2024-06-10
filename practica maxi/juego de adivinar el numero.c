#include <stdlib.h>
#include <time.h>

int main ()
{
 int numero_secreto, numero_usuario, intentos_totales =0, intentos_guardados[100], intentos_actuales;
 srand(time(NULL));
 numero_secreto = rand() % 100 + 1;

 do
 {
    intentos_actuales++;
    printf("Juego de adivinar un el numero secreto\n");
    printf("ingrese un numero:\n", numero_usuario);
    scanf("%d", &numero_usuario);

    if (numero_usuario > numero_secreto)
    }
    {
    printf("El numero ingresado es mayor que el numero secreto\n");
    } else if (numero_usuario < numero_secreto)
    {
      printf("El numero ingresado es menor que el numero secreto\n");
    }
    while (numero_usuario != numero_secreto);
    {
  printf("El numero ingresado es el mismo!\n");
  printf("Lo lograste en %d intentos\n", intentos_actuales);
    }
  intentos_guardados[intentos_totales] = intentos_actuales;
  intentos_totales++;
return 0;
}
