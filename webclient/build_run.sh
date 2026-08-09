docker stop tdracer-client;
docker rm tdracer-client;
docker build . -t tdracer:latest;

set -a
source ./docker.env
set +a

docker run --name tdracer-client --env-file ./docker.env --expose $SERVER_PORT -p $SERVER_PORT:$SERVER_PORT tdracer:latest;