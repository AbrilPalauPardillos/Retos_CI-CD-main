# Challenge 12: Push a Docker Hub (CD)

## Descripción del reto
En este reto aprenderás a implementar **Continuous Deployment (CD)** publicando tu imagen Docker en Docker Hub automáticamente con GitHub Actions.

## Requisitos
1. Configurar secretos en tu repositorio de GitHub:
   - `DOCKERHUB_USERNAME`
   - `DOCKERHUB_TOKEN`

2. Modificar el workflow para que:
   - Inicie sesión en Docker Hub.
   - Construya la imagen.
   - Publique la imagen en tu repositorio de Docker Hub.

3. Proyecto de ejemplo:
   - Usa el Dockerfile de los retos anteriores.

## Entregables
- `starter.c`
- `Makefile`
- `Dockerfile`
- `.github/workflows/docker-publish.yml`
