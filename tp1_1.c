#include <stdio.h>

int main() {
    //Ejercicio 3a)
    printf("hola mundo\n");
    //Ejercicio 3e)
    int variable = 23; // Variable entera
    int *puntero = &variable; // Puntero que apunta a la variable
    printf("Contenido del puntero: %d\n", *puntero);
    printf("Direccion de memoria almacenada por el puntero: %p\n", (puntero));
    printf("Direccion de memoria de la variable: %p\n", &variable);
    printf("Direccion de memoria del puntero: %p\n", &puntero);
    printf("Tamano de memoria utilizado por la variable: %d bytes\n", sizeof(variable));
    return 0;
}
