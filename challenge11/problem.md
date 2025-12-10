# Challenge 11: GitHub Actions + Docker

## Descripción del reto
En este reto vas a configurar un workflow en GitHub Actions que compile tu aplicación dentro de Docker y ejecute los tests dentro del contenedor.

## Requisitos
1. Crear/modificar `.github/workflows/ci.yml` para que:
   - Construya la imagen Docker.
   - Ejecute el contenedor y corra los tests.

2. Usa la acción `docker/build-push-action` o un comando `docker build`.

3. Proyecto de ejemplo:
   - Usa el Dockerfile del reto anterior.

## Entregables
- `starter.c`
- `Makefile`
- `Dockerfile`
- `.github/workflows/ci.yml`
