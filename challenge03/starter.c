#include <stdio.h>
#include <stddef.h>
#include <assert.h>
#include <string.h>

size_t mi_strlen(const char *s);
int mi_strcmp(const char *s1, const char *s2);
char *mi_strcpy(char *dest, const char *src);

int main(void) {
    /* Pruebas para mi_strlen */
    assert(mi_strlen("") == 0);
    assert(mi_strlen("hola") == 4);
    assert(mi_strlen("hola mundo") == strlen("hola mundo"));

    /* Pruebas para mi_strcmp (comparar con strcmp) */
    assert(mi_strcmp("", "") == 0);
    assert(mi_strcmp("a", "b") == strcmp("a", "b"));
    assert(mi_strcmp("hola", "hola") == 0);
    assert(mi_strcmp("hola", "holA") == strcmp("hola", "holA"));

    /* Pruebas para mi_strcpy */
    char dest[32];
    mi_strcpy(dest, "");
    assert(strcmp(dest, "") == 0);
    mi_strcpy(dest, "prueba");
    assert(strcmp(dest, "prueba") == 0);

    printf("Todas las pruebas pasaron correctamente.\n");
    return 0;
}

/* Implementación de las funciones */
size_t mi_strlen(const char *s) {
    const char *p = s;
    while (*p) p++;
    return (size_t)(p - s);
}

int mi_strcmp(const char *s1, const char *s2) {
    const unsigned char *a = (const unsigned char *)s1;
    const unsigned char *b = (const unsigned char *)s2;
    while (*a && (*a == *b)) {
        a++; b++;
    }
    return (int)(*a - *b);
}

char *mi_strcpy(char *dest, const char *src) {
    char *d = dest;
    while ((*d++ = *src++) != '\0') {
        ;
    }
    return dest;
}
