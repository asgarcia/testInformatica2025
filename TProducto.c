//
// Created by aulas on 05/03/2025.
//
#include <stdio.h>
#include "TProducto.h"


void mostrarProductos(TProducto *p, int numProductos) {

    printf("0. Salir\n");
    for(int i = 0; i < numProductos; i++) {
        printf("%d Producto: %-50s \t  %6.2f €\n", i+1, p[i].des,p[i].precio);
    }
    printf("%d. borrar pantalla \n",numProductos+1);

}

int saveProductos(const char * nameFile,TProducto *p, int numProductos){
  FILE *f = fopen(nameFile,"w");
  if(f == NULL){
    return -1;
  }
  for(int i = 0; i < numProductos; i++) {
      fprintf(f,"%-50s \t  %6.2f \n", p[i].des,p[i].precio);
  }
  fclose(f);
  return 0;
}


int loadProductos(const char * nameFile,TProducto *p){
    FILE *f = fopen(nameFile,"r");
    if(f == NULL){
        return -1;
    }
    //char linea[250];
    int numProductos;
    fscanf(f,"%d\n",&numProductos);
    for(int i = 0; i < numProductos; i++) {
        fscanf(f,"%s\t %f",&p[i].des,&p[i].precio);
        //mostrarProductos(&p[i],1);
        //printf("Linea %d %s\n",i,linea);
    }
    fclose(f);
    return 0;
}
