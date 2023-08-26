 #include <stdio.h>
 #include <stdlib.h>
 #define MAX 1000
 #define MIN 50

int leerArch(float Datos[MAX]){
    char Nombrearchivo[MIN];
    FILE * archivo;
    int n= 0;      /*cantidad de elementos del archivo*/
    int i = 0;

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
        return n;
    }
}

void imprimeLista(float datos[MAX], int n){
    int i;
    while (i<n){
        printf("\n %15.3f", datos[i]);
        i++;
    }
}

void imprimeSuma(float datos[MAX], int n){
    int i = 0;
    float sum;
    while (i<n){
        sum += datos[i];
        i++;
    }
    printf("\nla suma de los datos es: %.3f",sum);
}

void imprimeMenor(float datos[MAX], int n){
    int i = 0;
    float var = datos[0];
    while (i<n){
        if (datos[i] < var){
            var = datos[i];
        }
        i++;
    }
    printf("\nel dato menor es: %.3f",var);
}

int main(){
    float list[MAX];
    int n;

    n = leerArch(list);
    imprimeLista(list, n);
    printf("\n\n");
    imprimeSuma(list,n);
    imprimeMenor(list, n);
    return 0;
}