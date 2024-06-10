#include <stdio.h>

void main ()
{
    printf("Tabla de tipos de variables\n");
    printf("----------------------------------------\n");
    printf(" \n");
    printf("----------------------------------------\n");
    printf("Enteros\t\t\tEspacio (bytes)\n");
    printf("----------------------------------------\n");
    printf("int:\t\t\t\t%d\n",sizeof(int));
    printf("unsigned int:\t\t\t%d\n",sizeof(unsigned int));
    printf("short:\t\t\t\t%d\n",sizeof(short));
    printf("unsigned short:\t\t\t%d\n",sizeof(unsigned short));
    printf("long:\t\t\t\t%d\n",sizeof(long));
    printf("unsigned long:\t\t\t%d\n",sizeof(unsigned long));
    printf("long long:\t\t\t%d\n",sizeof(long long));
    printf("unsigned long long:\t\t%d\n",sizeof(unsigned long long));
    printf("----------------------------------------\n");
    return 0;
}
