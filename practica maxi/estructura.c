#include<stdio.h>
#include<stddef.h>
/*Crear una estructura para almacenar la información de un empleado, incluyendo los siguientes
datos: nombre, apellido, DNI, dirección, teléfono y cargo.
Crear un programa que permita al usuario:
Ingresar la información de varios empleados.
Buscar un empleado por su DNI.
Mostrar la información de todos los empleados.
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
