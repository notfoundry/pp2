#!/bin/sh -l
set -x

INPUT_BRANCH=$1
OUTPUT_BRANCH=$2

cd /github/workspace
which python3