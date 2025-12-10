#include <stdio.h>
#include <assert.h>

int suma(int a, int b) {
    return a + b;
}

int main(void) {
    /* Pruebas con assert */
    assert(suma(2, 3) == 5);
    assert(suma(-2, -3) == -5);
    assert(suma(10, -4) == 6);

    printf("Todas las pruebas pasaron correctamente.\n");
    return 0;
}
