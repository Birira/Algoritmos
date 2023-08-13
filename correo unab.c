#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void minusculas(char cadena[50])
{
    int i=0;

    while(i<strlen(cadena))
    {
        cadena[i] = tolower(cadena[i]);
        i++;
    }
}

void generaCorreo()
{
    char correo[150];
    char nombre[50], apPaterno[50], apMaterno[50];

    printf("Primer nombre: ");
    fgets(nombre, 50, stdin);
    strtok(nombre, "\n");
    minusculas(nombre);

    printf("Apellido paterno (omite los espacios): ");
    fgets(apPaterno, 50, stdin);
    strtok(apPaterno, "\n");
    minusculas(apPaterno);

    printf("Apellido materno (omite los espacios): ");
    fgets(apMaterno, 50, stdin);
    strtok(apMaterno, "\n");
    minusculas(apMaterno);

    correo[0] = nombre[0];
    correo[1] = '\0';
    strcat(correo, ".");
    strcat(correo, apPaterno);
    strcat(correo, apMaterno);
    strcat(correo, "@uandresbello.edu");
    printf("\nTu correo unab es: %s", correo);
}

int main()
{
    generaCorreo();

    printf("\n\n");
    system("pause");

    return 0;
}

