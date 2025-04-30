#!/bin/bash

echo -e "Building Docker image: UR_easy_handeye2:latest"

DOCKER_BUILDKIT=1 \
docker build --pull --rm \
    -f .docker/Dockerfile \
    --build-arg BUILDKIT_INLINE_CACHE=1 \
    --tag UR_easy_handeye2:latest .
