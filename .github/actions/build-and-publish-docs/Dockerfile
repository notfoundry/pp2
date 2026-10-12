FROM python:3.12-slim-bookworm

RUN apt-get update && apt-get install --yes --no-install-recommends \
    g++ make cmake doxygen graphviz git \
    && rm -rf /var/lib/apt/lists/*
RUN python3 -m pip --disable-pip-version-check install --upgrade pip
RUN python3 -m pip --disable-pip-version-check install \
    sphinx==8.2.3 breathe==4.36.0 requests==2.32.5 \
    sphinx-jinja==2.0.2 furo==2025.12.19 myst-parser==4.0.1

COPY entrypoint.sh /entrypoint.sh

RUN ["chmod", "+x", "/entrypoint.sh"]
ENTRYPOINT ["/entrypoint.sh"]
