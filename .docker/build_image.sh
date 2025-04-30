#!/bin/bash

echo -e "Building Docker image: ur_easy_handeye2:latest"

DOCKER_BUILDKIT=1 \
docker build --pull --rm \
    -f .docker/Dockerfile \
    --build-arg BUILDKIT_INLINE_CACHE=1 \
    --tag ur_easy_handeye2:latest .
