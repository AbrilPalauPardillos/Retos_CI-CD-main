#include <stdio.h>

int suma(int a, int b) { return a + b; }

int main() {
    printf("Resultado en Docker: %d\n", suma(4,5));
    return 0;
}
