FROM alpine:3.15.0

RUN apk add --no-cache \
    g++ make python3 py3-pip cmake doxygen graphviz git
RUN python3 -m pip --disable-pip-version-check install \
    sphinx breathe requests sphinx-jinja furo myst-parser

COPY entrypoint.sh /entrypoint.sh

RUN ["chmod", "+x", "/entrypoint.sh"]
ENTRYPOINT ["/entrypoint.sh"]