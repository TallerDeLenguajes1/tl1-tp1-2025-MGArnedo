#include <stdio.h>

// Función que devuelve el cuadrado de un número
int cuadrado(int numero) {
    return numero * numero;
}

// Función que devuelve el cuadrado de un número tipo void
void cuadradoVoid(int numero, int *resultado) {
    *resultado = numero * numero;
}

// Función que muestra dirección y contenido de una variable
void mostrarDireccionYContenido(int variable) {
    printf("Contenido: %d\n", variable);
    printf("Direccion: %p\n", &variable);
}

// Función para invertir dos valores
void invertir(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Función para ordenar dos valores de menor a mayor
void ordenar(int *a, int *b) {
    if (*a > *b) {
        invertir(a, b);
    }
}

int main() {
    int numero = 9, resultado;
    int a, b;

    // a) Función que devuelve el cuadrado de un número
    printf("Cuadrado de %d: %d\n", numero, cuadrado(numero));

    // b) Función que devuelve tipo void
    cuadradoVoid(numero, &resultado);
    printf("Cuadrado de %d tipo void: %d\n", numero, resultado);

    // c) Dirección y contenido de una variable
    mostrarDireccionYContenido(numero);

    //Leer pares de valores para probar las funciones
    printf("Ingrese por pantalla dos valores separados por un espacio: ");
    scanf ("%d %d", &a, &b);

    // d) Invertir dos valores
    printf("Antes de invertir: a = %d, b = %d\n", a, b);
    invertir(&a, &b);
    printf("Despues de invertir: a = %d, b = %d\n", a, b);

    // e) Ordenar dos valores
    printf("Antes de ordenar: a = %d, b = %d\n", a, b);
    ordenar(&a, &b);
    printf("Despues de ordenar: a = %d, b = %d\n", a, b);

    return 0;
}
