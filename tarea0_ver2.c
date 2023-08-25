 #include <stdio.h>
 #include <stdlib.h>
 #define MAX 1000
 #define MIN 50

void leerArch(){
    char Nombrearchivo[MIN];
    FILE * archivo;
    int n= 0;      /*cantidad de elementos del archivo*/
    int i = 0;
    float Datos[MAX];

    printf("ingresar el nombre del archivo: ");
    scanf("%s", &Nombrearchivo);

    archivo = fopen(Nombrearchivo,"r");

    if  (archivo == NULL){                                  /*�el archivo no se pudo abrir el archivo?*/
        printf("no se puede abrir. revisar la ubicacion");
        exit(0);
    }
    else{
        fscanf(archivo,"%i", &n);
        while(i<n){
            fscanf(archivo, "%f", &Datos[i]);
            printf("\n %15.3f", Datos[i]);
            i++;
        }
    }
}

int main(){
    leerArch();
    return 0;
}