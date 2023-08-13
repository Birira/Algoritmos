#include <stdio.h>
#include <string.h>

void main(){
    char nombre[50];
    int edad;
    int ano;
    printf("ingrese su nombre: ");
    scanf("%s", &nombre[50]);
    printf("Ingrese su edad: ");
    scanf("%i", &edad);
    ano = 2023 - edad;
    printf("Hola, su nombre es %s su edad es %i y nacio en el ano es %i", nombre,edad,ano);
}