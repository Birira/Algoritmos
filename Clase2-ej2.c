#include <stdio.h>

void main(){
    int N, res;
    int i = 1;
    printf("Ingrese intentos: ");
    scanf("%i", &N);
    while (i<=N){
        int num = 0;
        printf("ingrese un dato para sumar: ");
        scanf("%i", &num);
        res += num;
        i++;
        }
    printf("el resultado es: %i",res);
}