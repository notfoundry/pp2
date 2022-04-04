#!/bin/sh -l
set -x

OUTPUT_BRANCH=$1

mkdir build && cd build
cmake /github/workspace
make Sphinx
