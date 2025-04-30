
echo -e "Building image easy_handeye2:latest"

DOCKER_BUILDKIT=1 \
docker build --pull --rm -f ./.docker/Dockerfile \
--build-arg BUILDKIT_INLINE_CACHE=1 \
--target base \
--tag easy_handeye2:latest .
