#include "funciones.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  char nombreArchivo[50];
  Matriz Grafo;
  int n;    // Cantidad de nodos
  int m;    // Cantidad de arcos
  int tipo; // tipo de Grafo: 1 dirigido, 2 no dirigido.
  bool kreg;
  bool completo;

  printf("Ingresa el nombre del primer archivo: ");
  scanf("%s", &nombreArchivo);
  Grafo = leeArchivo(nombreArchivo, &n, &m, &tipo);
  printf("\nMATRIZ DEL GRAFO: \n");
  imprimeMatrizGrafo(Grafo, n);

  ArregloBool Visitado;
  Visitado = creaArregloBool(n);

  printf("\n\n");
  //imprimeMayorCosto(Grafo, n);
  printf("\n\n");
  //reseteaVisitados(Visitado, n);
  Amplitud(Grafo, n,Visitado ,0);
  printf("\n\n");
  //reseteaVisitados(Visitado, n);
  //imprimeAdy(Grafo,n);
  //kreg = kregular(Grafo,n,2);
  //printf("%d\n", kreg);
  //gConexo(Grafo,n);
  //completo = gCompleto(Grafo,n);
  //printf("\n%d", completo);
  jkasjkadjk(Grafo, n, 0);
  return 0;
}
