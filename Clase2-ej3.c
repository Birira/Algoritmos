//se necesita un programa en que el usuario debe ingresar 3 valores, cada uno con diferentes condiciones:
//1) El primer valor debe ser un int entre 50 a 100
//2) El segundo valor debe ser un flotante positivo
//3) El tercer valor deve ser un entero negativo
#include <stdio.h>

int main(){
    int entero;
    float flotante;
    int entnegativo;
    printf("Ingrese un entero entre 50 y 100: ");
    scanf("%i",&entero);
    printf("Ingrese un real positivo: ");
    scanf("%f", &flotante);
    printf("Ingrese un entero negativo: ");
    scanf("%i", &entnegativo);
    return 0;
}