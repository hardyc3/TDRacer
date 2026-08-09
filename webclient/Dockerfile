FROM node:24-slim

# Refresh OS packages to pull in security fixes for the base image
RUN set -eux; \
	apt-get update; \
	apt-get upgrade -y; \
	apt-get install -y --no-install-recommends ca-certificates; \
	rm -rf /var/lib/apt/lists/*;

RUN mkdir -p /app/webclient/client
RUN mkdir -p /app/webclient/server

COPY package.json /app/webclient/package.json
RUN cd /app/webclient && npm install

COPY client/ /app/webclient/client/
COPY server/ /app/webclient/server/

WORKDIR /app/
CMD ["node", "webclient/server/server.ts"]