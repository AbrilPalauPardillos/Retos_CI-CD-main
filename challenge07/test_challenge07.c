#include <assert.h>

/* Declaración externa de la función a probar */
int suma(int a, int b);

int main(void) {
    assert(suma(0, 0) == 0);
    assert(suma(1, 2) == 3);
    assert(suma(-1, -2) == -3);
    assert(suma(100, -50) == 50);

    return 0;
}
