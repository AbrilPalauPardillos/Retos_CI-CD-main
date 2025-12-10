# Challenge 06: Pipeline CI local (simulado)

## Descripción del reto
En este reto simularás un pipeline de integración continua en tu máquina local usando un Makefile.

## Requisitos
1. El pipeline debe tener pasos:
   - `build`: compilar el programa.
   - `test`: ejecutar pruebas unitarias.
   - `package`: generar un binario final en una carpeta `dist/`.

2. Makefile:
   - Incluir reglas `build`, `test`, `package`, `clean`.

3. Pruebas unitarias:
   - Deben ejecutarse automáticamente en el paso `test`.

## Entregables
- `starter.c`
- `test_challenge06.c`
- `Makefile`
