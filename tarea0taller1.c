 #include <stdio.h>
 #include <stdlib.h>
 #define MAX 1000
 #define MIN 50

void leerArchivo(){
    float Datos[MAX];
    float var = 0;
    float sum = 0;
    int n= 0;      /*cantidad de elementos del archivo*/
    int i = 0; 
    char Nommbrearchivo[MIN];
    FILE * archivo;

    printf("ingresar el nombre del archivo: ");
    scanf("%s", &Nommbrearchivo);
    archivo = fopen(Nommbrearchivo,"r");

    if  (archivo == NULL){ /*�el archivo no se pudo abrir el archivo?*/
        printf("no se puede abrir. revisar la ubicacion");
        exit(0);
    }
    fscanf(archivo,"%i", &n);
    
    while(i<n){
        fscanf(archivo, "%f", &Datos[i]);
        printf("\n %15.3f", Datos[i]);
        if (i == 0){
            var = Datos[0];
        }
        if (Datos[i] < var){
            var = Datos[i];
        }
        sum += Datos[i];
        i++;
    }
    printf("\nla suma de los datos es: %.3f", sum);
    printf("\nel dato menor es: %.3f",var);
}

int main()
{
    leerArchivo();
    return 0;
}