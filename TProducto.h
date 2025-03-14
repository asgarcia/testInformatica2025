//
// Created by aulas on 05/03/2025.
//

#ifndef TPRODUCTO_H
#define TPRODUCTO_H


typedef struct {
    float precio;
    char des[255];

}TProducto;

void mostrarProductos(TProducto *p, int numProductos);
int saveProductosBin(const char *name,TProducto *p, int numProductos);
int saveProductos(const char * nameFile,TProducto *p, int numProductos);
int loadProductos(const char * nameFile,TProducto **p);
#endif //TPRODUCTO_H
