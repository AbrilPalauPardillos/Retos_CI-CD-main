# Challenge 10: Dockerizar la aplicación en C

## Descripción del reto
En este reto vas a crear un **Dockerfile** que compile y ejecute tu aplicación en C dentro de un contenedor Docker.

## Requisitos
1. Crear un `Dockerfile` que:
   - Use una imagen base como `gcc:latest`.
   - Copie el código fuente.
   - Compile el programa.
   - Defina un `ENTRYPOINT` que ejecute el binario.

2. Probar la imagen:
   - `docker build -t miapp .`
   - `docker run --rm miapp`

3. Proyecto de ejemplo:
   - Usa tu calculadora del reto anterior.

## Entregables
- `starter.c`
- `Makefile`
- `Dockerfile`
