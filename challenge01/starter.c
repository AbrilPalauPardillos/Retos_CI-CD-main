#include <stdio.h>
#include <assert.h> 

// Declaración de la función a implementar
int suma(int a, int b){
    // Implementa la función para sumar dos enteros
    return a + b;
}


void test_suma() {
    // Prueba 1: Suma de números positivos (3 + 5 = 8)
    assert(suma(3, 5) == 8);
    // Prueba 2: Suma de números negativos (-3 + -5 = -8)
    assert(suma(-3, -5) == -8);
    // Prueba 3: Suma de positivo y negativo (3 + -5 = -2)
    assert(suma(3, -5) == -2);
}

int main() {
    test_suma(); 
    printf("Todas las pruebas pasaron bien hechas.\n");
    return 0;
}
