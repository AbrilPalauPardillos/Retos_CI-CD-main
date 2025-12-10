# Challenge 04: Makefile avanzado

## Descripción del reto
En este reto aprenderás a organizar un proyecto en C en varios archivos fuente y cabeceras. 
También crearás un Makefile avanzado con diferentes reglas para compilar, limpiar y reconstruir el proyecto.

## Requisitos
1. Código:
   - Divide la calculadora del reto anterior en varios archivos (`suma.c`, `resta.c`, etc.) y un archivo de cabecera `calc.h`.

2. Makefile:
   - Debe tener las reglas:
     - `all`: compila el proyecto.
     - `clean`: elimina archivos objeto.
     - `fclean`: elimina ejecutables y objetos.
     - `re`: reconstruye todo.
     - `test`: compila y ejecuta los tests.

3. Pruebas unitarias:
   - Verifica que todas las operaciones funcionan como antes.

## Entregables
- Archivos `.c` y `.h` iniciales.
- `Makefile` avanzado.
- `test_challenge04.c` con pruebas unitarias.
