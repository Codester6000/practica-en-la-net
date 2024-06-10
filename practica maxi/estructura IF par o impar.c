#include <stdio.h>
void main()
{
    int numero;
    printf("Ingrese un numero para determinar si es par o impar:");
    scanf("%d", &numero);
    printf("\n");
    if (numero%2 ==0)
    {
     printf("El numero es par\n");
    }
     else {printf("El numero es impar\n");
    }
 return 0;
}
