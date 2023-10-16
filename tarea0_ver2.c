 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>
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
    float sum = 0;
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
float imprimePromedio(float datos[MAX], int n) {
  int i = 0;
  float sum = 0;
  float prom;
  while (i < n) {
    sum += datos[i];
    i++;
  }
  prom = sum / n;
  printf("\nEl promedio de los datos es: %.3f", prom);
  return prom;
}
void imprimeDesvEst(float datos[MAX], int n, float prom) {
  int i = 0;
  float sum = 0;
  float des = 0;
  while (i < n) {
    sum += pow(prom - datos[i], 2);
    i++;
  }
  des = sum / n;
  des = sqrt(des);
  printf("\nLas desv estandar de los datos es: %.3f", des);
}

void imprimePar(float datos[MAX], int n){
    int i = 0;
    float cont = 0;
    while(i<n){
        if ((int)datos[i]%2 == 0){
            cont += 1;
            i++;
        }
        else{
            i++;
        }
    }
    printf("\nla cantidad de datos pares:%i",cont);
}

int main(){
    float list[MAX];
    int n;
    int x;
    float prom;
    n = leerArch(list);
    imprimeLista(list, n);
    printf("\n\n");
    imprimeSuma(list,n);
    imprimeMenor(list, n);
    imprimePar(list,n);
    prom = imprimePromedio(list, n);
  imprimeDesvEst(list, n, prom);
    
    return 0;
}