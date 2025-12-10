#include <stdio.h>
#include <assert.h>

int suma(int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);
int division(int a, int b);

int main(void) {
    /* Pruebas con assert según el enunciado */
    /* Sumas */
    assert(suma(2, 3) == 5);
    assert(suma(-2, -3) == -5);
    assert(suma(5, -2) == 3);

    /* Restas */
    assert(resta(5, 3) == 2);
    assert(resta(-5, -3) == -2);
    assert(resta(5, -3) == 8);

    /* Multiplicacion */
    assert(multiplicacion(4, 3) == 12);
    assert(multiplicacion(-4, 3) == -12);
    assert(multiplicacion(-4, -3) == 12);

    /* Division: normales */
    assert(division(10, 2) == 5);
    assert(division(-10, 2) == -5);
    assert(division(9, 2) == 4); /* division entera */

    printf("Todas las pruebas pasaron correctamente.\n");
    return 0;
}

/* Implementaciones */
int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int multiplicacion(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    if (b == 0) {
        /* Retornar 0 y no abortar el programa para permitir assert en pruebas */
        fprintf(stderr, "Error: division por cero\n");
        return 0;
    }
    return a / b;
}
