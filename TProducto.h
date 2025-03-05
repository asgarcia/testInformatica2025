//
// Created by aulas on 05/03/2025.
//

#ifndef TPRODUCTO_H
#define TPRODUCTO_H


typedef struct {
    char des[255];
    float precio;

}TProducto;

void mostrarProductos(TProducto *p, int numProductos);

#endif //TPRODUCTO_H
