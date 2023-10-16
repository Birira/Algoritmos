#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct nodo {
  int info;
  struct nodo *sig;
};
typedef struct nodo tNodo;
typedef tNodo *Lista;

Lista creaNodo(int dato) {
  Lista p;
  p = malloc(sizeof(tNodo));
  if (p == NULL) {
    printf("No hay memoria disponible");
    exit(0);
  }
  p->info = dato;
  p->sig = NULL;
  return p;
}
Lista insertaFinal(Lista L, int dato) {
  Lista p;
  p = creaNodo(dato);
  Lista aux;
  if (L == NULL) {
    L = p;
  } else {
    aux = L;
    while (aux->sig != NULL) {
      aux = aux->sig;
    }
    aux->sig = p;
  }
  return L;
}

void ImprimeLista(Lista L) {
  Lista aux = L;
  int dato;
  int cont = 0;
  while (aux != NULL) {
    dato = aux->info;
    cont++;
    printf("%i  ", dato);
    aux = aux->sig;
  }
  printf("\nlargo: %i\n", cont);
}

Lista leeArchivo(char nomArch[50], Lista L) {
  FILE *arch;
  int dato = 0;

  arch = fopen(nomArch, "r");
  if (arch == NULL) {
    printf("no se puede abrir. revisar la ubicacion");
    exit(0);
  } else {
    while (!feof(arch)) {
      fscanf(arch, "%i", &dato);
      L = insertaFinal(L, dato);
    }
  }
  fclose(arch);
  return L;
}

int main() {
  Lista L;
  Lista L2;
  L = NULL;
  L2 = NULL;
  char nomArch1[50];
  char nomArch2[50];

  printf("ingresar el nombre del archivo 1: ");
  scanf("%s", &nomArch1);
  L = leeArchivo(nomArch1, L);

  printf("ingresar el nombre del archivo 2: ");
  scanf("%s", &nomArch2);
  L2 = leeArchivo(nomArch2, L2);
  ImprimeLista(L);
  printf("\n\n");
  ImprimeLista(L2);
  return 0;
}