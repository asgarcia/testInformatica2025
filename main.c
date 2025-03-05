#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
#include "TProducto.h"

int main(void) {
    setlocale(LC_ALL, "es_es.UTF_8");
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);


    int numProductos=5;
    TProducto productos[numProductos];
  /*  strcpy(productos[0].des,"Patatas");
    productos[0].precio = 5;
    strcpy(productos[1].des,"Jamón");
    productos[1].precio = 10;
    strcpy(productos[2].des,"CocaCola");
    productos[2].precio = 1;
    strcpy(productos[3].des,"Fanta");
    productos[3].precio = 1.2;
    strcpy(productos[4].des,"Ron");
    productos[4].precio = 50.0;
*/
    //mostrarProductos(productos,numProductos);
    loadProductos("../datos.txt",productos,numProductos);
    mostrarProductos(productos,numProductos);
    printf("Hola Alejandro!\n");

    saveProductos("../datos.txt",productos,numProductos);
    return 0;
}
