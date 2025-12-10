#include <stdio.h>

int suma(int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);
int division(int a, int b);

int main(void) {
    int a = 10, b = 2;
    printf("Suma: %d + %d = %d\n", a, b, suma(a, b));
    printf("Resta: %d - %d = %d\n", a, b, resta(a, b));
    printf("Multiplicacion: %d * %d = %d\n", a, b, multiplicacion(a, b));
    printf("Division: %d / %d = %d\n", a, b, division(a, b));

    /* Ejemplo division por cero */
    b = 0;
    printf("Division: %d / %d = %d\n", a, b, division(a, b));

    return 0;
}

/* OPERACIONES */
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
        fprintf(stderr, "Error: division por cero\n");
        return 0;
    }
    return a / b;
}
