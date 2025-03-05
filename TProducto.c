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
