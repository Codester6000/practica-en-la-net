#include<stdio.h>
#include<stddef.h>
/*Crear una estructura para almacenar la informaci�n de un empleado, incluyendo los siguientes
datos: nombre, apellido, DNI, direcci�n, tel�fono y cargo.
Crear un programa que permita al usuario:
Ingresar la informaci�n de varios empleados.
Buscar un empleado por su DNI.
Mostrar la informaci�n de todos los empleados.
*/
void main()
{
    typedef struct Registro{
    char nombre[100];
    char apellido[100];
    int DNI;
    char direcccion[100];
    int telefono;
    char cargo[100];
    }registro1;

   }
