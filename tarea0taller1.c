 #include <stdio.h>
 #include <stdlib.h>
 #define MAX 1000
 #define MIN 50

int main()
{
    float Datos[MAX];
    float var;
    int n; /*cantidad de elementos del archivo*/
    char Nommbrearchivo[MIN];
    int i;
    FILE *archivo;

    printf("ingresar el nombre del archivo: ");
    scanf("%s", &Nommbrearchivo);

    archivo = fopen(Nommbrearchivo,"r");

    if  (archivo == NULL) /*�el archivo no se pudo abrir el archivo?*/
    {
        printf("no se puede abrir. revisar la ubicacion");
        exit(0);
    }
    fscanf(archivo,"%i", &n);
    
    i= 0;
    
    while(i<n)
    {
        fscanf(archivo, "%f", &Datos[i]);
        printf("\n %15.3f", Datos[i]);
        if (i == 0){
            var = Datos[0];
        }
        if (Datos[i] < var){
            var = Datos[i];
        }
        i++;
    }
    printf("\nel dato menor es: %.2f",var);
    return 0;
}
