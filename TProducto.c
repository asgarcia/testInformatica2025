//
// Created by aulas on 05/03/2025.
//
#include <stdio.h>
#include "TProducto.h"

#include <stdlib.h>

#define ERROR_FICHERO (-1)
#define ERROR_MEMORIA (-2)

void mostrarProductos(TProducto *p, int numProductos) {

    printf("0. Salir\n");
    for(int i = 0; i < numProductos; i++) {
        printf("%d Producto: %s \t %6.2f\n", i+1, p[i].des, p[i].precio);
    }
    printf("%d. borrar pantalla \n",numProductos+1);

}

int saveProductos(const char * nameFile,TProducto *p, int numProductos){
  FILE *f = fopen(nameFile,"w");
  if(f == NULL){
    return ERROR_FICHERO;
  }
    fprintf(f,"%d\n",numProductos);
  for(int i = 0; i < numProductos; i++) {
      fprintf(f,"%-50s \t  %6.2f \n", p[i].des,p[i].precio);
  }
  fclose(f);
  return 0;
}

/**
 * Funcion para leer los pruductos de un fichero.
 *
 * @param nameFile nombre del fichero
 * @param p puntero a la estructura
 * @return numero de productos
 */
int loadProductos(const char * nameFile,TProducto **p){
    FILE *f = fopen(nameFile,"r");
    if(f == NULL){
        return ERROR_FICHERO;
    }
    //char linea[250];
    int numProductos;
    fscanf(f,"%d\n",&numProductos);

    if (*p != NULL) {
        free(*p);
    }
    *p = (TProducto *) malloc(sizeof(TProducto) * numProductos);
    if (*p == NULL) {
        return ERROR_MEMORIA;
    }
    TProducto pTemp;
    for(int i = 0; i < numProductos; i++) {
        TProducto t;
        fscanf(f,"%[^\t] %f\n",(*p)[i].des, &(*p)[i].precio);
        //strcpy((*p)[i].des,t.des);
        //(*p)[i].precio =t.precio;
        //mostrarProductos(&p[i],1);
        //printf("Linea %d %s\n",i,linea);
    }
    fclose(f);
    return numProductos;
}
