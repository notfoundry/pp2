FROM alpine:3.15.0

RUN apk add --no-cache \
    python3 py3-pip cmake doxygen
RUN python3 -m pip --disable-pip-version-check install \
    sphinx breathe sphinx-book-theme

COPY entrypoint.sh /entrypoint.sh

RUN ["chmod", "+x", "/entrypoint.sh"]
ENTRYPOINT ["/entrypoint.sh"]