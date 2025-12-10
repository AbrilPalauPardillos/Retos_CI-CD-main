# Challenge 07: Primer workflow en GitHub Actions

## Descripción del reto
En este reto vas a dar el salto a la integración continua en la nube. Usarás **GitHub Actions** para compilar y ejecutar tus pruebas cada vez que hagas un push al repositorio.

## Requisitos
1. Crear un archivo de workflow en `.github/workflows/ci.yml` que:
   - Compile tu programa en C.
   - Ejecute los tests.

2. Condiciones:
   - Debe ejecutarse en cada push y pull request.
   - Usar la imagen `ubuntu-latest`.

3. Proyecto de ejemplo:
   - Utiliza tu programa de suma (`suma.c`) y las pruebas de retos anteriores.

## Entregables
- `starter.c`
- `test_challenge07.c`
- `Makefile`
- `.github/workflows/ci.yml`
